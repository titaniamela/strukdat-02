/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-03
Tahun       : 2019
*/
#include <iostream>

using namespace std;

struct data{
    char nip[12];
    char nama[30];
    int gol;
    int gaji;
};

typedef data pegawai[10];

void input_pegawai(pegawai& x, int& n){
    cout<<endl<<"==INPUT DATA PEGAWAI=="<<endl;
    for(int i=0; i<n; i++){
        cout<<"Data pegawai ke-"<<i+1<<endl;
        cout<<"NIP      : "; cin>>x[i].nip;
        cout<<"Nama     : "; cin>>x[i].nama;
        cout<<"Golongan : "; cin>>x[i].gol;
        cout<<endl;
    }
}

void cetak_data (pegawai x, int n){
    cout<<"--DATA PEGAWAI--"<<endl;
    for (int i=0; i<n; i++){
        cout<<"Data pegawai ke-"<<i+1<<endl;
        cout<<"NIP      : "<<x[i].nip<<endl;
        cout<<"Nama     : "<<x[i].nama<<endl;
        cout<<"Golongan : "<<x[i].gol<<endl;
        cout<<endl;
    }
}

void gaji(pegawai& x, int n){
    for (int i=0; i<n; i++){

    switch(x[i].gol){
    case 1:
    x[i].gaji=2000000;
    break;

    case 2:
    x[i].gaji=3000000;
    break;

    case 3:
    x[i].gaji=5000000;
    break;

    case 4:
    x[i].gaji=8000000;
    break;
    }
    }
}

void rata_gaji(pegawai& x, int n){
    int jumlah_gaji=0;
    for (int i=0; i<n; i++){
        jumlah_gaji+=x[i].gaji;
    }
    int ratarata=(jumlah_gaji/n);
    cout<<endl<<"Rata-rata gaji : "<<ratarata;
}

void gajiterendah(pegawai& x, int n){
    int posisi, gaji_rendah;
    for (int i=0; i<n-1; i++){
        posisi=i;
        for (int j=i+1; j<n; j++){
            if (x[posisi].gaji>x[j].gaji){
                posisi=j;
            }
        }
        swap(x[i].gaji, x[posisi].gaji);
    }
    gaji_rendah=x[0].gaji;
    cout<<endl<<endl<<"Gaji Terendah  : "<<gaji_rendah<<endl;
    for(int g=1; g<n-1; g++){
        if(x[g].gaji==gaji_rendah){
        cout<<"NIP      : "<<x[g].nip<<endl;
        cout<<"Nama     : "<<x[g].nama<<endl;
        cout<<"Golongan : "<<x[g].gol<<endl;
        cout<<endl;
        }
    }

}

void gajitinggi(pegawai& x, int n){
    int posisi, gaji_tinggi;
    for (int i=0; i<n-1; i++){
        posisi=i;
        for (int j=i+1; j<n; j++){
            if (x[posisi].gaji>x[j].gaji){
                posisi=j;
            }
        }
        swap(x[i].gaji, x[posisi].gaji);
    }
    gaji_tinggi=x[n-1].gaji;
    cout<<endl<<endl<<"Gaji Tertinggi  : "<<gaji_tinggi<<endl;
    for(int g=1; g<n-1; g++){
        if(x[g].gaji==gaji_tinggi){
        cout<<"NIP      : "<<x[g].nip<<endl;
        cout<<"Nama     : "<<x[g].nama<<endl;
        cout<<"Golongan : "<<x[g].gol<<endl;
        cout<<endl;
        }
}
}

void cari_gaji(pegawai& x, int n){
    int gaji_cari;
    cout<<"CARI GAJI PEGAWAI"<<endl;
    cout<<"Masukkan gaji: "; cin>> gaji_cari;
    for(int i=0; i<n; i++){
        if(gaji_cari==2000000&&x[i].gol==1){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gaji_cari==3000000&&x[i].gol==2){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gaji_cari==5000000&&x[i].gol==3){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gaji_cari==8000000&&x[i].gol==4){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
    }
}

int main()
{
    pegawai x;
    int n, menu;

    cout<<"Menu Data Pegawai"<<endl;
    cout<<"1. Data Pegawai"<<endl;
    cout<<"2. Cari Gaji Pegawai"<<endl;
    cout<<"3. Rata-rata Gaji"<<endl;
    cout<<"4. Gaji Terendah"<<endl;
    cout<<"5. Gaji Tertinggi"<<endl<<endl;

    cout<<"Masukkan menu: "; cin>>menu;

    cout<<"Input data terlebih dahulu"<<endl;
    cout<<"Masukkan jumlah pegawai: ";cin>>n;
    input_pegawai(x, n);
    gaji(x,n);

    switch(menu){
    case 1:
    cetak_data(x, n);
    break;

    case 2:
    cari_gaji(x, n);
    break;

    case 3:
    rata_gaji(x, n);
    break;

    case 4:
    gajiterendah(x, n);
    break;

    case 5:
    gajitinggi(x, n);
    break;
    }
}
