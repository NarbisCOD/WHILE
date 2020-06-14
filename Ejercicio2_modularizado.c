#include<stdio.h>



void informar_resultado (int contador_final, int valor_maximo_requerido){
    if (contador_final!=valor_maximo_requerido){
        printf("Se obtuvo el valor requerido",contador_final);
    }else { 
        printf("Sobrepaso el valor requerido",contador_final);
    }
}

/*
 *Pre:Todos los valores a evaluar deben ser mayores o iguales a cero
*/
    
int realizar_suma(int contador_obtenido, int valor_maximo_obtenido, int valor_suma_obtenida){
	    printf("Ingrese los valores de inicio y maximo para realizar la suma, segun se Indica:\n\n");
        printf("Sumar de a: ");
        scanf("%i", &valor_suma_obtenida);
        printf("hasta: ");
        scanf("%i", &valor_maximo_obtenido);
        while(contador_obtenido < valor_maximo_obtenido){
        contador_obtenido = contador_obtenido + valor_suma_obtenida;
	}
       printf("El Resultado de la suma es: %i\n", contador_obtenido); 
       return contador_obtenido, valor_maximo_obtenido;
}


int main(){

    int valor_suma =0; 
    int valor_maximo =0;
    int contador=0;
    realizar_suma(contador, valor_maximo, valor_suma);
    informar_resultado(contador, valor_maximo);
	return 0;
}

