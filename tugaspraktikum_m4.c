#include <stdio.h>
#include <stdlib.h>

// Definisi Struct
struct Karyawan {
    int id;
    char nama[50];
    char jabatan[30];
    double gaji; // Penambahan field gaji
};

int main() {
    int jml;
    struct Karyawan *listKaryawan;

    printf("=== Program Data Karyawan (Update: Gaji) ===\n");
    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &jml);

    // Alokasi memori dinamis menggunakan malloc
    listKaryawan = (struct Karyawan*) malloc(jml * sizeof(struct Karyawan));

    // Validasi apakah memori berhasil dialokasikan
    if (listKaryawan == NULL) {
        printf("Memori tidak cukup!\n");
        return 1;
    }

    // Input data menggunakan pointer
    for(int i = 0; i < jml; i++) {
        printf("\n--- Data Karyawan ke-%d ---\n", i + 1);
        printf("ID Karyawan : ");
        scanf("%d", &listKaryawan[i].id);
        
        printf("Nama        : ");
        scanf(" %[^\n]s", listKaryawan[i].nama);
        
        printf("Jabatan     : ");
        scanf(" %[^\n]s", listKaryawan[i].jabatan);
        
        printf("Gaji        : ");
        scanf("%lf", &listKaryawan[i].gaji);
    }

    // Tampilkan data dalam format tabel
    printf("\n==================================================================\n");
    printf("%-5s %-20s %-15s %-15s\n", "ID", "NAMA", "JABATAN", "GAJI");
    printf("------------------------------------------------------------------\n");
    
    for(int i = 0; i < jml; i++) {
        // Mengakses data menggunakan pointer notation
        printf("%-5d %-20s %-15s Rp.%-12.2f\n", 
               (listKaryawan + i)->id, 
               (listKaryawan + i)->nama, 
               (listKaryawan + i)->jabatan,
               (listKaryawan + i)->gaji);
    }
    printf("==================================================================\n");

    // Membersihkan memori (Best Practice sesuai modul)
    free(listKaryawan);
    printf("\nMemori telah dibebaskan. Program selesai.\n");

    return 0;
}