#include<iostream>
#include<cstring>

#define CONST 11

using namespace std;

char tablica[CONST];

void odwraca(char *tablica){
	char tmp[CONST];
	strcpy(tmp, tablica);
	
	int dl=strlen(tablica);
	char *wyraz = tablica;
	char *wyraz2 =tmp+dl-1;
	
	while(*wyraz){
		*wyraz= *wyraz2;
		wyraz++;
		wyraz2--;
	}
}

int main(){
	
	cout<<"Wpisz fraze: ";
	gets(tablica);
	
	odwraca(tablica);
	cout<<"Po odworceniu: "<<tablica<<endl;
	
	system("pause");
	return 0;
}
