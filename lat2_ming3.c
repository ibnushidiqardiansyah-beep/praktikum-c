#include <stdio.h>

int main() {
    int i, j;
    int batas = 10; // Anda bisa mengubah batas ini sesuai keinginan

    printf("=== TABEL PERKALIAN 1 - %d ===\n\n", batas);

    // Loop pertama untuk baris
    for (i = 1; i <= batas; i++) {
        // Loop kedua untuk kolom
        for (j = 1; j <= batas; j++) {
            // Menggunakan %4d agar angka sejajar (memberi ruang 4 karakter)
            printf("%4d", i * j);
        }
        // Pindah ke baris baru setelah satu baris selesai
        printf("\n");
    }

    return 0;
}