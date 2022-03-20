#include<iostream>
#include<cstdio>

#define CONST 11

using namespace std;

char tablica[CONST];

void zad2(char *tab, int n){
	int i=0;
	char a;
	while((a=getchar()) && !isspace(a) && i<n){
		tab[i]=a;
		i++;
	}
	
	for(int j=0; j<i; j++){
		cout<<tab[j];
	}
	cout<<endl;
}

int main(){

	zad2(tablica, CONST);
	
	system("pause");
	return 0;
}
