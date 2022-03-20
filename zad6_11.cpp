#include<iostream>

#define CONST 11

using namespace std;

char tablica[CONST];
char tablica2[CONST];
int n;

char *strcpy(char *tablica, char *tablica2, int n){
	int i=0;
	while(i<n){
		tablica[i]=tablica2[i];
		i++;
	}
	return tablica;
}

int main(){
	
	cout<<"Wprowadz lancuch wyrazowy: ";
	gets(tablica2);
	cout<<"Ile znakow kopiowac?: ";
	cin>>n;
		
	strcpy(tablica, tablica2, n);
	puts(tablica);
	
	system("pause");
	return 0;
}
