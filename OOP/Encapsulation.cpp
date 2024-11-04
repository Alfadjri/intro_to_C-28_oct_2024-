#include<iostream>
using namespace std;
// Encapsulation
// ini teknik dalam menyembunyikan nilai 
class Animal{
    private:
    string nama;

    public : 
    Animal(/* paramater */ string name ){
        this->nama = name;
    }
    // cara untuk manggil 
    // kita harus bikin function 
    // setter 
    // getter
    // const untuk fungsi yang tetap tidak bisa di ubah
    string getName() const {
        return this->nama;
    }
    void setName(string name){
        this->nama = name;
    }
};

int main(){
    Animal animal("Kucing");
    cout << "Sebelum di update : " << endl; 
    cout << animal.getName() << endl;
    cout << "Setelah di update : " << endl;
    animal.setName("Dog");
    cout << animal.getName() << endl;
    return 0;
}