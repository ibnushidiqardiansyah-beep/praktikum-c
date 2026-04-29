#include <stdio.h>
#include <stdlib.h>

// Definisi struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n;
    float total = 0, rataRata;
    
    // Fitur: Input banyak mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    // Fitur: Gunakan pointer dan alokasi memori dinamis
    struct Mahasiswa *daftarMhs = (struct Mahasiswa *)malloc(n * sizeof(struct Mahasiswa));

    if (daftarMhs == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return 1;
    }

    // Input data ke dalam struct menggunakan pointer
    for (int i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf(" %[^\n]s", (daftarMhs + i)->nama); // Menggunakan pointer access
        printf("Nilai: ");
        scanf("%f", &(daftarMhs + i)->nilai);
        
        total += (daftarMhs + i)->nilai;
    }

    // Fitur: Hitung rata-rata
    rataRata = total / n;

    // Menampilkan hasil
    printf("\n--- Data Nilai Mahasiswa ---\n");
    printf("%-20s | %-10s\n", "Nama", "Nilai");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s | %-10.2f\n", (daftarMhs + i)->nama, (daftarMhs + i)->nilai);
    }
    
    printf("--------------------------------\n");
    printf("Rata-rata Nilai: %.2f\n", rataRata);

    // Bebaskan memori yang digunakan pointer
    free(daftarMhs);

    return 0;
}