#include<iostream>
using namespace std;

int main(){
    int x = 9;
    int y = 2;
    int hasil;
    float hasil_float;

    // penjumlahan
    cout << "=== Penjumlahan ===" << endl;
    hasil = x + y;
    cout << x << " + " << y << " = " << hasil << endl;

    cout << "=== Pengurangan ===" << endl;
    hasil = x - y;
    cout << x << " - "  << y << " = " << hasil << endl;
    cout << "=== Kali ===" << endl;
    hasil = x * y;
    cout << x << " * " << y << " = " << hasil << endl;
    cout << "=== bagi ===" << endl;
    hasil = x / y;
    hasil_float = (float) x / y ;
    cout << "=== Bagi tampa tipe data float ===" << endl;
    cout << x << " / " << y << " = " << hasil << endl;
    cout << "=== Bagi tipe float ===" << endl;
    cout << x << " / " << y << " = " << hasil_float << endl;
    cout << "=== Modulus ===" << endl;
    hasil = x % y;
    cout << x << " % " << y << " = " << hasil << endl;

    cout << "=== Incerment ===" << endl;
    // misal 
    // hasil = hasil + 1;
    hasil++; // untuk menambahkan
    cout << "Incermetn dari hasil = hasil + 1 (hasil ++) = " << hasil << endl;
    hasil--; // untuk mengurangi
    cout << "Incermetn dari hasil = hasil - 1 (hasil --) = " << hasil << endl;





    return 0;
}