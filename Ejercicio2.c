#include<stdio.h>

/*
 *Pre:"Todos los valores a evaluar deben ser mayores o iguales a cero
*/
       
int main(){

    int valor_suma =0; 
    int valor_maximo =0;
    int contador=0;

    printf("Ingrese los valores de inicio y maximo para realizar la suma, segun se Indica:\n\n");
    printf("Sumar de a: ");
    scanf("%i", &valor_suma);
    printf("hasta: ");
    scanf("%i", &valor_maximo);

	while(contador < valor_maximo){
        contador = contador + valor_suma;
    }
       if (contador==valor_maximo){
            printf("El Resultado de la suma es %i, se obtuvo el valor requerido",contador);
        }else{
             printf("El Resultado de la suma es %i, sobrepaso el valor requerido",contador);
        }
	return 0;
}

