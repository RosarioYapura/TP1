//escribir un programa que calcule el volumen de un cilindro. para ello se debera solicitar al usuario que ingrese el radio y la altura. mostrar el resultado por pantalla
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int radio, altura, volumen ;
	cout<<"ingrese el radio: ";
	cin>>radio;
	cout<<"ingrese la altura: ";
	cin>>altura;
	volumen= 3.14*(radio*radio)*altura;
	cout<<"el volumen de su cilindro es: "<<volumen<<endl;
	
	
}
