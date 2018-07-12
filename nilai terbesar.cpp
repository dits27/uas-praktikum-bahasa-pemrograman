#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,max;
	cout<<"mencari nilai terbesar\n";
	cout<<"nilai 1:";
	cin>>a;
	cout<<"nilai 2:";
	cin>>b;
	
	if(a>b){
		max=a;
	}else{
		max=b;
	}
	cout<<"Bilangan terbeasar = \n"<<max;
	getch();
}

