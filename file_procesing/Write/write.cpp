#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisialisasi 
    // ios:out untuk membuat dan menulis file
    ofstream buat_file("baru_buat.txt",ios::out);
    if(buat_file.is_open()){
        // ini file
        buat_file << "Helo ini isi yang ada di dalam file nntinya";
        buat_file.close();
        cout << "File berhasil di install !!!" << endl;
    }else{
        cout << "Gagal dalam membuat file silahkan check code kembali !!" << endl;
    }


    return 0;
}