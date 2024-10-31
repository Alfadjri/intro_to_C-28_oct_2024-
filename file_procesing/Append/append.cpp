#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisilisasi
    ofstream file_update("../Write/baru_buat.txt",ios::app);
    if(file_update.is_open()){
        file_update << "Ini pesan yang baru saja saya tambahkan\n";
        cout << "Update berhasil di lakukan silahkan check kembali" << endl;
    }else{
        cout << "File gagal di temukan update tidak berjalan" << endl;
    }
    return 0;
}