#include <iostream>
 using namespace std;
 int main()
{
    cout<<"=============KALKULATOR SEDERHANA=============="<<endl;
    cout<<"==============Jahidin Sholeh=========================="<<endl;
    cout<<"=================311810704============================="<<endl;
    cout<<"==================TI.18.C2============================="<<endl;
    cout<<endl;
    cout<<endl;
    int x,y,hasil;
    string Jumlah = "[1].Penjumlahan ";
    cout<<Jumlah<<endl;
    string Pengurangan = "[2].Pengurangan ";
    cout<<Pengurangan<<endl;
    string Pembagian = "[3].Pembagian" ;
    cout<<Pembagian<<endl;
    string Perkalian = "[4].Perkalian ";
    cout<<Perkalian<<endl;
    cout<<endl;

     cout<<"MASUKAN NILAI A  =";
    cin>>x;
    cout<<"MASUKAN NILAI B  =";
    cin>>y;
     int z;
    cout<<"MASUKAN PILIHAN :";
    cin>>z;
     if (z==1)
        {
        hasil=x+y;
        cout<<"Hasil Dari pilihan ke "<<Jumlah<<","<<x<<" dan "<<y<<" = "<<hasil;
        }
        else if(z==2)
            {
            hasil=x-y;
            cout<<"Hasil Dari pilihan ke "<<Pengurangan<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==3)
            {
            hasil=x/y;
            cout<<"Hasil Dari pilihan ke "<<Pembagian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==4)
            {
            hasil=x*y;
            cout<<"Hasil Dari pilihan ke "<<Perkalian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
            else
                {
                cout<<"Operator pilihan Salah";
                }
}
