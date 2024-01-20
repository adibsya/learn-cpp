#include <iostream>
using namespace std;
// membuat program search array dengan algoritma linear search
/*ide program
    1. user input nilai-nilai yang disimpan ke dalam array
    2. proses input menggunakan looping
    3. setiap input disimpan ke dalam array
    4. user mencari nilai
    5. menggunakan algoritma linear search dngan for looping untuk mencari nilai yang di inginkan
*/

int main()
{
    int size_array, cari, i;
    int nilai[100];

    cout << "====PROGRAM MENCARI NILAI DALAM ARRAY====" << endl;
    cout << "Berapa ukuran arraynya bro ? 1-100 elemen aja ya" << endl;
    cin >> size_array;
    // user input nilai kedalam array
    cout << "Masukin dulu yah nilainya berapa aja" << endl;
    cout << "Tekan enter untuk input nilai selanjutnya" << endl;
    for (int i = 0; i < size_array; i++)
    {
        cin >> nilai[i];
    }
    cout << endl;
    // user mencari nilainya
    cout << "Mana nih nilai yang ingin dicari ?" << endl;
    cin >> cari;
    for (i = 0; i < size_array; i++)
    {
        if (nilai[i] == cari)
        {
            cout << "Nilai " << nilai[i] << " ditemukan pada indeks ke- " << i << endl;
            break;
        }
    }
    if (cari != nilai[i])
    {
        cout << "Nilai " << cari << " tidak ditemukan dalam array" << endl;
        }

    cin.get();
    return 0;
}
