#include <stdio.h>

int main()
{

int opcion;

float num1,num2,resultado;


printf("====================\n");
printf(" CALCULADORA GIT\n");
printf("====================\n");


printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");


printf("Seleccione opcion: ");
scanf("%d",&opcion);


printf("Ingrese primer numero: ");
scanf("%f",&num1);


printf("Ingrese segundo numero: ");
scanf("%f",&num2);

switch(opcion)
{


case 1:

resultado=num1+num2;

printf("Resultado: %.2f",resultado);

break;



case 2:

resultado=num1-num2;

printf("Resultado: %.2f",resultado);

break;



case 3:

resultado=num1*num2;

printf("Resultado: %.2f",resultado);

break;



case 4:

printf("\nGracias por usar la calculadora\n");

if(num2!=0)
{

resultado=num1/num2;

printf("Resultado: %.2f",resultado);

}

else
{

printf("Error: division entre cero");

}


break;



default:

printf("Opcion incorrecta");


}

return 0;

printf("=========================\n");
printf("   CALCULADORA DIGITAL\n");
printf("=========================\n");


printf("Seleccione una operacion:\n");

printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");
}

