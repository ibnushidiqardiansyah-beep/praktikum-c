#include <stdio.h>

int main() {
    int angka;

    printf("=== Program Cek Ganjil Genap ===\n");
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    // Menggunakan logika modulo 2
    if (angka % 2 == 0) {
        printf("Angka %d adalah bilangan GENAP.\n", angka);
    } else {
        printf("Angka %d adalah bilangan GANJIL.\n", angka);
    }

    return 0;
}