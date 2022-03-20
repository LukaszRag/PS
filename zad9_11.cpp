#include<iostream>
#include<cstring>

#define CONST 11

using namespace std;

char tablica[CONST];

void usun_odstep(char *tablica){
	
	int i=0;
	
	while(*tablica){
		if(*tablica==' '){
			*tablica=*(tablica+1);
		}
		else{
			*tablica=*tablica;
		}
		tablica++;
	}
	puts(tablica);
}

int main(){
	
	cout<<"Wpisz wyrazy: ";
	
	while(gets(tablica) && isalpha(*tablica)){
		usun_odstep(tablica);
		puts(tablica);
	}
	
	system("pause");
	return 0;
}
