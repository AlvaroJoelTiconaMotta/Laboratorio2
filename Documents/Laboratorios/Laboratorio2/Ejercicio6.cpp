#include<iostream>
using namespace std;
void copiar_cadena(char[],char[],int);
int main(){
	char cad[]="gaaaa",cad2[5];
	copiar_cadena(cad,cad2,5);
	for(int i=0;i<5;i++)
		cout<<cad2[i];
	return 0;
}
void copiar_cadena(char cad1[],char cad2[],int tam){
	for(int i=0;i<tam;i++)
		cad2[i]=cad1[i];
}
