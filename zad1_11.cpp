#include<iostream>

using namespace std;
int n;
void znak(int x){
	int i=0;
	char a;
	
	while(scanf("%c", &a) != 0 && i<x){
		i++;
	}
	
}


int main(){
	
	cout<<"Wprowadz liczbe znakow: "<<endl;
	cin>>n;
	
	znak(n);
	
	system("pause");
	return 0;
}
