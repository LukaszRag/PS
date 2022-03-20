#include<iostream>

#define CONST 11

using namespace std;

char tablica[CONST];
char tablica2[CONST];

void pierwsze(char *tablica, char *tablica2, int n){
	int i=0;
	puts("Wprowadz kilka slow: ");
	gets(tablica);
	
	while(!isspace(*tablica)){
		tablica2[i]= *tablica;
		tablica++;
		i++;
	}
	
	for(int k=0; k<i; k++){
		cout<<tablica2[k];
	}
	cout<<endl;
}

int main(){
	
	pierwsze(tablica, tablica2, CONST);
		
	system("pause");
	return 0;
}
