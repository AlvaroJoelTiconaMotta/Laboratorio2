#include<iostream>
using namespace std;
int suma(int []);
int recursiva(int[]);
int tam=5;
int main(){
	int num[]={1,2,3,4,5};
	cout<<"La suma de los elementos es: "<<recursiva(num)<<endl;tam=5;
	cout<<"La suma de los elementos es: "<<suma(num)<<endl;
	return 0;
}
int suma(int num[]){
	int suma=0,i=0;
	for (i;i<tam;suma+=num[i++]);return suma;
}

int recursiva( int num[]){
	return tam--==1 ? num[0] : num[tam]+recursiva(num);
	//Tambien es valido
	/*if(tam--==1){
		return num[0];
	}
	else 
		return num[tam]+recursiva(num);
	*/
}