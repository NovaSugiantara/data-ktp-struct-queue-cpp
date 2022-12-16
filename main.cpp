#include <iostream>
#include <string>
#include <queue>

using namespace std;

// Definisikan struct untuk data KTP
struct KTP {
  int nik;
  string nama;
  string tanggalLahir;
  string statusPerkawinan;
  string pekerjaan;
};

int main() {
  // Buat queue untuk menyimpan data KTP
  queue<KTP> dataKTP;

  // Buat variabel untuk menampung pilihan menu
  int menu;

  // Tampilkan menu dan lakukan proses sesuai dengan pilihan
  do {
    cout << "****************************************************************" << endl << endl;
    cout << "Menu:" << endl;
    cout << "1. Tambah data KTP" << endl;
    cout << "2. Tampilkan data KTP" << endl;
    cout << "3. Hapus data KTP" << endl;
    cout << "4. Hapus semua data KTP" << endl;
    cout << "5. Cari data KTP" << endl;
    cout << "6. Keluar" << endl;
    cout << "Masukkan pilihan: ";
    cin >> menu;
    cout << "****************************************************************" << endl << endl;

    switch (menu) {
      case 1: {
        // Tambah data KTP
        KTP ktpBaru;
        cout << "Masukkan NIK: ";
        cin >> ktpBaru.nik;
        cout << "Masukkan nama: ";
        getline(cin, ktpBaru.nama);
        cout << "Masukkan tanggal lahir (HH-BB-TTTT): ";
        cin >> ktpBaru.tanggalLahir;
        cout << "Masukkan status perkawinan: ";
        getline(cin, ktpBaru.statusPerkawinan);
        cout << "Masukkan pekerjaan: ";
        getline(cin, ktpBaru.pekerjaan);

        if (dataKTP.size() <= 5) {
            // Tambah data KTP ke queue
            dataKTP.push(ktpBaru);
        } else {
            cout << "Kapasitas penyimpanan sudah penuh" << endl;
        }
        break;
      }
      case 2: {
       // Tampilkan data KTP
        if (dataKTP.empty()) {
          cout << "Tidak ada data KTP" << endl;
        } else {
          cout << "Data KTP:" << endl;
          while (!dataKTP.empty()) {
            KTP ktp = dataKTP.front();
            cout << "NIK: " << ktp.nik << endl;
            cout << "Nama: " << ktp.nama << endl;
            cout << "Tanggal lahir: " << ktp.tanggalLahir << endl;
            cout << "Status perkawinan: " << ktp.statusPerkawinan << endl;
            cout << "Pekerjaan: " << ktp.pekerjaan << endl;
            cout << endl;
            dataKTP.pop();
          }
        }
        break;
      }
      case 3: {
        // Hapus data KTP dari queue / dequeue
        if (dataKTP.empty()) {
          cout << "Tidak ada data KTP" << endl;
        } else {
          dataKTP.pop();
          cout << "Data KTP telah dihapus" << endl;
        }
        break;
      }
      case 4: {
        // Hapus semua data KTP
        if (dataKTP.empty()) {
          cout << "Tidak ada data KTP" << endl;
        } else {
          while (!dataKTP.empty()) {
            dataKTP.pop();
          }
          cout << "Semua data KTP telah dihapus" << endl;
        }
        break;
      }
      case 5: {
        // Cari data KTP
        if (dataKTP.empty()) {
          cout << "Tidak ada data KTP" << endl;
        } else {
          int nik;
          cout << "Masukkan NIK yang dicari: ";
          cin >> nik;\

          bool ditemukan = false;
            // Tampilkan data KTP
            if (dataKTP.empty()) {
              cout << "Tidak ada data KTP" << endl;
            } else {
              cout << "Data KTP:" << endl;
              while (!dataKTP.empty()) {
                KTP ktp = dataKTP.front();
                cout << "NIK: " << ktp.nik << endl;
                cout << "Nama: " << ktp.nama << endl;
                cout << "Tanggal lahir: " << ktp.tanggalLahir << endl;
                cout << "Status perkawinan: " << ktp.statusPerkawinan << endl;
                cout << "Pekerjaan: " << ktp.pekerjaan << endl;
                cout << endl;
                dataKTP.pop();
              }
            }
          if (!ditemukan) {
            cout << "Data KTP tidak ditemukan" << endl;
          }
        }
        break;
      }
      case 6: {
        // Keluar
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
      }
      default: {
        // Pilihan menu tidak valid
        cout << "Pilihan menu tidak valid" << endl;
        break;
      }
    }
  } while (menu != 6);

  return 0;
}