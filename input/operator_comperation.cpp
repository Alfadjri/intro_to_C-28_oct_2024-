#include<iostream>
using namespace std;

int main(){
    bool a = true;
    bool b = true;
    bool hasil;
    // operator and ( && )
    hasil = (a && b);
    cout << "Hasil " << boolalpha << a << " Ketemu dengan " << boolalpha << b << " dengan simbol and(&&) adalah " << boolalpha << hasil << endl;
    // operator or ( || )
    // pipe (|) lokasi shift + di atas enter 
    hasil = (a || b);
    cout << "Hasil " << boolalpha << a << " Ketemu dengan " << boolalpha << b << " dengan simbol or(||) adalah " << boolalpha << hasil << endl;
    // operator kebalikan (!)
    hasil = !a;
    cout << "Hasil " << boolalpha << a << " Ketemu dengan simbol bukan(!) adalah " << boolalpha << hasil << endl;

    int x = 2;
    int y = 2;
    //  besar dari (>)
    hasil = (x > y);
    cout << "Apakah nilai " << x  << " Itu lebih besar dari (>) " << y << " = "  << boolalpha << hasil << endl;
    //  kicil dari (<)
    hasil = (x < y);
    cout << "Apakah nilai " << x  << " Itu lebih besar dari (<) " << y << " = "  << boolalpha << hasil << endl;
    //  besar sama dengan (>=)
    hasil = (x >= y);
    cout << "Apakah nilai " << x  << " Itu lebih besar dari (>=) " << y << " = "  << boolalpha << hasil << endl;
    //  kecil sama dengan (<=)
    hasil = (x <= y);
    cout << "Apakah nilai " << x  << " Itu lebih besar dari (<=) " << y << " = "  << boolalpha << hasil << endl;
    //  komper atau membandingkan (==) mau lebih detail sampai tipe (===)
    hasil = (x == y);
    cout << "Apakah nilai " << x  << " Itu lebih besar dari (==) " << y << " = "  << boolalpha << hasil << endl;
    return 0;
}