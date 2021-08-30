/***************************
*                          *
*       BY                 *
*           TREXNEGRO      *
*                          *
****************************/


#include<stdio.h>
#include <ctype.h>
#define MAX_LONG_CADENA 51

void primeraLetra(char[]);
 
//FUNCION DE CUERPO  
int main(){
    char frase[MAX_LONG_CADENA];
    printf("Conversion de primera letra");
    printf("\nFrase original: ");
 
    fgets(frase,MAX_LONG_CADENA,stdin);
    primeraLetra(frase);
    printf("Frase convertida: %s",frase);
    
    return 0;
}

//DESCRIPCION DE FUNCIONES

void primeraLetra(char frase[MAX_LONG_CADENA]){
    if(frase[0]){
       frase[0] = toupper(frase[0]); 
    }
    for(int i=1;i<=MAX_LONG_CADENA;i++){
        if(frase[i] == ' '){
            frase[i+1] = toupper(frase[i+1]);
        }
    }
}
 
