#include<iostream>
using namespace std;
int tamanio(char[]);
int recursivo(char []);
int act =-1;
int main(){
	char cad[]="Hola mundo";
	cout<<"La cantidad de digitos es: "<<tamanio(cad)<<endl;
	cout<<"La cantidad de digitos es: "<<recursivo(cad)<<endl;
	return 0;
}
int tamanio(char cad1[]){
	int cont=0;
	while(*cad1++!='\0')
		cont++;		
	return cont;
}
int recursivo(char cad[]){
	return *(cad+(++act))=='\0' ? 0 : 1+recursivo(cad);
	//Tambien es posible 
	/*if (*(cad+(++act))=='\0')
		return 0;
	else
		return 1+recursivo(cad);
	*/
}
