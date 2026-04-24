import random

print("--- GAME TEBAK ANGKA ---")

try:
    file = open("score.txt", "r")
    best_score = int(file.read())
    file.close()
except:
    best_score = 9999

print("Pilih level kamu:")
print("1. Easy (1-10)")
print("2. Medium (1-100)")
print("3. Hard (1-1000)")

level = int(input("Masukkan pilihanmu: "))

if level == 1:
    max_num = 10
elif level == 2:
    max_num = 100
else:
    max_num = 1000

angka_rahasia = random.randint(1, max_num)

print("Tebak angka antara 1 sampai", max_num)

percobaan = 0

while True:
    tebakan = int(input("Masukkan tebakan: "))
    percobaan += 1
    if tebakan > angka_rahasia:
        print("Terlalu besar!")
    elif tebakan < angka_rahasia:
        print("Terlalu kecil!")
    else:
        print("Benar!")
        break

print("Jumlah percobaan:", percobaan)

if percobaan < best_score:
    print("Selamat! Skor terbaik baru!")
    file = open("score.txt", "w")
    file.write(str(percobaan))
    file.close()
else:
    print("Skor terbaik:", best_score)