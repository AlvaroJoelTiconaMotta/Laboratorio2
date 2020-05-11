#include<iostream>
using namespace std;
void invertir(int [],int);
int recursivo(int [],int);
int act,inversa=0;
int main(){
	int arreglo[]={1,2,3,4},size=4;
	
    recursivo(arreglo,size);//invierte arreglo
    invertir(arreglo,size);//Vuelve a invertir (devuelve arreglo original)
    cout<<"Mostrando arreglo invertido: "<<endl;
    for(int j=0;j<size;j++)
    	cout<<arreglo[j]<<" ";
	return 0;
}
void invertir(int arreglo[],int size){
	int aux;
	for(int i=0;i<(size+1)/2;i++){
		aux=arreglo[i];
		arreglo[i]=arreglo[size-i-1];
		arreglo[size-i-1]=aux;
	}
}
int recursivo(int arreglo[],int size){
    if (size>0) { 
        int temp = arreglo[0];
        arreglo[0] = arreglo[size-1];
        arreglo[size-1] = temp;
        recursivo(arreglo+1, size-2);
    }
}