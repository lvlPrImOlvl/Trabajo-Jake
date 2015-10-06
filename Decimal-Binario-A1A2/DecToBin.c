/*Programa que transforme de decimal a binario
Autor: Soto Jiménez Jonathan*/

#include <stdio.h> 

void convert_to_binario(int); 

int main() 
{ 
   system("clear");
   int num; 
   printf("Introduce el numero que deseas convertir a binario: "); 
   scanf("%d",&num); 
   printf("Binario: ");
   convert_to_binario(num); 
    
   printf("\n"); 
   return 0; 
} 

void convert_to_binario(int num) 
{ 
   int aux;     
   if(num==0) 
      return; 

   aux=num%2; 
   num=num/2; 

   convert_to_binario(num); 
   printf("%d",aux); 
}
