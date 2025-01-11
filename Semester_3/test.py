# Fungsi untuk menghitung kapasitas disk
def hitung_kapasitas_disk(platters, tracks_per_platter, sectors_per_track, bytes_per_sector):
    # Menghitung kapasitas total dalam byte
    total_capacity_bytes = platters * tracks_per_platter * sectors_per_track * bytes_per_sector
    
    # Mengonversi byte menjadi megabyte (1 MB = 1,048,576 bytes)
    total_capacity_MB = total_capacity_bytes / (1024 * 1024)
    
    return total_capacity_MB

# Input dari pengguna
platters = int(input("Masukkan jumlah piringan (platters): "))
tracks_per_platter = int(input("Masukkan jumlah track per piringan: "))
sectors_per_track = int(input("Masukkan jumlah sektor per track: "))
bytes_per_sector = int(input("Masukkan jumlah byte per sektor: "))

# Menghitung kapasitas disk
kapasitas_disk = hitung_kapasitas_disk(platters, tracks_per_platter, sectors_per_track, bytes_per_sector)

# Menampilkan hasil
print(f"Kapasitas total disk: {kapasitas_disk:.2f} MB")