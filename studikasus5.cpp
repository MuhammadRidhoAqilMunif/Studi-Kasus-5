#include <iostream>
#include <conio.h>
using namespace std;

class mahasiswa {
	public:
		void garis1(int n){
			int i;
			for(i=1; i<=n; i++){
				cout << "=";
			}
		}
		void garis2(int n){
			int i;
			for(i=1; i<=n; i++){
				cout << "-";
			}
		}
		void input();
		void proses();
		void output();
	private:
		int nim, a,mk,sks[100], diskon;
		string nm, pd, matkul[20];
	    int ts=0;
};

void mahasiswa::input(){
	cout<<"  PROGRAM INPUT SKS DAN MATKUL MAHASISWA "<<endl;
	garis1(50);
	cout<<"\n Nama      : "; cin>>nm;
	cout<<" NIM       : "; cin>>nim;
	cout<<" Prodi     : "; cin>>pd;
	garis1(50);
    cout<<"\n Masukan Jumlah Mata Kuliah : "; cin>>mk                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    garis1(50);
    
    for (a=0; a<mk; a++){
        cout<<"\n Nama Mata Kuliah   : "; cin>>matkul[a];
        cout<<" SKS\t: "; cin>>sks[a];
        ts+=sks[a];
    }
}

void mahasiswa::proses(){
	int total, tarif=120000, potongan=102600;
    total=tarif*ts;
    garis1(50);
    cout<<"\n Total SKS\t   : "<<ts<<endl;
    cout<<" Total keseluruhan biaya SKS : "<<total<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    garis1(50);
    cout<<"\nMendapatkan Diskon 10% + 5% Dikarenakan Pandemi"<<endl;
    if(total>=100000){
        diskon=potongan*ts;
    }else{
        diskon=0;
    }
    cout<<"Total Bayar  : Rp."<<diskon<<endl;
    garis1(50);
}

void mahasiswa::output(){
	cout<< "\nNama\t : " << nm << endl;
	cout<< "NIM\t : " << nim << endl;
	cout<< "Prodi\t : " << pd << endl;
	garis2(50);
	cout<< "\nMata Kuliah\tSKS" << endl;
	for(int a=0; a < mk; a++)
	cout<< matkul[a] << "\t\t" << sks[a] << endl;
	garis2(50);
	cout<< "\nTotal pembayaran : Rp. "<<diskon << endl;
}

int main(){
    mahasiswa mhs;
	
	mhs.input();
	mhs.proses();
	mhs.output();
    
    return 0;
}
