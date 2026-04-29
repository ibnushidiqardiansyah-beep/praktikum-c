#include <stdio.h>

int main() {
    int i;
    int angka[10];
    int terbesar;

    // Input 10 angka
    printf("Masukkan 10 angka:\n");
    for(i = 0; i < 10; i++) {
        printf("Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // Anggap angka pertama sebagai terbesar
    terbesar = angka[0];

    // Cari nilai terbesar
    for(i = 1; i < 10; i++) {
        if(angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    // Output hasil
    printf("Nilai terbesar adalah: %d\n", terbesar);

    return 0;
}