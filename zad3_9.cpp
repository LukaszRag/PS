#include<iostream>

using namespace std;

char c; 
int b,s;

char rzad_znakow(char ch, int i, int j){
	for(int x=0; x<j; x++){
		for(int x=0; x<i; x++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}



int main(){
	
	cout<<"Podaj znak: ";
		cin>>c;
	cout<<"ile kolumn?: ";
		cin>>b;
	cout<<"ile wierszy?: ";
		cin>>s;
		
		
rzad_znakow(c,b,s);

system("pause");	
return 0;
}
