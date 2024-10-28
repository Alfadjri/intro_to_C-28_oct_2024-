#include<iostream>
using namespace std;

int main(){
    // kasus tolong dong tulisin nomer dari 1 sampai 10000
    // while
    // while check dulu kondisi baru di jalankan
    int no = 0;
    while(no <= 5){
        cout << no <<". while !!! "<< endl;
        // no = no + 1;
        no++;
    }
    // do while
    //  lakukan dulu baru di check
    no = 0;
    do{
        no++;
        cout << no <<".  do !!! "<< endl;
    }while(no <= 5);

    //  case parah
    // while(true){
    //     cout << no <<".  love you !!! "<< endl;
    // }
    

    //  for loop 
    for(int y = 0 ; y <= 1000 ; y++){
        cout << y <<".  for !!! "<< endl;
    }
    // foreach
    //  harus ada data
    int arr[] = {1,2,3,4,5};
    for(int value : arr){
        cout << value << endl;
    }
    

    return 0;
}