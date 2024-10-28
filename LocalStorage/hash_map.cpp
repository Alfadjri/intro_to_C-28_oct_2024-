#include<iostream>
#include<unordered_map>
using namespace std;

void format_cetak(string pesan , unordered_map<string,int> hash_map){
    cout << pesan << endl;
    cout << "|key\t\t|value\t\t|"<<endl;
    for(const auto& value : hash_map){
        cout << "|" << value.first << "\t\t|" << value.second << "\t\t|" << endl;
    }
}

int main(){
    // inisialasi hash_map
    unordered_map<string,int> hash_map;

    // cara isi varable
    hash_map["One"] = 1;
    hash_map["Tree"] = 3;
    hash_map["Two"] = 2;
    hash_map["Four"] = 4;

    //  cetak semua nilai
    format_cetak("Elemet yang ada pada hash_map : ", hash_map);

    //  untuk mencetak spesifik panggil key 
    cout << "Elemet yang ada pada key One adalah : " << hash_map["One"] << endl;

    // update 
    hash_map["One"] = 10;
    format_cetak("Elemetn yang ada pada hash_map setelah di update : ", hash_map);

    //  delete
    hash_map.erase("Four");
    format_cetak("Element yang ada pada hash_map setelah di delete : ", hash_map);


    return 0;
}