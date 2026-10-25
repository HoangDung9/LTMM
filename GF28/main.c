#include <stdio.h>
#include <stdint.h>
#include "gf28.h"

int main() {
    int nhap_a, nhap_b;
    printf("Nhap a va b (0-255): ");
    scanf("%d %d", &nhap_a, &nhap_b);

    uint8_t c = 0x1B; 
    uint8_t a = (uint8_t)nhap_a;
    uint8_t b = (uint8_t)nhap_b;
    
    uint8_t ket_qua = gf2_8(a, b, c);

    printf("KET_QUA : %d(0x%X)\n", ket_qua, ket_qua);  

    return 0;
}