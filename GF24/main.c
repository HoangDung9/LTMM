#include <stdio.h>
#include <stdint.h>
#include "gf24.h"

int main() {
    int nhap_a, nhap_b;
    scanf("%d %d", &nhap_a, &nhap_b);

    uint8_t c = 0b0011; 
    uint8_t a = (uint8_t)nhap_a;
    uint8_t b = (uint8_t)nhap_b;
    
    uint8_t ket_qua = a + b;

    printf("KET_QUA : %d(0x%X)\n", ket_qua, ket_qua);  

    return 0;
}