#pragma once
#include <iostream>
using namespace std;

class Hewan{
    private:
        string nama;
        string suara;
    public : 
        Hewan(const string nama , const string suara);
        void tampilkaninfo() const;
};