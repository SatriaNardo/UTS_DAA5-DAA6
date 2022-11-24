#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int pilih,pemilu;
string pause;

struct data{
    string name;
    int kuantitas;
    int jumlah;
};

data kwitansi[30];

main() {
int i=1;
awal:
system("CLS");
cout<<"Membeli(1)/ Melihat Data(2)";cin>>pemilu;
if(pemilu == 1)
{
cout<<"Nama : ";cin>>kwitansi[i].name;
atas:
system("CLS");
cout<<"      =====================================\n";
cout<<"      |          Toko Alat Tulis          |\n";
cout<<"      =====================================\n\n";
cout<<"      =====================================\n";
cout<<"      | 1.   Pulpen            Rp 2000    |\n";
cout<<"      | 2.   Buku              Rp 6000    |\n";
cout<<"      | 3.   Pensil            Rp 2000    |\n";
cout<<"      | 4.   Penggaris         Rp 3000    |\n";
cout<<"      | 5.   Penghapus         Rp 1500    |\n";
cout<<"      | 6.   Spidol            Rp 2500    |\n";
cout<<"      | 7.           Check Out            |\n";
cout<<"      =====================================\n";
cout<<"      Pilih dari (1/2/3/4/5/6/7)";cin>>pilih;
if(pilih == 1)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 2000;
goto atas;
}
else if(pilih == 2)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 6000;
goto atas;
}
else if(pilih == 3)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 2000;
goto atas;
}
else if(pilih == 4)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 3000;
goto atas;
}
else if(pilih == 5)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 1500;
goto atas;
}
else if(pilih == 6)
{
kwitansi[i].kuantitas = kwitansi[i].kuantitas + 1;
kwitansi[i].jumlah = kwitansi[i].jumlah + 2500;
goto atas;
}
else if(pilih == 7)
{
cout<<"Banyak Barang yang anda beli : "<<kwitansi[i].kuantitas<<endl;
cout<<"Total Pembelian anda adalah : "<<kwitansi[i].jumlah<<endl;
i++;
cin>>pause;
goto awal;
}
else
{
cout<<"Inputtan Anda Salah";
cin>>pause;
goto atas;
}
}
else if (pemilu == 2)
{
system("CLS");
if(i == 1)
{
    cout<<"Data Tidak Dapat Ditemukan";
    cin>>pause;
    goto awal;
}
else
{

cout<<"      =====================================\n";
cout<<"      |       Detail Toko Alat Tulis      |\n";
cout<<"      =====================================\n\n";
for(int n = 1; n < i ; n++)
{
cout<<"      Nama Pembeli : "<<kwitansi[n].name<<endl;
cout<<"      Banyak Barang : "<<kwitansi[n].kuantitas<<endl;
cout<<"      Jumlah Pembelian : "<<kwitansi[n].jumlah<<endl<<endl;
}
cin>>pause;
goto awal;
}
}
else
{
cout<<"Inputtan Anda Salah";cin>>pause;
goto awal;
}
}
