#include <iostream>

using namespace std;

int main() {
	int belanja,total;
    string status,tinggal;

	cout <<endl;
	cout << "PROGRAM MENGHITUNG DISKON HARI KESAKTIAN PANCASILA DI SUPERMARKET FAIZAL"<<endl<<endl;
    cout << "Total Belanja Anda = Rp.";
    cin >> belanja;
    if (belanja > 1102019) {
    	cout << endl;
        cout << "Selamat Anda Dapat Diskon :D" <<endl<< endl;
        cout << "Apakah Anda Berdomisili Makassar ? ";
        cin >> tinggal;
        if (tinggal == "Ya") {
            cout <<endl;
            cout << "Apa Status Anda Saat Ini?" <<endl;
            cout << "1.Sudah Menikah dan Memiliki Anak" << endl;
            cout << "2.Sudah Menikah Tapi Belum Memiliki Anak" << endl;
            cout << "3.Belum Menikah dan Memiliki Kartu Anggota" << endl;
            cout << "4.Sudah Menikah Tapi Tidak Memiliki Kartu Anggota" << endl;
            cout << "Tuliskan Pilihan Anda dalam Angka = ";
            cin >> status;
            if (status == "1") {
                total = belanja - belanja * 0.75;
            } else {
                if (status == "2") {
                    total = belanja - belanja * 0.5;
                } else {
                    if (status == "3") {
                        total = belanja - belanja * 0.25;
                    } else {
                        if (status == "4") {
                            total = belanja - belanja * 0.1;
                        } else {
                            cout << "Anda Tidak Memilih Apa Apa" << endl;
                        }
                    }
                }
            }
            cout << "Total Belanja Yang Harus Dibayar = Rp. "<< total << endl;
            cout << "Anda  Mendapat Diskon" << endl;
        } else {
            cout << "Apa Status Anda Saat Ini?" <<endl;
            cout << "1.Sudah Menikah dan Memiliki Anak" << endl;
            cout << "2.Sudah Menikah Tapi Belum Memiliki Anak" << endl;
            cout << "3.Belum Menikah dan Memiliki Kartu Anggota" << endl;
            cout << "4.Sudah Menikah Tapi Tidak Memiliki Kartu Anggota" << endl;
            cout << "Tuliskan Pilihan Anda dalam Angka = ";
            cin >> status;
            if (status == "1") {
                total = belanja - belanja * 0.85;
            } else {
                if (status == "2") {
                    total = belanja - belanja * 0.6;
                } else {
                    if (status == "3") {
                        total = belanja - belanja * 0.35;
                    } else {
                        if (status == "4") {
                            total = belanja - belanja * 0.2;
                        } else {
                            cout << "Tidak Ada Dalam Pilihan" << endl;
                        }
                    }
                }
            }
            cout << "Total Belanja Yang Harus Dibayar = Rp."<< total << endl;
            cout << "Selamat Anda Mendapat Tambahan Diskon" << endl;
        }
    } else {
        cout << "Maaf Anda Tidak dapat Diskon" << endl;
    }
    return 0;
}

