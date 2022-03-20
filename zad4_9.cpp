#include<iostream>

using namespace std;

float x, y;

float s_harm(float a, float b){
	return 1/(((1/a)+(1/b))/2);
}



int main(){
	cout<<"Podaj pierwsza liczbe: ";
		cin>>x;
	cout<<"Podaj druga liczbe: ";
		cin>>y;
		
	float g = s_harm(x,y);
	
	cout<<"Harmoniczna: "<<g<<endl;
	
	system("pause");
	return 0;
}
