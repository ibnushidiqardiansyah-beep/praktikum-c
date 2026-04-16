#include <stdio.h>

// ANSI Color Codes
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"

// Fungsi konversi
double konversi(double meter) {
    return meter * 100;
}

// Input + validasi
double inputMeter() {
    double m;
    printf(CYAN "Masukkan nilai dalam meter: " RESET);
    scanf("%lf", &m);

    while (m < 0) {
        printf(RED "Input tidak boleh negatif! Coba lagi: " RESET);
        scanf("%lf", &m);
    }

    return m;
}

// Tampilkan hasil
void tampilkan(double meter, double cm) {
    printf(GREEN "\n===== HASIL KONVERSI =====\n" RESET);
    printf(YELLOW "Meter : %.2lf m\n" RESET, meter);
    printf(YELLOW "CM    : %.2lf cm\n" RESET, cm);
    printf(GREEN "==========================\n" RESET);
}

// Menu
void menu() {
    printf(CYAN "\n=== PROGRAM KONVERSI METER KE CM ===\n" RESET);
    printf("1. Konversi\n");
    printf("2. Keluar\n");
    printf("Pilih menu: ");
}

int main() {
    int pilihan;
    double meter, cm;

    do {
        menu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                meter = inputMeter();
                cm = konversi(meter);
                tampilkan(meter, cm);
                break;

            case 2:
                printf(GREEN "\nTerima kasih! Program selesai.\n" RESET);
                break;

            default:
                printf(RED "\nPilihan tidak valid!\n" RESET);
        }

    } while (pilihan != 2);

    return 0;
}