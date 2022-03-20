#include<iostream>

using namespace std;

double a;
int b;

double potega(double a, int b){
	double pot = 1.0;
	int i;
	
	if(b==0){
		return 1;
	}
	else if(a==0){
		return 0;
	}
	else if(b<0){
		for(i=1; i<=(-b); i++){
			pot *=1/a;
		}
		return pot;
	}
	else{
	for(i=1; i<=b; i++){
		pot *=a;
	}
	return pot;
	}
}
int main(){
	
	
	cout<<"Podaj podstawe potegi: ";
	cin>>a;
	cout<<"Podaj wykladnik potegi: ";
	cin>>b;
		
	double pow=potega(a,b);
	
	cout<<"Wynik : "<<pow<<endl;
	system("pause");
	return 0;
}
