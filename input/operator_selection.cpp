#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    // if 
    // if(kondisi){yang mau di lakukan}
    if (a > b) {
        cout << "Nilai " << a << " besar dari " << b << endl;
    }
    // if else
    // if(kondisi) {jika terpentuh}else{jika tidak terpenuhi}
    if (b > a ) {
        cout << "Nilai " << b << " besar dari " << a << endl;
    }else {
        cout << "Bro nilai tidak terpenuhi" << endl;
    }
    // if else if / nama lain if else nested (if else bersarang)
    int nilai = 90;

    if (nilai >= 100){
        cout << "Kamu lulus ujian dengan nilai semupurna" << endl;
    }else if(nilai >= 80){
        cout << "Kamu lulus dengan standar" << endl;
    }else{
        cout << "Gak lulus bro !" << endl;
    }
    // note pikirkan yang salah 
    //  if ternery
    string hasil = (b > a ) ? "Nilai b yang di print" : "nilai a yang di print" ;
    cout << hasil << endl;

    // switch case
    // di pakai untuk menu

    char nilai2 = 'A';
    switch(nilai2){
        case 'A' : 
            cout << "Selamat kamu mendapatkan nilai A" << endl;
        break;
        case 'B' : 
            cout << "Selamat kamu mendapatkan nilai B" << endl;
        break;
        case 'C' : 
            cout << "Selamat kamu mendapatkan nilai C" << endl;
        break;
        default : 
            cout << "Nilai gak terdaftar bro ulang ya !!!" << endl;
        break;
    }
    return 0;
}