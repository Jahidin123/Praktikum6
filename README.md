# Praktikum6
# praktikum6
 
Latihan1#Aplikasi Kalkulator sederhana
```
1.Alur algoritmanya
	-Mendeklarasikan string penjumlahan untuk operator aritmatika (+)
	-Mendeklarasikan string penngurangan untuk operator aritmatika (-)	
	-Mendeklarasikan string pembagian untuk operator aritmatika (/)
	-Mendeklarasikan string perkalian untuk operator aritmatika (*)
	-Mendeklarasikan variabel x,y sebagai nilai input
	-Mendeklarasikan variabel hasil untuk hasil aritmatika
	-Mendeklarasikan variabel z untuk nilai input operator aritmatika
```
2.Berikut kode lengkapnya

```c++
int main()
{
    cout<<"==============APLIKASI KALKULATOR SEDERHANA=============="<<endl;
    cout<<"                      Asep Sunarya"<<endl;
    cout<<"                       311510926"<<endl;
    cout<<"                        TI.18.C2"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"            ====DAFTAR OPERATOR ARITMATIKA===="<<endl;
    int x,y,hasil;
    string Jumlah = "1.Penjumlahan (+)";
    cout<<Jumlah<<endl;
    string Pengurangan = "2.Pengurangan (-)";
    cout<<Pengurangan<<endl;
    string Pembagian = "3.Pembagian (/)";
    cout<<Pembagian<<endl;
    string Perkalian = "4.Perkalian (*)";
    cout<<Perkalian<<endl;
    cout<<endl;

    cout<<"Masukan Angka ke-1 :";
    cin>>x;
    cout<<"Masukan Angka ke-2 :";
    cin>>y;

    int z;
    cout<<"Masukan Operator Aritmatika :";
    cin>>z;

    if (z==1)
        {
        hasil=x+y;
        cout<<"Hasil Dari aritmatika ke "<<Jumlah<<","<<x<<" dan "<<y<<" = "<<hasil;
        }
        else if(z==2)
            {
            hasil=x-y;
            cout<<"Hasil Dari aritmatika ke "<<Pengurangan<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==3)
            {
            hasil=x/y;
            cout<<"Hasil Dari Aritmatika ke "<<Pembagian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
        else if(z==4)
            {
            hasil=x*y;
            cout<<"Hasil Dari aritmatika ke "<<Perkalian<<","<<x<<" dan "<<y<<" = "<<hasil;
            }
            else
                {
                cout<<"Operator Aritmatika Salah";
                }
}
