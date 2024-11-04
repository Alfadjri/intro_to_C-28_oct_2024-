#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void getSound() const = 0 ; // ini bentuknya tidak di ketahui
};
class Kucing : public Animal{
    public:
    void getSound() const override{
        cout << "Testing" << endl;
    }
};

int main(){
    Kucing kucing;
    kucing.getSound();
    return 0;
}