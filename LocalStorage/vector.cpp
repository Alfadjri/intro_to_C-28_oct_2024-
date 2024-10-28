#include<iostream>
#include<vector> // version c++ 11 ke atas
using namespace std;

// function di dalam c ini ada 2 jenis
// 1. function dengan tampa nilai keluar atau return
// 2. function dengan return

void cetak_data(string pesan , vector<int> value_vector){
    cout << pesan << endl;
    for(int value : value_vector){
        cout << value << endl;
    }
}


int main(){
    // inisalisasi (memanggil atau menyediakan tempat sementara)
    // format dasar std::vector<tipe_data_yang_mau_ditampug> namaVariable
    vector<int> number;

    //  untuk mengimput data;
    number.push_back(2);
    number.push_back(1);
    number.push_back(3);

    // untuk mencetak 
    cetak_data("Element yang ada pada Vector number : ",number);
    // update 
    number[1] = 4;
    // untuk mencetak 
    // cout << "Element yang ada pada Vector number ke 2 apakah sudah terupdate ? : " << endl;
    // for(int value : number){
    //     cout << value << endl;
    // }
    cetak_data("Element yang ada pada Vector number ke 2 apakah sudah terupdate ? : ", number);
    // untuk menghapus 
    number.pop_back();
    // cout << "Element yang ada pada Vector number terakhir setelah di hapus : " << endl;
    // for(int value : number){
    //     cout << value << endl;
    // }
    cetak_data("Element yang ada pada Vector number terakhir setelah di hapus :",number);
    return 0;
}