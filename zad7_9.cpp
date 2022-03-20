#include<iostream>

using namespace std;

double a;
int b;

double rekurencja(double a, int b){
	if(b == 0){
		return 1;
	}
	else if(a == 0){
		return 0;
	}
	else if(b<0){
		return 1/a * rekurencja(1/a, (-b)-1);
	}
	else{
		return a * rekurencja(a, b-1);
	}
}

int main(){
	
	
	cout<<"Podaj podstawe potegi: ";
	cin>>a;
	cout<<"Podajz wykladnik potegi: ";
	cin>>b;
		
	double pow=rekurencja(a,b);
	
	cout<<"Wynik : "<<pow<<endl;
	system("pause");
	return 0;
}
