#include<iostream>
using namespace std;

void print_data(string pesan ,int data_value[5],int length){
    cout << pesan << endl;
//   for
    for(int i = 0 ; i < length ; i++){
        cout << "Value index " << i << " : " << data_value[i] << endl; 
    }
    cout << endl;
}

int main(){
    // inisialisasi
    // const = final = mutlak tidak bisa di ubah
    const int size = 5;
    int number[size] = {1,2,3,4,5};
    // string number[size] = {"1","2","3","4","5"};
    print_data("value baru di inisialisasi ",number,size);
    //  update value
    number[2] = 10;
    print_data("value setelah di update index ke 2 : ",number,size);
    // update nilai di posisi terakhir
    number[size - 1] = 50;
    print_data("value setelah posisi terakhir di udpate :",number,size);
    number[size - 1] = 0;
    print_data("value setelah posisi terakhir di hapus value :",number,size);

    return 0;
}