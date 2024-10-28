#include<iostream>
#include<map> 
using namespace std;

void format_cetak(string pesan , map<int,string> value_map){
    cout << pesan << endl;
    cout << "|key\t|value\t|" << endl;
    for(const auto& value : value_map){
        cout << "|"<<value.first<<"\t|"<<value.second<<"\t|"<< endl;
    }
}


int main(){
    // inisialisasi
    map<int,string> makanan;
    // input 
    makanan[0] = "Roti";
    makanan[2] = "Pasta";
    makanan[1] = "Nasi";
    makanan[3] = "Nasi padang";

    //  cetak semua nilai
    format_cetak("Elemetn yang ada  pada variabel makanan : ",makanan);

    //  cetak hanya 1 nilai
    cout << "Apa value yang ada pada posisi ke 2 : " << makanan[1] << endl;

    // update
    makanan[3] = "Rendang";
    format_cetak("Elemetn yang ada pada variabel makanan setelah di update :  ",makanan);

    // delete
    makanan.erase(1);
    format_cetak("Elemetn yang ada pada variabel makanan setelah di delete posisi ke 1 : ", makanan);



    return 0;
}