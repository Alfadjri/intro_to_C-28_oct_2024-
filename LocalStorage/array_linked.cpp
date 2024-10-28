#include<iostream>
using namespace std;

//  membuat tipe data (struct)
struct Note{
    int data;
    Note* next;
};

int main(){
    // inisialisasi untuk memakai
    Note* head = nullptr;
    Note* second = nullptr;
    Note* third = nullptr;
    // cara ke dua memberikan ruang bentuk 
    head = new Note();
    second = new Note();
    third = new Note();

    // cara mengisi interior 
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr;

    // di kumpulkan 
    Note* masinis = head;

    cout << " Apa aja yang ada di dalam lokomotif" << endl;
    // cetak 
    while(masinis != nullptr){
        cout << "Data yang ada\t: " << masinis->data  << endl;
        cout << "Lokomotif ke\t: " << masinis->next << endl;
        masinis = masinis->next;
    }
    cout << endl;

    // membebaskan memory 
    delete head;
    delete second;
    delete third;

    cout << " Apa aja yang ada di dalam lokomotif" << endl;
    // cetak 
    while(masinis != nullptr){
        cout << "Data yang ada\t: " << masinis->data  << endl;
        cout << "Lokomotif ke\t: " << masinis->next << endl;
        masinis = masinis->next;
    }
    cout << endl;


    return 0;
}