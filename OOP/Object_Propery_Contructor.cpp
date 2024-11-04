#include<iostream>
using namespace std;
// Object_Propery_Contructor
// 
class Animal{
    private:
    public : // property
     string nama; // object  : ini value atau variabel
    // constructor 
    Animal(/* paramater */ string name ){
        // this->object : ini untuk menunjukan kepemilikan variabel atau object pada class
        this->nama = name;
    }
    
};

int main(){
    Animal animal("Kucing");
    cout << "Sebelum di update : " << endl; 
    cout << animal.nama << endl;
    return 0;
}