#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int level;
    int max;
    int angka_rahasia;
    int tebakan;
    int percobaan = 0;
    int best_score = 9999;

    FILE *file = fopen("score.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &best_score);
        fclose(file);
    }

    printf("--- GAME TEBAK ANGKA ---\n");
    printf("Pilih level kamu:\n");
    printf("1. Easy (1-10)\n");
    printf("2. Medium (1-100)\n");
    printf("3. Hard (1-1000)\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &level);

    if (level == 1) {
        max = 10;
    } else if (level == 2) {
        max = 100;
    } else {
        max = 1000;
    }

    srand(time(NULL));
    angka_rahasia = rand() % max + 1;

    printf("Tebak angka antara 1 sampai %d\n", max);

    do {
        printf("Masukkan tebakanmu: ");
        scanf("%d", &tebakan);
        percobaan++;
        if (tebakan > angka_rahasia) {
            printf("Terlalu besar!\n");
        } else if (tebakan < angka_rahasia) {
            printf("Terlalu kecil!\n");
        } else {
            printf("Benar!\n");
        }

    } while (tebakan != angka_rahasia);

    printf("Jumlah percobaan: %d\n", percobaan);

    if (percobaan < best_score) {
        printf("Selamat! Skor terbaik baru!\n");
        file = fopen("score.txt", "w");
        fprintf(file, "%d", percobaan);
        fclose(file);
    } else {
        printf("Skor terbaik: %d\n", best_score);
    }

    return 0;
}