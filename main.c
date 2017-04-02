#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    char seguir='s';
    float A = 0;
    float B = 0;
    int opcion=0;
    float r;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", A);
        printf("2- Ingresar 2do operando (B=%.2f)\n", B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingrese numero A: ");
                scanf("%f", &A);
                system("cls");
                break;
            case 2:
                system("cls");
                printf("Ingrese numero B: ");
                scanf("%f", &B);
                system("cls");
                break;
            case 3:
                r = sumar(A, B);
                printf("El resultado de suma es: %.2f \n", r);
                system("Pause");
                system("cls");
                break;
            case 4:
                r = restar(A, B);
                printf("El resultado de resta es: %.2f \n", r);
                system("Pause");
                system("cls");
                break;
            case 5:
                if(B==0){
                    printf("Error, no se puede dividir por 0 \n");
                    system("Pause");
                    system("cls");
                }else{
                    r = dividir(A, B);
                    printf("El resultado de division es: %.2f \n", r);
                    system("Pause");
                    system("cls");
                }
                break;
            case 6:
                r = multiplicar(A, B);
                printf("El resultado de multiplicacion es: %.2f \n", r);
                system("Pause");
                system("cls");
                break;
            case 7:
                if(A >= 0){
                    r = factorial(A);
                    printf("El resultado de factorial de A es: %2.f \n", r);
                    system("Pause");
                    system("cls");
                }else{
                    printf("Error. Se ingreso un numero menor a cero. \n");
                    system("Pause");
                    system("cls");
                }
                break;
            case 8:
                r = sumar(A, B);
                printf("El resultado de suma es: %.2f \n", r);

                r = restar(A, B);
                printf("El resultado de resta es: %.2f \n", r);

                if(B==0){
                printf("Error, no se puede dividir por 0 \n");
                }else{
                    r = dividir(A, B);
                    printf("El resultado de division es: %.2f \n", r);

                }

                r = multiplicar(A, B);
                printf("El resultado de multiplicacion es: %.2f \n", r);

                if(A >= 0 ){
                    r = factorial(A);
                    printf("El resultado de factorial de A es: %2.f \n", r);
                }else{
                    printf("Error. Se ingreso un numero menor a cero. \n");
                }
                system("Pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    //return 0;
    }
}

