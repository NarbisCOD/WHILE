#include<stdio.h>

//const int MAX_BOLSA_PROD = 0;
#define COND_OPTIMO  1
#define COND_NO_OPTIMO  2
#define COND_MALA_EMPAQUE  3

const int DEF_OPCION = COND_OPTIMO;

int main(){
 
    //Permite verificar inicia en COND_OPTIMO, sin pedir al usuario la opción
    int cond_prod = DEF_OPCION;

    while(cond_prod == COND_OPTIMO){
        printf("Ingrese el estado de la produccion:\n[1]Optimo  - [2]NO optimo -[3]Empaque en malas condiciones\n");
        scanf("%i", &cond_prod);

        if (cond_prod == COND_OPTIMO){
        printf("\nQue siga la producccion...\n\n");    
        }
    }
   switch(cond_prod){
            case COND_NO_OPTIMO:
                printf("\nDetengan la producccion\n");
                break;
            default:
                printf("\nDetengan la producccion, revisen la bolsa\n");
 }
        
return 0;
}