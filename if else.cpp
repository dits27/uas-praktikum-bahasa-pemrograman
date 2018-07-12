#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int menu;
    cout<<"====== Menu Inidia Resto ======"<<endl;
    cout<<"Lihat Menu"<<endl;
    cout<<"1. Makanan"<<endl;
    cout<<"2. Minuman"<<endl;
    cout<<"3. Snack"<<endl;
    cout<<"==============================="<<endl;
    cout<<"Pilih Menu [1/2/3] : "; cin>>menu;
    if(menu==1)
    {
        cout<<"====== Menu Makanan ======"<<endl;
        cout<<"1. Soto Betawi"<<endl;
        cout<<"2. Rendang"<<endl;
        cout<<"3. Iga Bakar"<<endl;
        cout<<"4. Sate Padang"<<endl;
        cout<<"5. Nasi Uduk"<<endl;
        cout<<"==============================="<<endl;
}
        else if(menu==2)
        {
            cout<<"====== Menu Minuman ======"<<endl;
            cout<<"1. Teh Manis"<<endl;
            cout<<"2. Soda"<<endl;
            cout<<"3. Cappucino"<<endl;
            cout<<"4. Black Coffee"<<endl;
            cout<<"5. Air Meneral"<<endl;
            cout<<"==============================="<<endl;
        
        cout<<"Menu Yang Anda Pilih Tidak Ada"<<endl;
        }
        cout<<endl;
               
        system("pause");
        return 0;
}
