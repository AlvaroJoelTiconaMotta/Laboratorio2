#include<iostream>
using namespace std;
int *ordenar(int *,int);
int main(){
    int *array,*ordenado,size;
    cout<<"Ingrese el tamaño del arreglo: ";cin>>size;
    cout<<"Digitando los elementos del arreglo: "<<endl;
    array=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Ingrese el elemento "<<i+1<<" del arreglo: ";cin>>array[i];
    }
    ordenar(array,size);
    cout<<"Mostrando arreglo ordenado: "<<endl;
    for(int j=0;j<size;j++)
    	cout<<array[j]<<" ";
    return 0;
}
int *ordenar(int *arreglo,int tam){
	int i,pos,aux;
	for(i=0;i<tam;i++){
		pos = i; 
		aux = arreglo[i];
		while((pos>0) && (arreglo[pos-1] > aux)){
			arreglo[pos] = arreglo[pos-1];
			pos--;
		}
		arreglo[pos] = aux;
	}
    return arreglo;
}