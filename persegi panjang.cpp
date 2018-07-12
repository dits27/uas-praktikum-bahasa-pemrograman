#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int panjang, lebar;
	float luas;
	cout<<"input panjang"<<endl;
	cin>>panjang;
	cout<<"input lebar"<<endl;
	cin>>lebar;
	
	luas = panjang*lebar;
	
	cout<<"\nluas persegi panjang\n";
	cout<<"\npanjang ="<<panjang;
	cout<<"\nlebar   ="<<lebar;
	cout<<"\nluas    ="<<luas;
	
	getch();
}
