Program ini akan menampilkan menu yang berisi pilihan untuk menambah data KTP, menampilkan data KTP, menghapus data KTP, menghapus semua data KTP, atau mencari data KTP. Lalu, program akan memproses sesuai dengan pilihan yang dipilih oleh user.

ALGORITHM. File : main.cpp

1. Tampilkan menu yang berisi pilihan untuk menambah data KTP, menampilkan data KTP, menghapus data KTP, menghapus semua data KTP, atau mencari data KTP.
2. Baca pilihan yang dipilih oleh user.
3. Jika pilihan adalah menambah data KTP, lakukan langkah-langkah berikut:
   1. Baca data KTP baru yang akan ditambahkan.
   2. Jika jumlah data KTP kurang dari 5, tambahkan data KTP baru ke queue.
   3. Jika jumlah data KTP sudah 5 atau lebih, tampilkan pesan "Kapasitas penyimpanan sudah penuh".
4. Jika pilihan adalah menampilkan data KTP, lakukan langkah-langkah berikut:
   1. Jika queue kosong, tampilkan pesan "Tidak ada data KTP".
   2. Jika queue tidak kosong, tampilkan semua data KTP yang disimpan dalam queue.
5. Jika pilihan adalah menghapus data KTP, lakukan langkah-langkah berikut:
   1. Jika queue kosong, tampilkan pesan "Tidak ada data KTP".
   2. Jika queue tidak kosong, hapus data KTP pertama dari queue.
6. Jika pilihan adalah menghapus semua data KTP, lakukan langkah-langkah berikut:
   1. Jika queue kosong, tampilkan pesan "Tidak ada data KTP".
   2. Jika queue tidak kosong, hapus semua data KTP dari queue.
7. Jika pilihan adalah mencari data KTP, lakukan langkah-langkah berikut:
   1. Jika queue kosong, tampilkan pesan "Tidak ada data KTP".
   2. Jika queue tidak kosong, baca NIK yang dicari.
   3. Cari data KTP dengan NIK yang dicari. Jika ditemukan, tampilkan data KTP yang ditemukan. Jika tidak ditemukan, tampilkan pesan "Data KTP tidak ditemukan".
8. Ulangi langkah-langkah di atas sampai pilihan adalah keluar.

\*Tambahan
std::getline(cin, ktpBaru.nama); -> untuk Menambahkan spasi pada inputan
