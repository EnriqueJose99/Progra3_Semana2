#include <iostream>
#include <string>

using namespace std;

//prototipos
//muestra un menu lee y valida la entrada.

int menu(int);

//reserva memoria dinamica para un arreglo de enteros, recibe de parametro
//el size del arreglo
int* createArray(int);

//clear array
void clearArray(int*);


//imprime el contenido del arreglo
void printArray(int*,int);

//main
int main(){


	return 0;
}
//muestra menu y valida entrada
int menu(int num){
	
	do{
	int num =0;
	cout<<"Ingrese un numero para entrar a la opciones: "<<endl;
	cin>>num;
	cout<<"1.Crear Arreglo"<<endl;
	cout<<"2.Llenar el Arreglo"<<endl;
	cout<<"3.Imprimir el Arreglo"<<endl;
	cout<<"4.Limpiar el Arreglo"<<endl;
	cout<<"5.Salir"<<endl;
	if(num == 1){
		cout<<"crear el arreglo"<<endl;

	}
	if(num == 2){
		cout<<"llenar el arreglo"<<endl;

	}
	if(num == 3){
		cout<<"Imprimir el arreglo"<<endl;
	}
	if(num ==4){
	
		cout<<"Limpiar el arreglo"<<endl;
	}
	if(num == 5){
		cout<<"Salir"<<endl;
	
	}

	}while(num>=1 && num<=5);
}

//reservar memoria dinamica para un arreglo
int* createArray(int size){
	return new int[size];
}

//clear array, remove space from memory
void clearArray(int* array){
	delete[] array;
	array = NULL;
	//buena practica de programacion en c++ es asignar NULL
}

//print elements of the array
void printArray(int*array, int size){
	for(int i= 0;i < size;i++){
		cout<<""<<array[i]<<endl;
	
	}
	cout<<endl;

}






