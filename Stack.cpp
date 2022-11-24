#include <iostream>
#include <stack> 
#include <string.h>
#include <conio.h>
#define nmax 10
using namespace std;

int main(){
    system("CLS");
    stack <string> data_stack;
    string data[20];
    int n = 0;
    int menu, yakin;
    awal:
    system("cls");
            cout<<"\t PROGRAM STACK\n";
            cout<<"\t===============\n";
            cout<<"Menu : ";
            cout<<"\n1. Pop stack";
            cout<<"\n2. Push stack";
            cout<<"\n3. Cetak";
            cout<<"\n4. Exit";
           
            cout<<"\nMenu pilihan Anda : ";
            cin>>menu;
           
            if(menu == 1)
            {
                if(data_stack.empty())
                {
                    cout<<"Tidak ada data untuk dihapus";
                    getch();
                    cout<<endl;
                    goto awal;
                }
                cout<<"Data yang akan dihilangkan : "<<data_stack.top();
                cout<<"\nAnda yakin? (Y(1)/N(2))";cin>>yakin;
                if (yakin == 1)
                {
                data_stack.pop();
                goto awal;
                }
                else
                {
                cout<<"Data tidak jadi dihapus";
                getch();
                cout<<endl;
                goto awal;
                }
            }
            else if(menu == 2)
            {
                if(n == nmax)
                {
                    cout<<"Data sudah penuh";
                    getch();
                    cout<<endl;
                    goto awal;
                }
                else
                {
                cout<<"\nTambah Data";
                cout<<"\n-----------";
                cout<<"\nData yang akan disimpan di stack : ";
                cin>>data[n];
                data_stack.push(data[n]);
                n++;
                goto awal;
                }
            }
            else if(menu == 3)
            {
                if(n == 0)
                {
                cout<<"Data belum ada";
                getch();
                goto awal;
                }
                for(int i = 0; i < n ; i++)
                {
                cout<<data_stack.top()<<endl;;
                data_stack.pop();
                }
                getch();
                goto awal;
            }
            else if(menu == 4)
            {
                cout<<"Terima Kasih";
                  exit(0);
            }

}