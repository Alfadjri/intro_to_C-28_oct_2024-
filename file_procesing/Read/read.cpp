#include<iostream>
// modul atau pakage
#include<fstream>

using namespace std;

int main(){
    
    ifstream open_file ("baca_file_ini.txt",ios::in);
    if(open_file.is_open()){
        string text_line;
        cout << "isi yang ada di dalam file" << endl;
        while(getline(open_file,text_line)){
            cout << text_line << endl;
        }
        open_file.close(); 
    }else{
        cout << "File yang anda maksud tidak di temukan !" << endl;
    }
    return 0;
}