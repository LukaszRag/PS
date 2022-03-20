#include<iostream>
#include<cstring>

#define CONST 11

using namespace std;

char *spr;
char tablica[CONST];
char tablica2[CONST];

char *zawiera_lan(char *tablica, char *tablica2){
	char *a;
	if((strcmp(tablica2, tablica))>=0){
		while(*tablica != '\0'){
			if(*tablica == *tablica2){
				a=tablica;
			}
			tablica++;
		}
	}
	else{
		a=NULL;
	}
	
	return a;
}

int main(){
	
	puts("Wprowadz zdanie: ");
		gets(tablica);
	puts("Wprowadz drugie zdanie: ");
		gets(tablica2);
		
	spr=zawiera_lan(tablica, tablica2);
	
	if(spr==NULL){
		cout<<"Lancuch 2 nie jest w lancuchu 1"<<endl;
	}
	else{
		cout<<"Lancuch 2 jest w lancuchu 1"<<endl;
	}
	
	
	system("pause");
	return 0;
}
