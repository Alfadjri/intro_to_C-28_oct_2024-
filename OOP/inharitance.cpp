#include<iostream>
using namespace std;
// Inharitance 
// Mewariskan fungsi(method) dan varibale(Object) pada class

class Animal{
    // notes gak baik kalu nulis code yang tidak kepakek
    protected:
        string nama;
        short jumlah_kaki;
    private:
    public:
        void setName(string name){
            this->nama= name;
        }
        void setJumlahKaki(int jumlah){
            this->jumlah_kaki = jumlah;
        }
        void getInfo() const{
            cout << "Nama hewan : " << this->nama << endl;
            cout << "Jumlah kaki : " << this->jumlah_kaki << endl;
        }
};
class Kucing : public Animal {
    private:
        string suara_kucing = "Meong";
    public:
        void setSuara(string suara){
            this->suara_kucing = suara;
        }
        void getinfoKucing() const {
            getInfo();
            cout << "Suara Animal : " << this->suara_kucing << endl; 
        }
};


int main(){
    Kucing kucing;
    kucing.setSuara("Meong !!!");
    kucing.setName("Tom");
    kucing.setJumlahKaki(4);
    kucing.getinfoKucing();
    return 0;
}