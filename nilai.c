#include <stdio.h>

int main() {
    char nama[50];
    float nilai_tugas, nilai_uts, rata_rata;

    printf("=== Program Nilai Mahasiswa ===\n");

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan nilai tugas: ");
    scanf("%f", &nilai_tugas);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &nilai_uts);

    // Hitung rata-rata
    rata_rata = (nilai_tugas + nilai_uts) / 2;

    printf("\n=== Hasil Nilai ===\n");
    printf("Nama         : %s", nama);
    printf("Nilai Tugas  : %.2f\n", nilai_tugas);
    printf("Nilai UTS    : %.2f\n", nilai_uts);
    printf("Rata-rata    : %.2f\n", rata_rata);

    return 0;
}