#include <stdio.h>
int main(){
int a,b;
int num;
int uno, dos, tres;
char op = '\0';
printf("\tMenú\n\n");
printf("Elegir la opción deseada\n");
printf("a) Determinar si a es menor o mayor que b\n");
printf("b) Detectar si un número es par o impar\n");
printf("c) Ordenar tres números en orden ascendente.\n");
scanf("%c",&op);
switch(op)
{
default:
printf("Opción no válida.\n");
break;
case 'a':
a=3;
	b=2;
	if(a>b)
	{
		printf("\a (%d) es mayor a b (%d). \n ",a,b);
	}
  else
  {
    printf("\a (%d) es menor a b (%d). \n ",a,b);
  }
	printf("\t \vEl programa sigue su flujo. \n");
	return 0;
 break;
 case 'b':

 	printf("Ingrese un número:\n");
 	scanf("%d",&num);
 	if ( num%2 == 0 )
 	printf("El número %d es par.\n",num);
 else
	 printf("El número %d es impar.\n",num);
 return 0;
 break;
 case 'c':
 printf ("Ingrese 3 números separados por espacios:\n");
 scanf ("%d %d %d", &uno, &dos, &tres);
 	if (uno > dos)
 	{
 	if (dos > tres)
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
 	}
 	else
 	{
 	if (uno > tres)
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
 }
 	else
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
 	}
 	}
 	}
 	else
 	{
 	if (dos > tres)
 	{
 if (tres > uno)
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
 	}
 	else
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
 	}
 	}
 	else
 	{
 	printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
 	}
 	}
 	return 0;
		break;
 }
 return 0;
}
