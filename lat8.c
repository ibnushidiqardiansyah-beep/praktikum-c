#include <stdio.h>

int main() {
    float meter, cm;

    printf("Masukkan nilai meter: ");
    scanf("%f", &meter);

    cm = meter * 100;

    printf("Hasil konversi: %.2f meter = %.2f cm\n", meter, cm);

    return 0;
}