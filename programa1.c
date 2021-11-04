#include<stdio.h>
int main(){
	int a,b;
	a=3;
	b=2;
	if(a>b) //Evalúa si a es mayor que b.
	{
		printf("\a (%d) es mayor a b (%d). \n ",a,b); //Si la condición es real, se verá este mensaje, de lo contrario no.
	}
	printf("\t \vEl programa sigue su flujo. \n");
	return 0;
}
