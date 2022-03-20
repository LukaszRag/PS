#include<iostream>

#define CONST 11

using namespace std;

char tablica[CONST];
char a;

int zawiera(char *tablica, char a){
	int i=0;
	while(*tablica != '\0'){
		if(*tablica == a){
			i++;
		}
		
		*tablica++;
	}
	
	if(i==0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	
	cout<<"Podaj lancuch wyrazowy: ";
	gets(tablica);
	cout<<"Wprowadz znak: ";
	cin>>a;
	
	cout<<zawiera(tablica, a)<<endl;
	
	
	system("pause");
	return 0;
}
