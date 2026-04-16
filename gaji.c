#include <stdio.h>

int main() {
    char nama[] = "Ibnu Shidiq Ardiansyah"; // bisa diganti
    long gajiPokok = 30000000;
    long bonus = 12000000;
    long totalGaji;

    totalGaji = gajiPokok + bonus;

    printf("=== Rincian Gaji Karyawan ===\n");
    printf("Nama Karyawan : %s\n", nama);
    printf("Gaji Pokok    : Rp %ld\n", gajiPokok);
    printf("Bonus         : Rp %ld\n", bonus);
    printf("Total Gaji    : Rp %ld\n", totalGaji);

    return 0;
}