#include<iostream>
#include<cstring>

#define CONST 11

using namespace std;

char tablica[CONST];
char l;
int i=0;

void wskaznik(char *znak1, char znak2, int i){
	if(*znak1== znak2){
		cout<<"Znaleziono na pozycji o numerze: "<<i+1<<endl;
	}
}

int main(){
	
	cout<<"Wprowadz lancuch: "<<endl;
	char *wsk = gets(tablica);
	cout<<"Wprowadz szukany znak: "<<endl;
	cin>>l;
	
	while(*wsk != '\0'){
		wskaznik(wsk, l, i);
		wsk++;
		i++;
	}
	
	
	system("pause");
	return 0;
}
