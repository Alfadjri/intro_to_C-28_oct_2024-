#include<iostream>
using namespace std;

int main(){
    string value;
    int umur;
    cout << "Hello ini program pertama saya untuk cetak nama " << endl;
    cout << "Masukan nama Anda : " ;
    // cin >> value; // ini untuk 1 kata
    getline(cin,value); // ini untuk 1 kalimat
    // cin.ignore(); // ini untuk mereset nilai cin;
    cout << "Usia anda berapa : " ;
    cin >> umur;
    cout << "Hello, " << value  << ", " << umur << " tahun" << endl;
    return 0;
}