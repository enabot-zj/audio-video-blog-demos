//
// Created by hubin on 2019/9/16.
//

#ifndef IMAGE_DEMO_COMMON_H
#define IMAGE_DEMO_COMMON_H

struct rgb_t
{
    unsigned char   red;
    unsigned char green;
    unsigned char  blue;
};
typedef struct rgb_t  rgb_t;

const rgb_t jet_colormap[1000] = {
        { 29,   0, 102}, { 23,   0, 107}, { 17,   0, 112}, { 12,   0, 117}, {  6,   0, 122},
        {  0,   0, 127}, {  0,   0, 128}, {  0,   0, 129}, {  0,   0, 129}, {  0,   0, 130},
        {  0,   0, 131}, {  0,   0, 132}, {  0,   0, 133}, {  0,   0, 133}, {  0,   0, 134},
        {  0,   0, 135}, {  0,   0, 136}, {  0,   0, 137}, {  0,   0, 138}, {  0,   0, 140},
        {  0,   0, 141}, {  0,   0, 142}, {  0,   0, 143}, {  0,   0, 145}, {  0,   0, 146},
        {  0,   0, 147}, {  0,   0, 148}, {  0,   0, 150}, {  0,   0, 151}, {  0,   0, 152},
        {  0,   0, 153}, {  0,   0, 154}, {  0,   0, 156}, {  0,   0, 157}, {  0,   0, 158},
        {  0,   0, 159}, {  0,   0, 160}, {  0,   0, 161}, {  0,   0, 163}, {  0,   0, 164},
        {  0,   0, 165}, {  0,   0, 166}, {  0,   0, 168}, {  0,   0, 169}, {  0,   0, 170},
        {  0,   0, 171}, {  0,   0, 173}, {  0,   0, 174}, {  0,   0, 175}, {  0,   0, 176},
        {  0,   0, 178}, {  0,   0, 179}, {  0,   0, 180}, {  0,   0, 181}, {  0,   0, 183},
        {  0,   0, 184}, {  0,   0, 185}, {  0,   0, 186}, {  0,   0, 188}, {  0,   0, 189},
        {  0,   0, 190}, {  0,   0, 191}, {  0,   0, 193}, {  0,   0, 194}, {  0,   0, 195},
        {  0,   0, 196}, {  0,   0, 197}, {  0,   0, 198}, {  0,   0, 200}, {  0,   0, 201},
        {  0,   0, 202}, {  0,   0, 203}, {  0,   0, 204}, {  0,   0, 206}, {  0,   0, 207},
        {  0,   0, 208}, {  0,   0, 209}, {  0,   0, 211}, {  0,   0, 212}, {  0,   0, 213},
        {  0,   0, 214}, {  0,   0, 216}, {  0,   0, 217}, {  0,   0, 218}, {  0,   0, 219},
        {  0,   0, 221}, {  0,   0, 222}, {  0,   0, 223}, {  0,   0, 225}, {  0,   0, 226},
        {  0,   0, 227}, {  0,   0, 228}, {  0,   0, 230}, {  0,   0, 231}, {  0,   0, 232},
        {  0,   0, 233}, {  0,   0, 234}, {  0,   0, 234}, {  0,   0, 235}, {  0,   0, 236},
        {  0,   0, 237}, {  0,   0, 238}, {  0,   0, 239}, {  0,   0, 239}, {  0,   0, 240},
        {  0,   0, 241}, {  0,   0, 242}, {  0,   0, 243}, {  0,   0, 244}, {  0,   0, 246},
        {  0,   0, 247}, {  0,   0, 248}, {  0,   0, 249}, {  0,   0, 250}, {  0,   0, 251},
        {  0,   0, 253}, {  0,   0, 254}, {  0,   0, 254}, {  0,   0, 254}, {  0,   0, 254},
        {  0,   0, 254}, {  0,   0, 254}, {  0,   0, 255}, {  0,   0, 255}, {  0,   0, 255},
        {  0,   0, 255}, {  0,   0, 255}, {  0,   0, 255}, {  0,   1, 255}, {  0,   1, 255},
        {  0,   2, 255}, {  0,   3, 255}, {  0,   3, 255}, {  0,   4, 255}, {  0,   5, 255},
        {  0,   6, 255}, {  0,   6, 255}, {  0,   7, 255}, {  0,   8, 255}, {  0,   9, 255},
        {  0,  10, 255}, {  0,  11, 255}, {  0,  12, 255}, {  0,  13, 255}, {  0,  14, 255},
        {  0,  15, 255}, {  0,  16, 255}, {  0,  17, 255}, {  0,  18, 255}, {  0,  19, 255},
        {  0,  21, 255}, {  0,  22, 255}, {  0,  23, 255}, {  0,  24, 255}, {  0,  25, 255},
        {  0,  26, 255}, {  0,  27, 255}, {  0,  28, 255}, {  0,  29, 255}, {  0,  30, 255},
        {  0,  31, 255}, {  0,  32, 255}, {  0,  34, 255}, {  0,  35, 255}, {  0,  36, 255},
        {  0,  37, 255}, {  0,  38, 255}, {  0,  39, 255}, {  0,  40, 255}, {  0,  41, 255},
        {  0,  42, 255}, {  0,  43, 255}, {  0,  44, 255}, {  0,  45, 255}, {  0,  46, 255},
        {  0,  48, 255}, {  0,  49, 255}, {  0,  50, 255}, {  0,  51, 255}, {  0,  52, 255},
        {  0,  53, 255}, {  0,  54, 255}, {  0,  55, 255}, {  0,  56, 255}, {  0,  57, 255},
        {  0,  58, 255}, {  0,  58, 255}, {  0,  59, 255}, {  0,  60, 255}, {  0,  60, 255},
        {  0,  61, 255}, {  0,  62, 255}, {  0,  63, 255}, {  0,  63, 255}, {  0,  64, 255},
        {  0,  65, 255}, {  0,  66, 255}, {  0,  67, 255}, {  0,  68, 255}, {  0,  69, 255},
        {  0,  71, 255}, {  0,  72, 255}, {  0,  73, 255}, {  0,  74, 255}, {  0,  75, 255},
        {  0,  76, 255}, {  0,  77, 255}, {  0,  78, 255}, {  0,  79, 255}, {  0,  80, 255},
        {  0,  81, 255}, {  0,  82, 255}, {  0,  84, 255}, {  0,  85, 255}, {  0,  86, 255},
        {  0,  87, 255}, {  0,  88, 255}, {  0,  89, 255}, {  0,  90, 255}, {  0,  91, 255},
        {  0,  92, 255}, {  0,  93, 255}, {  0,  94, 255}, {  0,  95, 255}, {  0,  96, 255},
        {  0,  98, 255}, {  0,  99, 255}, {  0, 100, 255}, {  0, 101, 255}, {  0, 102, 255},
        {  0, 103, 255}, {  0, 104, 255}, {  0, 105, 255}, {  0, 106, 255}, {  0, 107, 255},
        {  0, 108, 255}, {  0, 109, 255}, {  0, 111, 255}, {  0, 112, 255}, {  0, 113, 255},
        {  0, 114, 255}, {  0, 115, 255}, {  0, 116, 255}, {  0, 117, 255}, {  0, 118, 255},
        {  0, 119, 255}, {  0, 120, 255}, {  0, 121, 255}, {  0, 122, 255}, {  0, 123, 255},
        {  0, 125, 255}, {  0, 126, 255}, {  0, 127, 255}, {  0, 128, 255}, {  0, 129, 255},
        {  0, 130, 255}, {  0, 131, 255}, {  0, 132, 255}, {  0, 133, 255}, {  0, 134, 255},
        {  0, 135, 255}, {  0, 136, 255}, {  0, 138, 255}, {  0, 139, 255}, {  0, 140, 255},
        {  0, 141, 255}, {  0, 142, 255}, {  0, 143, 255}, {  0, 144, 255}, {  0, 145, 255},
        {  0, 146, 255}, {  0, 147, 255}, {  0, 148, 255}, {  0, 149, 255}, {  0, 150, 255},
        {  0, 150, 255}, {  0, 151, 255}, {  0, 152, 255}, {  0, 153, 255}, {  0, 153, 255},
        {  0, 154, 255}, {  0, 155, 255}, {  0, 155, 255}, {  0, 156, 255}, {  0, 157, 255},
        {  0, 158, 255}, {  0, 159, 255}, {  0, 161, 255}, {  0, 162, 255}, {  0, 163, 255},
        {  0, 164, 255}, {  0, 165, 255}, {  0, 166, 255}, {  0, 167, 255}, {  0, 168, 255},
        {  0, 169, 255}, {  0, 170, 255}, {  0, 171, 255}, {  0, 172, 255}, {  0, 173, 255},
        {  0, 175, 255}, {  0, 176, 255}, {  0, 177, 255}, {  0, 178, 255}, {  0, 179, 255},
        {  0, 180, 255}, {  0, 181, 255}, {  0, 182, 255}, {  0, 183, 255}, {  0, 184, 255},
        {  0, 185, 255}, {  0, 186, 255}, {  0, 188, 255}, {  0, 189, 255}, {  0, 190, 255},
        {  0, 191, 255}, {  0, 192, 255}, {  0, 193, 255}, {  0, 194, 255}, {  0, 195, 255},
        {  0, 196, 255}, {  0, 197, 255}, {  0, 198, 255}, {  0, 199, 255}, {  0, 200, 255},
        {  0, 202, 255}, {  0, 203, 255}, {  0, 204, 255}, {  0, 205, 255}, {  0, 206, 255},
        {  0, 207, 255}, {  0, 208, 255}, {  0, 209, 255}, {  0, 210, 255}, {  0, 211, 255},
        {  0, 212, 255}, {  0, 213, 255}, {  0, 215, 255}, {  0, 216, 255}, {  0, 217, 255},
        {  0, 218, 254}, {  0, 219, 253}, {  0, 220, 252}, {  0, 221, 252}, {  0, 222, 251},
        {  0, 223, 250}, {  0, 224, 250}, {  0, 225, 249}, {  0, 226, 248}, {  0, 227, 247},
        {  0, 229, 247}, {  1, 230, 246}, {  2, 231, 245}, {  3, 232, 244}, {  3, 233, 243},
        {  4, 234, 242}, {  5, 235, 241}, {  5, 236, 240}, {  6, 237, 239}, {  7, 238, 238},
        {  8, 239, 238}, {  8, 240, 237}, {  9, 241, 236}, { 10, 242, 236}, { 10, 242, 235},
        { 11, 243, 235}, { 11, 244, 234}, { 12, 245, 234}, { 13, 245, 233}, { 13, 246, 232},
        { 14, 247, 232}, { 15, 247, 231}, { 15, 248, 231}, { 16, 249, 230}, { 17, 249, 229},
        { 18, 250, 228}, { 18, 251, 227}, { 19, 251, 226}, { 20, 252, 225}, { 21, 253, 224},
        { 22, 253, 224}, { 23, 254, 223}, { 23, 254, 222}, { 24, 255, 221}, { 25, 255, 220},
        { 26, 255, 219}, { 27, 255, 218}, { 28, 255, 218}, { 29, 255, 217}, { 30, 255, 216},
        { 30, 255, 215}, { 31, 255, 214}, { 32, 255, 214}, { 33, 255, 213}, { 34, 255, 212},
        { 35, 255, 211}, { 36, 255, 210}, { 37, 255, 209}, { 38, 255, 208}, { 39, 255, 207},
        { 39, 255, 207}, { 40, 255, 206}, { 41, 255, 205}, { 42, 255, 204}, { 43, 255, 203},
        { 44, 255, 202}, { 45, 255, 201}, { 46, 255, 200}, { 47, 255, 199}, { 48, 255, 198},
        { 48, 255, 198}, { 49, 255, 197}, { 50, 255, 196}, { 51, 255, 195}, { 52, 255, 194},
        { 53, 255, 193}, { 54, 255, 192}, { 55, 255, 191}, { 55, 255, 191}, { 56, 255, 190},
        { 57, 255, 189}, { 58, 255, 188}, { 59, 255, 187}, { 60, 255, 186}, { 60, 255, 186},
        { 61, 255, 185}, { 62, 255, 184}, { 63, 255, 183}, { 64, 255, 182}, { 65, 255, 181},
        { 65, 255, 181}, { 66, 255, 180}, { 67, 255, 179}, { 68, 255, 178}, { 69, 255, 177},
        { 70, 255, 176}, { 71, 255, 175}, { 72, 255, 174}, { 73, 255, 173}, { 74, 255, 172},
        { 74, 255, 172}, { 75, 255, 171}, { 76, 255, 170}, { 77, 255, 169}, { 78, 255, 168},
        { 79, 255, 167}, { 80, 255, 166}, { 81, 255, 165}, { 82, 255, 164}, { 83, 255, 163},
        { 83, 255, 163}, { 84, 255, 162}, { 84, 255, 162}, { 85, 255, 161}, { 85, 255, 161},
        { 86, 255, 160}, { 87, 255, 159}, { 87, 255, 159}, { 88, 255, 158}, { 88, 255, 158},
        { 89, 255, 157}, { 89, 255, 157}, { 90, 255, 156}, { 91, 255, 155}, { 92, 255, 154},
        { 93, 255, 153}, { 94, 255, 152}, { 95, 255, 151}, { 96, 255, 150}, { 97, 255, 149},
        { 97, 255, 149}, { 98, 255, 148}, { 99, 255, 147}, {100, 255, 146}, {101, 255, 145},
        {102, 255, 144}, {102, 255, 143}, {103, 255, 142}, {104, 255, 141}, {105, 255, 140},
        {106, 255, 140}, {107, 255, 139}, {107, 255, 138}, {108, 255, 137}, {109, 255, 136},
        {110, 255, 135}, {111, 255, 134}, {112, 255, 134}, {113, 255, 133}, {114, 255, 132},
        {114, 255, 131}, {115, 255, 130}, {116, 255, 130}, {117, 255, 129}, {118, 255, 128},
        {119, 255, 127}, {120, 255, 126}, {121, 255, 125}, {122, 255, 124}, {123, 255, 123},
        {123, 255, 123}, {124, 255, 122}, {125, 255, 121}, {126, 255, 120}, {127, 255, 119},
        {128, 255, 118}, {129, 255, 117}, {130, 255, 116}, {130, 255, 115}, {131, 255, 114},
        {132, 255, 114}, {133, 255, 113}, {134, 255, 112}, {134, 255, 111}, {135, 255, 110},
        {136, 255, 109}, {137, 255, 108}, {138, 255, 107}, {139, 255, 107}, {140, 255, 106},
        {140, 255, 105}, {141, 255, 104}, {142, 255, 103}, {143, 255, 102}, {144, 255, 102},
        {145, 255, 101}, {146, 255, 100}, {147, 255,  99}, {148, 255,  98}, {149, 255,  97},
        {149, 255,  97}, {150, 255,  96}, {151, 255,  95}, {152, 255,  94}, {153, 255,  93},
        {154, 255,  92}, {155, 255,  91}, {156, 255,  90}, {157, 255,  89}, {157, 255,  89},
        {158, 255,  88}, {158, 255,  88}, {159, 255,  87}, {159, 255,  87}, {160, 255,  86},
        {161, 255,  85}, {161, 255,  85}, {162, 255,  84}, {162, 255,  84}, {163, 255,  83},
        {163, 255,  83}, {164, 255,  82}, {165, 255,  81}, {166, 255,  80}, {167, 255,  79},
        {168, 255,  78}, {169, 255,  77}, {170, 255,  76}, {171, 255,  75}, {172, 255,  74},
        {172, 255,  74}, {173, 255,  73}, {174, 255,  72}, {175, 255,  71}, {176, 255,  70},
        {177, 255,  69}, {178, 255,  68}, {179, 255,  67}, {180, 255,  66}, {181, 255,  65},
        {181, 255,  65}, {182, 255,  64}, {183, 255,  63}, {184, 255,  62}, {185, 255,  61},
        {186, 255,  60}, {186, 255,  60}, {187, 255,  59}, {188, 255,  58}, {189, 255,  57},
        {190, 255,  56}, {191, 255,  55}, {191, 255,  55}, {192, 255,  54}, {193, 255,  53},
        {194, 255,  52}, {195, 255,  51}, {196, 255,  50}, {197, 255,  49}, {198, 255,  48},
        {198, 255,  48}, {199, 255,  47}, {200, 255,  46}, {201, 255,  45}, {202, 255,  44},
        {203, 255,  43}, {204, 255,  42}, {205, 255,  41}, {206, 255,  40}, {207, 255,  39},
        {207, 255,  39}, {208, 255,  38}, {209, 255,  37}, {210, 255,  36}, {211, 255,  35},
        {212, 255,  34}, {213, 255,  33}, {214, 255,  32}, {214, 255,  31}, {215, 255,  30},
        {216, 255,  30}, {217, 255,  29}, {218, 255,  28}, {218, 255,  27}, {219, 255,  26},
        {220, 255,  25}, {221, 255,  24}, {222, 255,  23}, {223, 255,  23}, {224, 255,  22},
        {224, 255,  21}, {225, 255,  20}, {226, 255,  19}, {227, 255,  18}, {228, 255,  18},
        {229, 255,  17}, {230, 255,  16}, {231, 255,  15}, {231, 255,  15}, {232, 255,  14},
        {232, 255,  13}, {233, 255,  13}, {234, 255,  12}, {234, 255,  11}, {235, 255,  11},
        {235, 255,  10}, {236, 255,  10}, {236, 255,   9}, {237, 255,   8}, {238, 254,   8},
        {238, 253,   7}, {239, 252,   6}, {240, 251,   5}, {241, 250,   5}, {242, 249,   4},
        {243, 248,   3}, {244, 247,   3}, {245, 246,   2}, {246, 246,   1}, {247, 245,   0},
        {247, 243,   0}, {248, 242,   0}, {249, 242,   0}, {250, 241,   0}, {250, 240,   0},
        {251, 239,   0}, {252, 238,   0}, {252, 237,   0}, {253, 236,   0}, {254, 235,   0},
        {255, 234,   0}, {255, 233,   0}, {255, 232,   0}, {255, 231,   0}, {255, 230,   0},
        {255, 229,   0}, {255, 228,   0}, {255, 227,   0}, {255, 226,   0}, {255, 225,   0},
        {255, 224,   0}, {255, 223,   0}, {255, 222,   0}, {255, 221,   0}, {255, 220,   0},
        {255, 219,   0}, {255, 218,   0}, {255, 217,   0}, {255, 216,   0}, {255, 215,   0},
        {255, 214,   0}, {255, 213,   0}, {255, 212,   0}, {255, 211,   0}, {255, 210,   0},
        {255, 209,   0}, {255, 208,   0}, {255, 207,   0}, {255, 206,   0}, {255, 205,   0},
        {255, 204,   0}, {255, 203,   0}, {255, 202,   0}, {255, 201,   0}, {255, 200,   0},
        {255, 199,   0}, {255, 198,   0}, {255, 197,   0}, {255, 196,   0}, {255, 195,   0},
        {255, 194,   0}, {255, 193,   0}, {255, 192,   0}, {255, 191,   0}, {255, 190,   0},
        {255, 189,   0}, {255, 188,   0}, {255, 187,   0}, {255, 186,   0}, {255, 185,   0},
        {255, 184,   0}, {255, 183,   0}, {255, 182,   0}, {255, 180,   0}, {255, 179,   0},
        {255, 178,   0}, {255, 177,   0}, {255, 176,   0}, {255, 176,   0}, {255, 175,   0},
        {255, 175,   0}, {255, 174,   0}, {255, 173,   0}, {255, 173,   0}, {255, 172,   0},
        {255, 171,   0}, {255, 171,   0}, {255, 170,   0}, {255, 169,   0}, {255, 168,   0},
        {255, 167,   0}, {255, 166,   0}, {255, 165,   0}, {255, 164,   0}, {255, 163,   0},
        {255, 162,   0}, {255, 161,   0}, {255, 160,   0}, {255, 159,   0}, {255, 158,   0},
        {255, 157,   0}, {255, 156,   0}, {255, 155,   0}, {255, 154,   0}, {255, 153,   0},
        {255, 152,   0}, {255, 151,   0}, {255, 150,   0}, {255, 150,   0}, {255, 149,   0},
        {255, 147,   0}, {255, 146,   0}, {255, 146,   0}, {255, 145,   0}, {255, 144,   0},
        {255, 143,   0}, {255, 142,   0}, {255, 141,   0}, {255, 140,   0}, {255, 139,   0},
        {255, 138,   0}, {255, 137,   0}, {255, 136,   0}, {255, 135,   0}, {255, 134,   0},
        {255, 133,   0}, {255, 132,   0}, {255, 131,   0}, {255, 130,   0}, {255, 129,   0},
        {255, 128,   0}, {255, 127,   0}, {255, 126,   0}, {255, 125,   0}, {255, 124,   0},
        {255, 123,   0}, {255, 122,   0}, {255, 121,   0}, {255, 120,   0}, {255, 119,   0},
        {255, 118,   0}, {255, 117,   0}, {255, 116,   0}, {255, 115,   0}, {255, 114,   0},
        {255, 113,   0}, {255, 112,   0}, {255, 111,   0}, {255, 109,   0}, {255, 108,   0},
        {255, 107,   0}, {255, 106,   0}, {255, 105,   0}, {255, 104,   0}, {255, 103,   0},
        {255, 102,   0}, {255, 101,   0}, {255, 100,   0}, {255,  99,   0}, {255,  98,   0},
        {255,  97,   0}, {255,  96,   0}, {255,  95,   0}, {255,  94,   0}, {255,  93,   0},
        {255,  92,   0}, {255,  91,   0}, {255,  91,   0}, {255,  90,   0}, {255,  90,   0},
        {255,  89,   0}, {255,  88,   0}, {255,  88,   0}, {255,  87,   0}, {255,  86,   0},
        {255,  86,   0}, {255,  85,   0}, {255,  84,   0}, {255,  83,   0}, {255,  82,   0},
        {255,  81,   0}, {255,  80,   0}, {255,  79,   0}, {255,  78,   0}, {255,  77,   0},
        {255,  76,   0}, {255,  75,   0}, {255,  74,   0}, {255,  73,   0}, {255,  72,   0},
        {255,  71,   0}, {255,  70,   0}, {255,  69,   0}, {255,  68,   0}, {255,  67,   0},
        {255,  66,   0}, {255,  65,   0}, {255,  64,   0}, {255,  63,   0}, {255,  62,   0},
        {255,  61,   0}, {255,  60,   0}, {255,  59,   0}, {255,  58,   0}, {255,  57,   0},
        {255,  56,   0}, {255,  55,   0}, {255,  54,   0}, {255,  54,   0}, {255,  53,   0},
        {255,  51,   0}, {255,  50,   0}, {255,  49,   0}, {255,  48,   0}, {255,  47,   0},
        {255,  46,   0}, {255,  45,   0}, {255,  44,   0}, {255,  43,   0}, {255,  42,   0},
        {255,  41,   0}, {255,  40,   0}, {255,  39,   0}, {255,  38,   0}, {255,  37,   0},
        {255,  36,   0}, {255,  35,   0}, {255,  34,   0}, {255,  33,   0}, {255,  32,   0},
        {255,  31,   0}, {255,  30,   0}, {255,  29,   0}, {255,  28,   0}, {255,  27,   0},
        {255,  26,   0}, {255,  25,   0}, {255,  24,   0}, {254,  23,   0}, {254,  22,   0},
        {254,  21,   0}, {254,  20,   0}, {254,  19,   0}, {254,  18,   0}, {253,  17,   0},
        {251,  16,   0}, {250,  15,   0}, {249,  14,   0}, {248,  13,   0}, {247,  12,   0},
        {246,  11,   0}, {244,  10,   0}, {243,   9,   0}, {242,   8,   0}, {241,   7,   0},
        {240,   6,   0}, {239,   6,   0}, {239,   5,   0}, {238,   4,   0}, {237,   4,   0},
        {236,   3,   0}, {235,   3,   0}, {234,   2,   0}, {234,   1,   0}, {233,   1,   0},
        {232,   0,   0}, {231,   0,   0}, {230,   0,   0}, {228,   0,   0}, {227,   0,   0},
        {226,   0,   0}, {225,   0,   0}, {223,   0,   0}, {222,   0,   0}, {221,   0,   0},
        {219,   0,   0}, {218,   0,   0}, {217,   0,   0}, {216,   0,   0}, {214,   0,   0},
        {213,   0,   0}, {212,   0,   0}, {211,   0,   0}, {209,   0,   0}, {208,   0,   0},
        {207,   0,   0}, {206,   0,   0}, {204,   0,   0}, {203,   0,   0}, {202,   0,   0},
        {201,   0,   0}, {200,   0,   0}, {198,   0,   0}, {197,   0,   0}, {196,   0,   0},
        {195,   0,   0}, {194,   0,   0}, {193,   0,   0}, {191,   0,   0}, {190,   0,   0},
        {189,   0,   0}, {188,   0,   0}, {186,   0,   0}, {185,   0,   0}, {184,   0,   0},
        {183,   0,   0}, {181,   0,   0}, {180,   0,   0}, {179,   0,   0}, {178,   0,   0},
        {176,   0,   0}, {175,   0,   0}, {174,   0,   0}, {173,   0,   0}, {171,   0,   0},
        {170,   0,   0}, {169,   0,   0}, {168,   0,   0}, {166,   0,   0}, {165,   0,   0},
        {164,   0,   0}, {163,   0,   0}, {161,   0,   0}, {160,   0,   0}, {159,   0,   0},
        {158,   0,   0}, {157,   0,   0}, {156,   0,   0}, {154,   0,   0}, {153,   0,   0},
        {152,   0,   0}, {151,   0,   0}, {150,   0,   0}, {148,   0,   0}, {147,   0,   0},
        {146,   0,   0}, {145,   0,   0}, {143,   0,   0}, {142,   0,   0}, {141,   0,   0},
        {140,   0,   0}, {138,   0,   0}, {137,   0,   0}, {136,   0,   0}, {135,   0,   0},
        {134,   0,   0}, {133,   0,   0}, {133,   0,   0}, {132,   0,   0}, {131,   0,   0},
        {130,   0,   0}, {129,   0,   0}, {129,   0,   0}, {128,   0,   0}, {127,   0,   0},
        {122,   0,   9}, {117,   0,  18}, {112,   0,  27}, {107,   0,  36}, {102,   0,  45}
};

const rgb_t hsv_colormap[1000] = {
        {255,   0,   0}, {255,   2,   0}, {255,   3,   0}, {255,   5,   0}, {255,   6,   0},
        {255,   8,   0}, {255,   9,   0}, {255,  11,   0}, {255,  12,   0}, {255,  14,   0},
        {255,  15,   0}, {255,  17,   0}, {255,  18,   0}, {255,  20,   0}, {255,  21,   0},
        {255,  23,   0}, {255,  24,   0}, {255,  26,   0}, {255,  27,   0}, {255,  29,   0},
        {255,  30,   0}, {255,  32,   0}, {255,  33,   0}, {255,  35,   0}, {255,  36,   0},
        {255,  38,   0}, {255,  39,   0}, {255,  41,   0}, {255,  42,   0}, {255,  44,   0},
        {255,  45,   0}, {255,  47,   0}, {255,  48,   0}, {255,  50,   0}, {255,  51,   0},
        {255,  53,   0}, {255,  54,   0}, {255,  56,   0}, {255,  57,   0}, {255,  59,   0},
        {255,  60,   0}, {255,  62,   0}, {255,  63,   0}, {255,  65,   0}, {255,  66,   0},
        {255,  68,   0}, {255,  69,   0}, {255,  71,   0}, {255,  72,   0}, {255,  74,   0},
        {255,  75,   0}, {255,  77,   0}, {255,  78,   0}, {255,  80,   0}, {255,  81,   0},
        {255,  83,   0}, {255,  84,   0}, {255,  86,   0}, {255,  87,   0}, {255,  89,   0},
        {255,  90,   0}, {255,  92,   0}, {255,  93,   0}, {255,  95,   0}, {255,  96,   0},
        {255,  98,   0}, {255, 100,   0}, {255, 101,   0}, {255, 103,   0}, {255, 104,   0},
        {255, 106,   0}, {255, 107,   0}, {255, 109,   0}, {255, 110,   0}, {255, 112,   0},
        {255, 113,   0}, {255, 115,   0}, {255, 116,   0}, {255, 118,   0}, {255, 119,   0},
        {255, 121,   0}, {255, 122,   0}, {255, 124,   0}, {255, 125,   0}, {255, 127,   0},
        {255, 128,   0}, {255, 130,   0}, {255, 131,   0}, {255, 133,   0}, {255, 134,   0},
        {255, 136,   0}, {255, 137,   0}, {255, 139,   0}, {255, 140,   0}, {255, 142,   0},
        {255, 143,   0}, {255, 145,   0}, {255, 146,   0}, {255, 148,   0}, {255, 149,   0},
        {255, 151,   0}, {255, 152,   0}, {255, 154,   0}, {255, 155,   0}, {255, 157,   0},
        {255, 158,   0}, {255, 160,   0}, {255, 161,   0}, {255, 163,   0}, {255, 164,   0},
        {255, 166,   0}, {255, 167,   0}, {255, 169,   0}, {255, 170,   0}, {255, 172,   0},
        {255, 173,   0}, {255, 175,   0}, {255, 176,   0}, {255, 178,   0}, {255, 179,   0},
        {255, 181,   0}, {255, 182,   0}, {255, 184,   0}, {255, 185,   0}, {255, 187,   0},
        {255, 188,   0}, {255, 190,   0}, {255, 191,   0}, {255, 193,   0}, {255, 194,   0},
        {255, 196,   0}, {255, 197,   0}, {255, 199,   0}, {255, 201,   0}, {255, 202,   0},
        {255, 204,   0}, {255, 205,   0}, {255, 207,   0}, {255, 208,   0}, {255, 210,   0},
        {255, 211,   0}, {255, 213,   0}, {255, 214,   0}, {255, 216,   0}, {255, 217,   0},
        {255, 219,   0}, {255, 220,   0}, {255, 222,   0}, {255, 223,   0}, {255, 225,   0},
        {255, 226,   0}, {255, 228,   0}, {255, 229,   0}, {255, 231,   0}, {255, 232,   0},
        {255, 234,   0}, {255, 235,   0}, {255, 237,   0}, {255, 238,   0}, {255, 239,   0},
        {254, 240,   0}, {254, 242,   0}, {253, 243,   0}, {253, 244,   0}, {252, 245,   0},
        {252, 246,   0}, {251, 247,   0}, {251, 248,   0}, {250, 249,   0}, {250, 250,   0},
        {249, 251,   0}, {249, 252,   0}, {248, 253,   0}, {248, 254,   0}, {247, 255,   0},
        {246, 255,   0}, {245, 255,   0}, {243, 255,   0}, {242, 255,   0}, {240, 255,   0},
        {239, 255,   0}, {237, 255,   0}, {236, 255,   0}, {234, 255,   0}, {233, 255,   0},
        {231, 255,   0}, {230, 255,   0}, {228, 255,   0}, {227, 255,   0}, {225, 255,   0},
        {224, 255,   0}, {222, 255,   0}, {221, 255,   0}, {219, 255,   0}, {218, 255,   0},
        {216, 255,   0}, {215, 255,   0}, {213, 255,   0}, {211, 255,   0}, {210, 255,   0},
        {208, 255,   0}, {207, 255,   0}, {205, 255,   0}, {204, 255,   0}, {202, 255,   0},
        {201, 255,   0}, {199, 255,   0}, {198, 255,   0}, {196, 255,   0}, {195, 255,   0},
        {193, 255,   0}, {192, 255,   0}, {190, 255,   0}, {189, 255,   0}, {187, 255,   0},
        {186, 255,   0}, {184, 255,   0}, {183, 255,   0}, {181, 255,   0}, {180, 255,   0},
        {178, 255,   0}, {177, 255,   0}, {175, 255,   0}, {174, 255,   0}, {172, 255,   0},
        {171, 255,   0}, {169, 255,   0}, {168, 255,   0}, {166, 255,   0}, {165, 255,   0},
        {163, 255,   0}, {162, 255,   0}, {160, 255,   0}, {159, 255,   0}, {157, 255,   0},
        {156, 255,   0}, {154, 255,   0}, {153, 255,   0}, {151, 255,   0}, {150, 255,   0},
        {148, 255,   0}, {147, 255,   0}, {145, 255,   0}, {144, 255,   0}, {142, 255,   0},
        {141, 255,   0}, {139, 255,   0}, {138, 255,   0}, {136, 255,   0}, {135, 255,   0},
        {133, 255,   0}, {132, 255,   0}, {130, 255,   0}, {129, 255,   0}, {127, 255,   0},
        {126, 255,   0}, {124, 255,   0}, {123, 255,   0}, {121, 255,   0}, {120, 255,   0},
        {118, 255,   0}, {117, 255,   0}, {115, 255,   0}, {114, 255,   0}, {112, 255,   0},
        {110, 255,   0}, {109, 255,   0}, {107, 255,   0}, {106, 255,   0}, {104, 255,   0},
        {103, 255,   0}, {101, 255,   0}, {100, 255,   0}, { 98, 255,   0}, { 97, 255,   0},
        { 95, 255,   0}, { 94, 255,   0}, { 92, 255,   0}, { 91, 255,   0}, { 89, 255,   0},
        { 88, 255,   0}, { 86, 255,   0}, { 85, 255,   0}, { 83, 255,   0}, { 82, 255,   0},
        { 80, 255,   0}, { 79, 255,   0}, { 77, 255,   0}, { 76, 255,   0}, { 74, 255,   0},
        { 73, 255,   0}, { 71, 255,   0}, { 70, 255,   0}, { 68, 255,   0}, { 67, 255,   0},
        { 65, 255,   0}, { 64, 255,   0}, { 62, 255,   0}, { 61, 255,   0}, { 59, 255,   0},
        { 58, 255,   0}, { 56, 255,   0}, { 55, 255,   0}, { 53, 255,   0}, { 52, 255,   0},
        { 50, 255,   0}, { 49, 255,   0}, { 47, 255,   0}, { 46, 255,   0}, { 44, 255,   0},
        { 43, 255,   0}, { 41, 255,   0}, { 40, 255,   0}, { 38, 255,   0}, { 37, 255,   0},
        { 35, 255,   0}, { 34, 255,   0}, { 32, 255,   0}, { 31, 255,   0}, { 29, 255,   0},
        { 28, 255,   0}, { 26, 255,   0}, { 25, 255,   0}, { 23, 255,   0}, { 22, 255,   0},
        { 20, 255,   0}, { 19, 255,   0}, { 17, 255,   0}, { 16, 255,   0}, { 14, 255,   0},
        { 12, 255,   0}, { 11, 255,   0}, {  9, 255,   0}, {  8, 255,   0}, {  7, 255,   1},
        {  7, 255,   2}, {  6, 255,   3}, {  6, 255,   4}, {  5, 255,   5}, {  5, 255,   6},
        {  4, 255,   7}, {  4, 255,   8}, {  3, 255,   9}, {  3, 255,  10}, {  2, 255,  11},
        {  2, 255,  12}, {  1, 255,  13}, {  1, 255,  14}, {  0, 255,  15}, {  0, 255,  16},
        {  0, 255,  18}, {  0, 255,  19}, {  0, 255,  21}, {  0, 255,  22}, {  0, 255,  24},
        {  0, 255,  25}, {  0, 255,  27}, {  0, 255,  28}, {  0, 255,  30}, {  0, 255,  31},
        {  0, 255,  33}, {  0, 255,  34}, {  0, 255,  36}, {  0, 255,  37}, {  0, 255,  39},
        {  0, 255,  40}, {  0, 255,  42}, {  0, 255,  43}, {  0, 255,  45}, {  0, 255,  46},
        {  0, 255,  48}, {  0, 255,  49}, {  0, 255,  51}, {  0, 255,  52}, {  0, 255,  54},
        {  0, 255,  55}, {  0, 255,  57}, {  0, 255,  58}, {  0, 255,  60}, {  0, 255,  61},
        {  0, 255,  63}, {  0, 255,  64}, {  0, 255,  66}, {  0, 255,  67}, {  0, 255,  69},
        {  0, 255,  70}, {  0, 255,  72}, {  0, 255,  73}, {  0, 255,  75}, {  0, 255,  76},
        {  0, 255,  78}, {  0, 255,  79}, {  0, 255,  81}, {  0, 255,  82}, {  0, 255,  84},
        {  0, 255,  86}, {  0, 255,  87}, {  0, 255,  89}, {  0, 255,  90}, {  0, 255,  92},
        {  0, 255,  93}, {  0, 255,  95}, {  0, 255,  96}, {  0, 255,  98}, {  0, 255,  99},
        {  0, 255, 101}, {  0, 255, 102}, {  0, 255, 104}, {  0, 255, 105}, {  0, 255, 107},
        {  0, 255, 108}, {  0, 255, 110}, {  0, 255, 111}, {  0, 255, 113}, {  0, 255, 114},
        {  0, 255, 116}, {  0, 255, 117}, {  0, 255, 119}, {  0, 255, 120}, {  0, 255, 122},
        {  0, 255, 123}, {  0, 255, 125}, {  0, 255, 126}, {  0, 255, 128}, {  0, 255, 129},
        {  0, 255, 131}, {  0, 255, 132}, {  0, 255, 134}, {  0, 255, 135}, {  0, 255, 137},
        {  0, 255, 138}, {  0, 255, 140}, {  0, 255, 141}, {  0, 255, 143}, {  0, 255, 144},
        {  0, 255, 146}, {  0, 255, 147}, {  0, 255, 149}, {  0, 255, 150}, {  0, 255, 152},
        {  0, 255, 153}, {  0, 255, 155}, {  0, 255, 156}, {  0, 255, 158}, {  0, 255, 159},
        {  0, 255, 161}, {  0, 255, 162}, {  0, 255, 164}, {  0, 255, 165}, {  0, 255, 167},
        {  0, 255, 168}, {  0, 255, 170}, {  0, 255, 171}, {  0, 255, 173}, {  0, 255, 174},
        {  0, 255, 176}, {  0, 255, 177}, {  0, 255, 179}, {  0, 255, 180}, {  0, 255, 182},
        {  0, 255, 183}, {  0, 255, 185}, {  0, 255, 187}, {  0, 255, 188}, {  0, 255, 190},
        {  0, 255, 191}, {  0, 255, 193}, {  0, 255, 194}, {  0, 255, 196}, {  0, 255, 197},
        {  0, 255, 199}, {  0, 255, 200}, {  0, 255, 202}, {  0, 255, 203}, {  0, 255, 205},
        {  0, 255, 206}, {  0, 255, 208}, {  0, 255, 209}, {  0, 255, 211}, {  0, 255, 212},
        {  0, 255, 214}, {  0, 255, 215}, {  0, 255, 217}, {  0, 255, 218}, {  0, 255, 220},
        {  0, 255, 221}, {  0, 255, 223}, {  0, 255, 224}, {  0, 255, 226}, {  0, 255, 227},
        {  0, 255, 229}, {  0, 255, 230}, {  0, 255, 232}, {  0, 255, 233}, {  0, 255, 235},
        {  0, 255, 236}, {  0, 255, 238}, {  0, 255, 239}, {  0, 255, 241}, {  0, 255, 242},
        {  0, 255, 244}, {  0, 255, 245}, {  0, 255, 247}, {  0, 255, 248}, {  0, 255, 250},
        {  0, 255, 251}, {  0, 255, 253}, {  0, 255, 254}, {  0, 254, 255}, {  0, 253, 255},
        {  0, 251, 255}, {  0, 250, 255}, {  0, 248, 255}, {  0, 247, 255}, {  0, 245, 255},
        {  0, 244, 255}, {  0, 242, 255}, {  0, 241, 255}, {  0, 239, 255}, {  0, 238, 255},
        {  0, 236, 255}, {  0, 235, 255}, {  0, 233, 255}, {  0, 232, 255}, {  0, 230, 255},
        {  0, 229, 255}, {  0, 227, 255}, {  0, 225, 255}, {  0, 224, 255}, {  0, 222, 255},
        {  0, 221, 255}, {  0, 219, 255}, {  0, 218, 255}, {  0, 216, 255}, {  0, 215, 255},
        {  0, 213, 255}, {  0, 212, 255}, {  0, 210, 255}, {  0, 209, 255}, {  0, 207, 255},
        {  0, 206, 255}, {  0, 204, 255}, {  0, 203, 255}, {  0, 201, 255}, {  0, 200, 255},
        {  0, 198, 255}, {  0, 197, 255}, {  0, 195, 255}, {  0, 194, 255}, {  0, 192, 255},
        {  0, 191, 255}, {  0, 189, 255}, {  0, 188, 255}, {  0, 186, 255}, {  0, 185, 255},
        {  0, 183, 255}, {  0, 182, 255}, {  0, 180, 255}, {  0, 179, 255}, {  0, 177, 255},
        {  0, 176, 255}, {  0, 174, 255}, {  0, 173, 255}, {  0, 171, 255}, {  0, 170, 255},
        {  0, 168, 255}, {  0, 167, 255}, {  0, 165, 255}, {  0, 164, 255}, {  0, 162, 255},
        {  0, 161, 255}, {  0, 159, 255}, {  0, 158, 255}, {  0, 156, 255}, {  0, 155, 255},
        {  0, 153, 255}, {  0, 152, 255}, {  0, 150, 255}, {  0, 149, 255}, {  0, 147, 255},
        {  0, 146, 255}, {  0, 144, 255}, {  0, 143, 255}, {  0, 141, 255}, {  0, 140, 255},
        {  0, 138, 255}, {  0, 137, 255}, {  0, 135, 255}, {  0, 134, 255}, {  0, 132, 255},
        {  0, 131, 255}, {  0, 129, 255}, {  0, 128, 255}, {  0, 126, 255}, {  0, 124, 255},
        {  0, 123, 255}, {  0, 121, 255}, {  0, 120, 255}, {  0, 118, 255}, {  0, 117, 255},
        {  0, 115, 255}, {  0, 114, 255}, {  0, 112, 255}, {  0, 111, 255}, {  0, 109, 255},
        {  0, 108, 255}, {  0, 106, 255}, {  0, 105, 255}, {  0, 103, 255}, {  0, 102, 255},
        {  0, 100, 255}, {  0,  99, 255}, {  0,  97, 255}, {  0,  96, 255}, {  0,  94, 255},
        {  0,  93, 255}, {  0,  91, 255}, {  0,  90, 255}, {  0,  88, 255}, {  0,  87, 255},
        {  0,  85, 255}, {  0,  84, 255}, {  0,  82, 255}, {  0,  81, 255}, {  0,  79, 255},
        {  0,  78, 255}, {  0,  76, 255}, {  0,  75, 255}, {  0,  73, 255}, {  0,  72, 255},
        {  0,  70, 255}, {  0,  69, 255}, {  0,  67, 255}, {  0,  66, 255}, {  0,  64, 255},
        {  0,  63, 255}, {  0,  61, 255}, {  0,  60, 255}, {  0,  58, 255}, {  0,  57, 255},
        {  0,  55, 255}, {  0,  54, 255}, {  0,  52, 255}, {  0,  51, 255}, {  0,  49, 255},
        {  0,  48, 255}, {  0,  46, 255}, {  0,  45, 255}, {  0,  43, 255}, {  0,  42, 255},
        {  0,  40, 255}, {  0,  39, 255}, {  0,  37, 255}, {  0,  36, 255}, {  0,  34, 255},
        {  0,  33, 255}, {  0,  31, 255}, {  0,  30, 255}, {  0,  28, 255}, {  0,  26, 255},
        {  0,  25, 255}, {  0,  23, 255}, {  0,  22, 255}, {  0,  20, 255}, {  0,  19, 255},
        {  0,  17, 255}, {  0,  16, 255}, {  1,  15, 255}, {  1,  14, 255}, {  2,  13, 255},
        {  2,  12, 255}, {  3,  11, 255}, {  3,  10, 255}, {  4,   9, 255}, {  4,   8, 255},
        {  5,   7, 255}, {  5,   6, 255}, {  6,   5, 255}, {  6,   4, 255}, {  7,   3, 255},
        {  7,   2, 255}, {  8,   1, 255}, {  8,   0, 255}, { 10,   0, 255}, { 11,   0, 255},
        { 13,   0, 255}, { 14,   0, 255}, { 16,   0, 255}, { 17,   0, 255}, { 19,   0, 255},
        { 20,   0, 255}, { 22,   0, 255}, { 23,   0, 255}, { 25,   0, 255}, { 26,   0, 255},
        { 28,   0, 255}, { 29,   0, 255}, { 31,   0, 255}, { 32,   0, 255}, { 34,   0, 255},
        { 35,   0, 255}, { 37,   0, 255}, { 38,   0, 255}, { 40,   0, 255}, { 41,   0, 255},
        { 43,   0, 255}, { 44,   0, 255}, { 46,   0, 255}, { 47,   0, 255}, { 49,   0, 255},
        { 50,   0, 255}, { 52,   0, 255}, { 53,   0, 255}, { 55,   0, 255}, { 56,   0, 255},
        { 58,   0, 255}, { 59,   0, 255}, { 61,   0, 255}, { 62,   0, 255}, { 64,   0, 255},
        { 65,   0, 255}, { 67,   0, 255}, { 68,   0, 255}, { 70,   0, 255}, { 72,   0, 255},
        { 73,   0, 255}, { 75,   0, 255}, { 76,   0, 255}, { 78,   0, 255}, { 79,   0, 255},
        { 81,   0, 255}, { 82,   0, 255}, { 84,   0, 255}, { 85,   0, 255}, { 87,   0, 255},
        { 88,   0, 255}, { 90,   0, 255}, { 91,   0, 255}, { 93,   0, 255}, { 94,   0, 255},
        { 96,   0, 255}, { 97,   0, 255}, { 99,   0, 255}, {100,   0, 255}, {102,   0, 255},
        {103,   0, 255}, {105,   0, 255}, {106,   0, 255}, {108,   0, 255}, {109,   0, 255},
        {111,   0, 255}, {112,   0, 255}, {114,   0, 255}, {115,   0, 255}, {117,   0, 255},
        {118,   0, 255}, {120,   0, 255}, {121,   0, 255}, {123,   0, 255}, {124,   0, 255},
        {126,   0, 255}, {127,   0, 255}, {129,   0, 255}, {130,   0, 255}, {132,   0, 255},
        {133,   0, 255}, {135,   0, 255}, {136,   0, 255}, {138,   0, 255}, {139,   0, 255},
        {141,   0, 255}, {142,   0, 255}, {144,   0, 255}, {145,   0, 255}, {147,   0, 255},
        {148,   0, 255}, {150,   0, 255}, {151,   0, 255}, {153,   0, 255}, {154,   0, 255},
        {156,   0, 255}, {157,   0, 255}, {159,   0, 255}, {160,   0, 255}, {162,   0, 255},
        {163,   0, 255}, {165,   0, 255}, {166,   0, 255}, {168,   0, 255}, {169,   0, 255},
        {171,   0, 255}, {173,   0, 255}, {174,   0, 255}, {176,   0, 255}, {177,   0, 255},
        {179,   0, 255}, {180,   0, 255}, {182,   0, 255}, {183,   0, 255}, {185,   0, 255},
        {186,   0, 255}, {188,   0, 255}, {189,   0, 255}, {191,   0, 255}, {192,   0, 255},
        {194,   0, 255}, {195,   0, 255}, {197,   0, 255}, {198,   0, 255}, {200,   0, 255},
        {201,   0, 255}, {203,   0, 255}, {204,   0, 255}, {206,   0, 255}, {207,   0, 255},
        {209,   0, 255}, {210,   0, 255}, {212,   0, 255}, {213,   0, 255}, {215,   0, 255},
        {216,   0, 255}, {218,   0, 255}, {219,   0, 255}, {221,   0, 255}, {222,   0, 255},
        {224,   0, 255}, {225,   0, 255}, {227,   0, 255}, {228,   0, 255}, {230,   0, 255},
        {231,   0, 255}, {233,   0, 255}, {234,   0, 255}, {236,   0, 255}, {237,   0, 255},
        {239,   0, 255}, {240,   0, 255}, {242,   0, 255}, {243,   0, 255}, {245,   0, 255},
        {246,   0, 255}, {247,   0, 254}, {248,   0, 253}, {248,   0, 252}, {249,   0, 251},
        {249,   0, 250}, {250,   0, 249}, {250,   0, 248}, {251,   0, 247}, {251,   0, 246},
        {252,   0, 245}, {252,   0, 244}, {253,   0, 243}, {253,   0, 242}, {254,   0, 241},
        {254,   0, 240}, {255,   0, 239}, {255,   0, 238}, {255,   0, 236}, {255,   0, 235},
        {255,   0, 233}, {255,   0, 232}, {255,   0, 230}, {255,   0, 229}, {255,   0, 227},
        {255,   0, 226}, {255,   0, 224}, {255,   0, 223}, {255,   0, 221}, {255,   0, 220},
        {255,   0, 218}, {255,   0, 217}, {255,   0, 215}, {255,   0, 214}, {255,   0, 212},
        {255,   0, 211}, {255,   0, 209}, {255,   0, 208}, {255,   0, 206}, {255,   0, 205},
        {255,   0, 203}, {255,   0, 202}, {255,   0, 200}, {255,   0, 199}, {255,   0, 197},
        {255,   0, 196}, {255,   0, 194}, {255,   0, 193}, {255,   0, 191}, {255,   0, 190},
        {255,   0, 188}, {255,   0, 187}, {255,   0, 185}, {255,   0, 184}, {255,   0, 182},
        {255,   0, 181}, {255,   0, 179}, {255,   0, 178}, {255,   0, 176}, {255,   0, 175},
        {255,   0, 173}, {255,   0, 172}, {255,   0, 170}, {255,   0, 169}, {255,   0, 167},
        {255,   0, 166}, {255,   0, 164}, {255,   0, 163}, {255,   0, 161}, {255,   0, 160},
        {255,   0, 158}, {255,   0, 157}, {255,   0, 155}, {255,   0, 154}, {255,   0, 152},
        {255,   0, 151}, {255,   0, 149}, {255,   0, 148}, {255,   0, 146}, {255,   0, 145},
        {255,   0, 143}, {255,   0, 141}, {255,   0, 140}, {255,   0, 138}, {255,   0, 137},
        {255,   0, 135}, {255,   0, 134}, {255,   0, 132}, {255,   0, 131}, {255,   0, 129},
        {255,   0, 128}, {255,   0, 126}, {255,   0, 125}, {255,   0, 123}, {255,   0, 122},
        {255,   0, 120}, {255,   0, 119}, {255,   0, 117}, {255,   0, 116}, {255,   0, 114},
        {255,   0, 113}, {255,   0, 111}, {255,   0, 110}, {255,   0, 108}, {255,   0, 107},
        {255,   0, 105}, {255,   0, 104}, {255,   0, 102}, {255,   0, 101}, {255,   0,  99},
        {255,   0,  98}, {255,   0,  96}, {255,   0,  95}, {255,   0,  93}, {255,   0,  92},
        {255,   0,  90}, {255,   0,  89}, {255,   0,  87}, {255,   0,  86}, {255,   0,  84},
        {255,   0,  83}, {255,   0,  81}, {255,   0,  80}, {255,   0,  78}, {255,   0,  77},
        {255,   0,  75}, {255,   0,  74}, {255,   0,  72}, {255,   0,  71}, {255,   0,  69},
        {255,   0,  68}, {255,   0,  66}, {255,   0,  65}, {255,   0,  63}, {255,   0,  62},
        {255,   0,  60}, {255,   0,  59}, {255,   0,  57}, {255,   0,  56}, {255,   0,  54},
        {255,   0,  53}, {255,   0,  51}, {255,   0,  50}, {255,   0,  48}, {255,   0,  47},
        {255,   0,  45}, {255,   0,  44}, {255,   0,  42}, {255,   0,  40}, {255,   0,  39},
        {255,   0,  37}, {255,   0,  36}, {255,   0,  34}, {255,   0,  33}, {255,   0,  31},
        {255,   0,  30}, {255,   0,  28}, {255,   0,  27}, {255,   0,  25}, {255,   0,  24}
};

#endif //IMAGE_DEMO_COMMON_H