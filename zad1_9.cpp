#include<iostream>

using namespace std;

double a, b;

double min(double a, double b){
	if(a>b){
		cout<<"wieksza: "<<a<<endl;
	}
	else if(a==b){
		cout<<"Liczby sa rowne"<<endl;
	}
	else{
		cout<<"Wieksza: "<<b<<endl;
	}
}

int main(){
	
	cout<<"Wprowadz liczby: "<<endl;
		cin>>a;
		cin>>b;
	
	min(a,b);
	
	
	return 0;
}
