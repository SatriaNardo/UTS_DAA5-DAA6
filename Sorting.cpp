#include <iostream>
using namespace std;
struct mahasiswa{
    
    string nama;
    int nim;
};
void ambilData(mahasiswa getData[],int n), printRecord(mahasiswa record[],int n), insertionSort(mahasiswa record[],int n);

int main(){
    mahasiswa komC[50];
    ambilData(komC,48);
    cout << "\nSebelum Sorting"<< endl;
    cout <<"================================================" <<endl;
    printRecord(komC,48);
    insertionSort(komC,48);
    cout << "\n\nSesudah Sorting"<< endl;
    cout <<"================================================" <<endl;
    printRecord(komC,48);
}

void ambilData(mahasiswa getData[],int n)
{    
int nim[50] = 
{
211401077,211401017,211401125,211401034,211401037,211401137,
211401102,211401117,211401111,211401108,211401054,211401083,
211401013,211401043,211401080,211401086,211401131,211401020,
211401060,211401114,211401066,211401089,211401003,211401134,
211401099,211401105,211401012,211401063,211401009,211401006,
211401128,211401051,211401057,211401026,211401069,211401140,
211401023,211401096,211401093,211401029,211401044,211401040,
211401014,211401049,211401123,211401143,211401074,211401121
};

string nama[50]=
{
"SATRIA NARDO DIONYSIUS","DINAH FARRAS ULFIAH SIREGAR",
"FANNY FAUJANNAH","FATIHANNISA LISTY ZULMI",
"FELIX","YOGI NOVIANA",
"YUSUF KALLA","ZEFANYA NICHOLAS SIBARANI",
"FIRMAN ADI PUTRA NASUTION","HIGEN PUTRA PERANGIN ANGIN",
"HUSEIN IBNU MAHMUD","ILHAM ABRAR",
"ISMAIL DARMAJI","JOHANES ALBERTO SIAHAAN",
"KEVIN BAGUS WARDHANA","LIDYA ALYA ZAHRA",
"LISTIA M P SIMANJUNTAK","M. HAFIZ ARIYANDI",
"MEYSHA SABRINA AZ-ZAHRA","MHD IQBAL FAHRIZA MANURUNG",
"MIRANDA CANTIKA SIAHAAN","MUHAMMAD ABDI HANNAN ZIDANE",
"MUHAMMAD RAFLY RITONGA","MUHAMMAD RAJA INAL LUBIS",
"MUHAMMAD RIZQULLAH HARAHAP","NAFTALY BARIL AKUDEA",
"NAYATA SANDRA CLAUDIA NASUTION","NICHOLAS HANSEN",
"NURHALIMAH","RAMADHANA HASRIANSYAH M",
"RIZKY ALPARIJI","RIZKY AZMI SWANDY",
"RONALDO DAMIANUS PARULIAN SILITONGA","SAHRU PUTRA WAJIH S",
"ABBY FAKHRI CHOIRY","ADDINA NABILAH SIREGAR",
"ADI SARPAN ALAHUT HARAHAP","AHMAD GHALIB ATHARIQ",
"ALFAN ZEQUES SITEPU","ANNISAH FITHRI",
"CHRISTIAN VIGO NATHANAEL PURBA","CHRISTOFFEL DANIEL Y. TAMBUNAN",
"DEA OKTAVIA","DIAN ATIKA SUKMA NASUTION",
"SOHMONO SODIP MANIK","STEVEN IMMANOEL",
"VIPI MONICA CHRISTINA MANALU","WAHYUDI",
};
for (int i = 0; i < n;i++){
    getData[i].nim = nim[i];
    getData[i].nama = nama[i];   
}
}
void printRecord(mahasiswa record[],int n)
{
    for(int i=0; i<n; i++){
            cout <<i+1<<". || " <<record[i].nim << " || " << record[i].nama <<  endl;
            cout <<"================================================" <<endl;
        }
}
void insertionSort(mahasiswa record[],int n)
{
    int j;
    int temp;
    mahasiswa temp1;
    for(int i = 1;i<n;i++)
    {
        temp = record[i].nim;
        j=i-1;
        while((record[j].nim > temp) && (j >= 0))
        {
            temp1= record[j+1];
            record[j+1] = record[j];
            record[j] = temp1;
            j--;
        }
        record[j+1].nim = temp;
    }
}
