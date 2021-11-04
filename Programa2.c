#include<stdio.h>
int main(){
	int a,b;
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
}
