#include <stdio.h>
#include <string.h>

// Fungsi untuk menentukan grade berdasarkan nilai
char tentukanGrade(float nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 75) return 'B';
    else if (nilai >= 65) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

int main() {
    int i, jumlah;

    printf("=== Program Input Nilai Mahasiswa (Oleh: Ibnu) ===\n");
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    // Deklarasi array untuk menyimpan data
    char nama[jumlah][50];
    char npm[jumlah][15];
    float nilai[jumlah];

    // Perulangan untuk input data mahasiswa
    for (i = 0; i < jumlah; i++) {
        printf("\nData Mahasiswa ke-%d\n", i + 1);
        printf("NPM   : ");
        scanf("%s", npm[i]); // NPM biasanya tidak pakai spasi
        
        printf("Nama  : ");
        scanf(" %[^\n]s", nama[i]); // Menggunakan %[^\n] agar bisa input nama dengan spasi
        
        printf("Nilai : ");
        scanf("%f", &nilai[i]);
    }

    // Menampilkan hasil dalam bentuk tabel
    printf("\n\n===========================================================\n");
    printf("%-15s %-20s %-10s %-5s\n", "NPM", "Nama Mahasiswa", "Nilai", "Grade");
    printf("-----------------------------------------------------------\n");

    for (i = 0; i < jumlah; i++) {
        char grade = tentukanGrade(nilai[i]);
        printf("%-15s %-20s %-10.2f %-5c\n", npm[i], nama[i], nilai[i], grade);
    }
    
    printf("===========================================================\n");
    printf("Program selesai. Semangat belajarnya, muridku\n");

    return 0;
}