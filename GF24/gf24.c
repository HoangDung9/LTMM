#include "gf24.h"

uint8_t gf2_4(uint8_t a, uint8_t b, uint8_t c) {
    uint8_t ket_qua = 0;
    a &= 0b1111; // Giới hạn khung 4 bit
    b &= 0b1111;

    for (int i = 0; i < 4; i++) {
        if (b & 1) {
            ket_qua ^= a; 
        }

        bool kiem_tra = (a & 0b1000) != 0; 
        a = (a << 1) & 0b1111;              

        if (kiem_tra) {
            a ^= c; 
        }

        b >>= 1; // Dịch phải b 
    }

    return ket_qua;
}