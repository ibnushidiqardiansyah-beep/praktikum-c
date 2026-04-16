#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nama[50];
    float nilai;
    char grade;
    char ulang;

    do {
        system("cls"); // Windows (Linux: clear)

        printf("=====================================\n");
        printf("       PROGRAM DATA NILAI\n");
        printf("=====================================\n");

        // Input nama
        printf("Masukkan Nama  : ");
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = 0;

        // Input nilai + validasi
        do {
            printf("Masukkan Nilai (0-100) : ");
            scanf("%f", &nilai);
            if (nilai < 0 || nilai > 100) {
                printf("Nilai harus antara 0 - 100!\n");
            }
        } while (nilai < 0 || nilai > 100);

        getchar(); // bersihin newline

        // Penentuan grade
        if (nilai >= 85) grade = 'A';
        else if (nilai >= 75) grade = 'B';
        else if (nilai >= 65) grade = 'C';
        else if (nilai >= 50) grade = 'D';
        else grade = 'E';

        system("cls");

        printf("=====================================\n");
        printf("          HASIL NILAI\n");
        printf("=====================================\n");
        printf("Nama   : %s\n", nama);
        printf("Nilai  : %.2f\n", nilai);
        printf("Grade  : %c\n", grade);

        if (nilai >= 75)
            printf("Status : LULUS\n");
        else
            printf("Status : TIDAK LULUS\n");

        printf("=====================================\n");

        printf("\nInput lagi? (y/n): ");
        scanf(" %c", &ulang);
        getchar();

    } while (ulang == 'y' || ulang == 'Y');

    printf("\nProgram selesai.\n");

    return 0;
}