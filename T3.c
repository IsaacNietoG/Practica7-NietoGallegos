#include<stdio.h>
int main(){
  int uno,dos,tres;
  printf ("Ingrese 3 números separados por espacios:\n");
  scanf ("%d %d %d", &uno, &dos, &tres);
  uno == dos || uno == tres? printf("Uno o dos valores son iguales. \n") : dos == tres || dos == uno ? printf("Uno o dos valores son iguales. \n") : printf("Valores distintos\n"); //Condicion que evalua las igualdades
  uno > dos && dos>tres ? printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres) : // Comparacion que emula la primera
  uno > dos && tres > dos ? printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos) : // Comparacion que emula la segunda
  uno>dos && uno < tres? printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos): // Comparacion que emula la tercera
  uno < dos && uno < tres ? printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno): // Comparacion que emula la cuarta
  uno > tres && uno < dos ? printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres): //Comparacion que emula la quinta
  printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno); //Si ninguna encaja en este momento, emula el else definitivo
// Código original para definir las comparaciones
    /* if (uno > dos)
  	{
  	   if (dos > tres)
  	    {
  	       printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres); // Si uno es mayor que dos y dos que tres // Primera combinacion de condiciones
  	    }
  	    else
  	    {
  	       if (uno > tres)
  	       {
  	          printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos); // Si uno es mayor que dos y tres mayor que dos // Segunda
           }
  	       else
  	       {
  	          printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos); // Si uno es mayor que dos pero menor que tres // Tercera
  	       }
  	    }
  }
  else
  {
  	if (dos > tres)
  	{
      if (tres > uno)
  	  {
  	     printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno); // Si uno es menor que dos y menor que tres // Cuarta
  	  }
  	  else
  	  {
  	     printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres); // Si uno es mayor que tres pero menor que dos // Quinta
  	  }
   }
   else
   {
  	  printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno); // Si uno es menor que dos y que tres // Definitiva
   }
 } */
  	return 0;
}
//Nieto Gallegos Isaac Julián
