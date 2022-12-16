#include <iostream>
#include <string>
#include <queue>

using namespace std;

// Definisi struct untuk menyimpan data KTP
struct KTP {
  int NIK;
  string nama;
  string tanggalLahir;
  string statusPerkawinan;
  string pekerjaan;
};

int main() {
  // Buat queue berkapasitas 5 data KTP
  queue<KTP> dataKTP;

  // Enqueue data KTP ke queue
  KTP data1;
  data1.NIK = 12345;
  data1.nama = "John Doe";
  data1.tanggalLahir = "01-01-1970";
  data1.statusPerkawinan = "Belum Menikah";
  data1.pekerjaan = "Pegawai Negeri";
  dataKTP.push(data1);

  KTP data2;
  data2.NIK = 54321;
  data2.nama = "Jane Doe";
  data2.tanggalLahir = "02-02-1980";
  data2.statusPerkawinan = "Menikah";
  data2.pekerjaan = "Dokter";
  dataKTP.push(data2);

  // Tampilkan isi queue
  cout << "Isi queue:" << endl;
  while (!dataKTP.empty()) {
    KTP data = dataKTP.front();
    cout << "NIK: " << data.NIK << endl;
    cout << "Nama: " << data.nama << endl;
    cout << "Tanggal Lahir: " << data.tanggalLahir << endl;
    cout << "Status Perkawinan: " << data.statusPerkawinan << endl;
    cout << "Pekerjaan: " << data.pekerjaan << endl;
    cout << endl;
    dataKTP.pop();
  }

  // Hapus semua data KTP dari queue
  while (!dataKTP.empty()) {
    dataKTP.pop();
  }
  cout << "Queue kosong." << endl;

  return 0;
}
