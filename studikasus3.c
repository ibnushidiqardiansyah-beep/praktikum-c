#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Struktur untuk menyimpan data user
struct User {
    char username[30];
    char password[20];
};

// Fungsi Registrasi
void registrasi() {
    struct User user;
    FILE *fp;

    fp = fopen("database.txt", "a"); // Membuka file dengan mode append
    if (fp == NULL) {
        printf("Gagal membuka database!\n");
        return;
    }

    printf("\n--- Form Registrasi ---\n");
    printf("Masukkan Username Baru: ");
    scanf("%s", user.username);
    printf("Masukkan Password Baru: ");
    scanf("%s", user.password);

    // Menulis data ke file: username password
    fprintf(fp, "%s %s\n", user.username, user.password);
    fclose(fp);

    printf("\nRegistrasi Berhasil! Silakan Login.\n");
}

// Fungsi Login
int login() {
    struct User user, data;
    char input_user[30], input_pass[20];
    int found = 0;
    FILE *fp;

    fp = fopen("database.txt", "r"); // Membuka file dengan mode read
    if (fp == NULL) {
        printf("\nBelum ada user terdaftar!\n");
        return 0;
    }

    printf("\n--- Form Login ---\n");
    printf("Username: ");
    scanf("%s", input_user);
    printf("Password: ");
    scanf("%s", input_pass);

    // Membaca file baris demi baris untuk mencocokkan data
    while (fscanf(fp, "%s %s", data.username, data.password) != EOF) {
        if (strcmp(input_user, data.username) == 0 && strcmp(input_pass, data.password) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);
    return found;
}

int main() {
    int pilihan;

    while (1) {
        printf("\n======= SISTEM LOGIN C =======\n");
        printf("1. Registrasi\n");
        printf("2. Login\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                registrasi();
                break;
            case 2:
                if (login()) {
                    printf("\nLogin Berhasil! Selamat Datang.\n");
                    // Tambahkan logika menu utama aplikasi di sini
                } else {
                    printf("\nLogin Gagal! Username atau Password salah.\n");
                }
                break;
            case 3:
                exit(0);
            default:
                printf("\nPilihan tidak valid!\n");
        }
    }

    return 0;
}