#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisilisasi
    fstream read_file ("database.txt", ios::in | ios::out | ios::trunc);
    if(read_file.is_open()){
        read_file << "Helo nama saya Fadjri\n" ;
        string text;
        cout << "INI yang ada di dalam folder" << endl;
        while(getline(read_file,text)){
            cout << text << endl;
        }
        read_file.close();
    }else{
        cout << "FIle tidak di temukan" << endl;
    }

    return 0;
}