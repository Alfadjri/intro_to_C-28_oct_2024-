#include<iostream>
using namespace std;


int main(){
    // Format utama tipedata namaVariable
    int integerNumber = 10;
    short shortNumber = 5;
    long  longNumber = 123456789;
    long long verylongNumber = 9876543210;


    cout << "Tipe data integer : " << integerNumber << endl;
    cout << "Tipe data short integer : " << shortNumber << endl;
    cout << "Tipe data Testing : " << longNumber << endl;

    // Tipe data desimal 
    float floatNumber = 3.14f;
    double doubleNumber = 2.718828;
    long double longDobuleNumber = 1.6180339887;

    cout << "Tipe data float : " << floatNumber << endl;
    cout << "Tipe data double  : " << doubleNumber << endl;
    cout << "Tipe data long double : " << longDobuleNumber << endl;

    char karakter = 'A';
    cout << "Tipe data char : " << karakter << endl;
    bool boolean = true;
    cout << "Tipe data boolean tampat conversi : "  << boolean << endl;
    cout << "Tipe data boolean : " << boolalpha << boolean << endl;

    // tipe data non primitif
    char kata[63] = "Selamat kamu sudah paham cara menggunakan tipe data yang cocok";
    cout << "Beljar menulis String : " << endl;
    cout << kata << endl; 
    // tipe data string ini kadang sudah masuk ke dalam primitif
    string kata_string = "Selamat kamu sudah paham cara menggunakan tipe data yang cocok";
    cout << "Beljar menulis String_non_primitif : " << endl;
    cout << kata << endl; 
    return 0;
}