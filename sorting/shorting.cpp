#include<iostream>
using namespace std;

//  fungsi angka acak 
void generateRandomArray(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        arr[i] = rand() % 1000 + 1;
    }
}

void print_format(string pesan ,int arr[],int n){
    cout << pesan << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]  << " ";
    }
    cout << endl;
}

// logika shorting
void bubbleSorting(int arr[],int n){
    for(int i = 0 ; i < n -1 ; i++){
        for(int j = 0 ; j < n-i- 1; j++ ){
            if(arr[j] > arr[j +1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = temp;
            }
        }
    }
}
// selection shorting
void selectionSorting(int arr[], int n){
    int i , j , min_idx;
    for(int i = 0 ; i < n - 1 ; i++){
        min_idx = 1;
        for(int j = i + 1; j < n ; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Masukan jumlah data yang diinginkan : ";
    cin >> n;
    int arr[n];
    generateRandomArray(arr,n);
    print_format("Data sebelum di acak ", arr,n);
    bubbleSorting(arr,n);
    // selectionSorting(arr,n);
    print_format("data setelah di urutkan : ", arr,n);

    return 0;
}