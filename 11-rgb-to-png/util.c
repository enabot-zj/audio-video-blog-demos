//
// Created by hubin on 2019/10/14.
//

#include <stdint.h>
#include <stdbool.h>

//const uint32_t MOD_ADLER = 65521;
//uint32_t adler32(unsigned char *data, uint32_t len)
///*
//    where data is the location of the data in physical memory and
//    len is the length of the data in bytes
//*/
//{
//    uint32_t a = 1, b = 0;
//    uint32_t index;
//
//    // Process each byte of the data in order
//    for (index = 0; index < len; ++index)
//    {
//        a = (a + data[index]) % MOD_ADLER;
//        b = (b + a) % MOD_ADLER;
//    }
//
//    return (b << 16) | a;
//}


// 彩虹的七种颜色
uint32_t rainbowColors[] = {
        0XFF0000, // 红
        0XFFA500, // 橙
        0XFFFF00, // 黄
        0X00FF00, // 绿
        0X007FFF, // 青
        0X0000FF, // 蓝
        0X8B00FF  // 紫
};

void genRGB24Data(uint8_t *rgbData, int width, int height) {

    for (int i = 0; i < width; ++i) {
        // 当前颜色
        uint32_t currentColor = rainbowColors[0];
        if(i < 100) {
            currentColor = rainbowColors[0];
        } else if(i < 200) {
            currentColor = rainbowColors[1];
        } else if(i < 300) {
            currentColor = rainbowColors[2];
        } else if(i < 400) {
            currentColor = rainbowColors[3];
        } else if(i < 500) {
            currentColor = rainbowColors[4];
        } else if(i < 600) {
            currentColor = rainbowColors[5];
        } else if(i < 700) {
            currentColor = rainbowColors[6];
        }
        // 当前颜色 R 分量
        uint8_t R = (currentColor & 0xFF0000) >> 16;
        // 当前颜色 G 分量
        uint8_t G = (currentColor & 0x00FF00) >> 8;
        // 当前颜色 B 分量
        uint8_t B = currentColor & 0x0000FF;

        rgbData[3*(i*height)+i] = 0x00;

        for (int j = 0; j < height; ++j) {
            int currentIndex = 3*(i*height+j)+(i+1);
//            int currentIndex = 3*(i*height+j);
            rgbData[currentIndex] = R;
            rgbData[currentIndex+1] = G;
            rgbData[currentIndex+2] = B;
        }
    }
}


uint32_t crc32_table[256];

void make_crc32_table() {
    uint32_t c;
    int i = 0;
    int bit = 0;

    for(i = 0; i < 256; i++) {
        c  = (uint32_t)i;

        for(bit = 0; bit < 8; bit++) {
            if(c&1) {
                c = (c >> 1)^(0xEDB88320);
            } else {
                c =  c >> 1;
            }

        }
        crc32_table[i] = c;
    }
}

uint32_t make_crc(uint32_t crc, uint8_t *data, uint32_t size) {
    while(size--)
        crc = (crc >> 8)^(crc32_table[(crc ^ *data++)&0xff]);
    return crc;
}


bool IsBigEndianOrder() {
    int iVal = 1;
    char *pChar = (char*)(&iVal);
    if(*pChar==1) return false; //(0x01000000) Windows 采用的是小端法
    else return true; //(0x00000001)  Aix采用的是大端法
}

// 16bit大小端转换
uint16_t switchUint16(uint16_t s) {
    return ((s & 0x00FF) << 8) | ((s & 0xFF00) >> 8);
}

// 32bit大小端转换
uint32_t switchUint32(uint32_t i) {
    return ((i & 0x000000FF) << 24) | ((i & 0x0000FF00) << 8) | ((i & 0x00FF0000) >> 8) | ((i & 0xFF000000) >> 24);
}