#include <stdio.h>

int main() {
    float panjang, lebar, luas;

    printf("=== Program Luas Persegi Panjang ===\n");

    printf("Masukkan panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    // Rumus luas
    luas = panjang * lebar;

    printf("\nLuas persegi panjang = %.2f\n", luas);

    return 0;
}