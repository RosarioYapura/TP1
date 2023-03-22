//solicitar al usuario que ingrese la base y altura de un rectangulo, y calcular y mostrar por pantalla el area y el perimetro del mismo 
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int base, altura, perim, area;
	cout<<"ingrese la base: ";
	cin>>base;
	cout<<"Ingrese la altura: ";
	cin>>altura;
	area=base*altura;
	perim=(2*altura)+(2*base);
	cout<<"El area del rectangulo es: "<<area<<endl;
	cout<<"El perimetro del rectangulo es: "<<perim<<endl;
	
	
	
}
