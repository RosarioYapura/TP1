//crear un programa que solicite al usuario que ingrese el precio de un producto al inicio del ano, y el precio del mismo producto al finalizar el ano. el programa debe calcular cual fue 
//el porcentaje de aumento que tuvo el producto en el ano.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	float infla, total, pfinal, pinicial;
	cout<<"Ingrese el precio inicial de el producto: ";
	cin>>pinicial;
	cout<<"Ingrese el precio final del producto: ";
	cin>>pfinal;
	infla=(pfinal-pinicial)/pinicial;
	total=infla*100;
	cout<<"la inflacion de dicho producto es de: "<<total<<endl;
	
	
}
