/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-01
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk[1];
    char goldar[1];
};

int main()
{
    Orang orang;
    orang.umur = 10;
    strcpy(orang.nama,"fahmi");
    strcpy(orang.jk,"p");
    strcpy(orang.goldar,"o");

    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<< endl;
    cout<<orang.jk<< endl;
    return 0;
}
