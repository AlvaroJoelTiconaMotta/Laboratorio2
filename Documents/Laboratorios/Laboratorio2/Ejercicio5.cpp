#include<iostream>
using namespace std;
void concatenar(char[],char[],int);
int main(){
	char cad[]="mundo",cad2[10]="Hola ";
	concatenar(cad,cad2,5);
	for(int i=0;i<10;i++)
		cout<<cad2[i]<<"";
	return 0;
}
void concatenar(char cad1[],char cad2[],int tam){
	for(int i=0;i<tam;i++)
		cad2[i+tam]=cad1[i];
}
