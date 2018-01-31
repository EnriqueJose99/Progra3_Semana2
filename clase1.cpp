#include <iostream>
#include <string>

using namespace std;

//prototipos
//muestra un menu lee y valida la entrada.

int menu();

//reserva memoria dinamica para un arreglo de enteros, recibe de parametro
//el size del arreglo
int* createArray(int);

//clear array
void clearArray(int*);


//imprime el contenido del arreglo
void printArray(int*,int);

//Read size
int readSize();

//llenar arreglo
void fillArray(int*, int); 


//main
int main(){
	int* array =NULL;
	int size = 0;
	int option = 0;
	
	while(option != 5){
	    switch(option = menu()){
                case 1:
		    size = readSize();
		    //evitar memory leak
		  if(array == NULL){
		    	array = createArray(size);
		    }else{
		    	clearArray(array);
			array = createArray(size);
		    }
		    break;
		case 2:
		    fillArray(array, size);
		    break;
		case 3:
		    printArray(array, size);
		    break;
		case 4:
		    clearArray(array);
 		    array = NULL;
		    size = 0;
		    break;
		case 5://salir del progama
		    if(array != NULL)
			    clearArray(array);

	            break;

		}
	}
	return 0;
}

//llenar arreglo
void fillArray(int* array, int size){
	int temp;
	for(int i = 0; i <= size; i++){
		cout<<"Posicion: " <<i<<"Ingrese valor: "<<endl;
		cin>> array[i];
	}

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
	int num =0;
	while(num == 0){
		cout<<"1.Crear Arreglo"<<endl;
		cout<<"2.Llenar el Arreglo"<<endl;
		cout<<"3.Imprimir el Arreglo"<<endl;
		cout<<"4.Limpiar el Arreglo"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"Ingrese un numero para entrar a la opciones: "<<endl;
		cin>>num;
		if(num >= 1 && num <=5){
			return num;
		}else{
			cout<<"$$ INGRESE DE NUEVO EL NUMERO $$"<<endl;
		}
	}
}

//reservar memoria dinamica para un arreglo
int* createArray(int size){
	int* retValue = new int[size];
	return retValue;
}

//clear array, remove space from memory
void clearArray(int* array){
	delete[] array;
	array = NULL;
	//buena practica de programacion en c++ es asignar NULL
}

//print elements of the array
void printArray(int*array, int size){
	for(int i= 0;i<=size;i++){
		cout<<" "<<array[i]<<endl;
	
	}
	cout<<endl;
}







