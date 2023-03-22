//a partir de una conocida cantidad  de dias que el usuario ingresa a travez del teclado, escriba un programa para convertir los dias en horas, en minutos y en segundos.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int dias, h, m, s;
	cout<<"INGRESE LA CANTIDAD DE DIAS QUE INGRESO POR TECLADO: ";
	cin>>dias;
	h=24*dias; 
	m= 1440*dias;
	s= 86400*dias; 
	cout<<"La cantidad de dias son: "<<dias<<endl;
	cout<<"minutos: "<<m<<endl;
	cout<<"horas: "<<h<<endl;
	cout<<"segundos: "<<s<<endl; }
