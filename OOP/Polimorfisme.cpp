#include<iostream>
using namespace std;
// Polimorfisme 
// tenkik dalam memmangil induk class
// dan menulis ulang function

class Animal{
    private : 
        string name;
    public:
    Animal(string nama){
        this->name = nama;
    }
    virtual void speak() const {
        cout << "Ini tidak di ketahui karna Animal" << endl;
    }
    string getInfo() const {
        return this->name;
    }
};

class Dog : public Animal{
    public : 
        Dog(string nama) : Animal(nama){}
        void speak() const override {
            cout << "Wofff !!!!" << endl;
        }
};
class Kucing : public Animal{
    public : 
        Kucing(string nama) : Animal(nama){}
        void speak() const override{ // di tulis ulang
            cout << "Meow !!!" << endl;
        }
};

// fungsi bebas manggil induk dan menulis ulang 
void makeAnimalSound(const Animal& animal){
    cout << "Nama Hewan :" << animal.getInfo() << endl;
    animal.speak();
}

int main(){
    Dog dog("Spike");
    Kucing cat("Tom");

    makeAnimalSound(dog);
    makeAnimalSound(cat);
    return 0;
}