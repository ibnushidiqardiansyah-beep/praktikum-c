# Program Input 5 Nilai dan Hitung Rata-rata

nilai = []

for i in range(5):
    angka = float(input(f"Masukkan nilai ke-{i+1}: "))
    nilai.append(angka)

rata_rata = sum(nilai) / len(nilai)

print("List nilai:", nilai)
print("Rata-rata:", rata_rata)