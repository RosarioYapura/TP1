//un colegio desea saber que porcentaje de ninos y que porcentaje de ninas hay en el curso actual.disenar un programa para este proposito. recuerda que para calcular el porcentaje puedes
//hacer una regla de tres simples. el programa debe solicitar al usuario que ingrese la cantidad total de ninos y la cantidaad total de ninas
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){  
     float ninos, ninas, total, porc1, porc2, mayor;
     cout<<"Ingrese la cantidad de ninos: ";
     cin>>ninos;
     cout<<"ingrese la cantidad de ninas: "; 
     cin>>ninas;
     total= ninos+ninas;
     porc1=(ninos*100)/total;
     porc2=(ninas*100)/total;
     cout<<"el porcentaje de ninos es de: "<<porc1<<endl;
     cout<<"el porcentaje de ninas es de: "<<porc2<<endl;
    if (porc1>=porc2){
    	cout<<"El porcetaje de ninos es mayor ";
	}
	else {
		cout<<"el porcentaje de ninas es mayor ";
	}

}


