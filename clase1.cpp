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

//Read size
int readSize();

//main
int main(){
	int* array =NULL:
	int size = 0;
	int option = 0;
	
	while(option != 5){
	    switch(option = menu()){
                case 1:
		    //crear arreglo
		    //cout<<"Ingrese el tamano del arreglo: "<<endl;
		    //cin>>size;
		    size = readSize();
		    //evitar memory leak
		    if(array == NULL){
		    	array = createArray(size);
		    }else{
		    	clearArray(array);
			array = createArray(array);
		    }
		    break;
		 case 5://salir del progama
		    if(array != NULL)
			    clearArray(array, size);

	            break;
		}
	}
	return 0;
}


//Reads size
int readSize(){
    int retVal = 0;
    while(true){
        cout<<"Ingrese el tamano del arrelgo: "<<endl;
	cin>> retVal;
	if(retVal >= 1)
	    return retVal;
	else 
	    cout<<"Ingrese un valor positivo mayor a 1 "<<endl;
    }//endWhile
}
//muestra menu y valida entrada
int menu(){
	
	do{
	int num =0;
	cout<<"Ingrese un numero para entrar a la opciones: "<<endl;
	cin>>num;                    cin>>size;

	cout<<"1.Crear Arreglo"<<endl;
	cout<<"2.Llenar el Arreglo"<<endl;
	cout<<"3.Imprimir el Arreglo"<<endl;
	cout<<"4.Limpiar el Arreglo"<<endl;
	cout<<"5.Salir"<<endl;
	if(num>=1 && num <=5)
		return num;

	}while(num<1 && num>5);
	cout<<"Ingrese otra vez un numero: " <<endl;
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






