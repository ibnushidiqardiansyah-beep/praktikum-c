#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float r) {
    float luas;
    luas = 3.14 * r * r;
    return luas;
}

int main() {
    float jari_jari, hasil;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jari_jari);

    hasil = hitungLuasLingkaran(jari_jari);

    printf("Luas lingkaran = %.2f\n", hasil);

    return 0;
}