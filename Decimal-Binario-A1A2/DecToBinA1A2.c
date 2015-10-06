/*Programa que transforme de decimal a binario
Autor: Soto Jiménez Jonathan*/

#include <stdio.h> 
#include <stdlib.h> 
void convert_to_binario(int); 
void convert_to_binarioA1(int);

    int num, i=0, j, k=0,flag=0;
    int arr[15];
    int arr2[15];

int main() 
{ 
    system("clear");
    printf("Introduce el numero que deseas convertir a binario: "); 
    scanf("%d",&num); 
    printf("Binario: en A1:  ");
    if (num < 0)
    {
	printf("1 ");
	num*=-1;
	convert_to_binarioA1(num);
	}else{
	convert_to_binario(num);
	}
    
    for (j = 0 ; j < i ; j++){
    	if (arr[j] == 1 && flag == 0){
    		arr2[k] = 1;
    		k++;
    		flag = 1;
    	}
    	else if (flag == 1){
    		if (arr[j] == 1){
	    		arr2[k] = 0;
	    		k++;
	    		}else{
		    		arr2[k] = 1;
		    		k++;
    		}
    		}
    }

    printf("\nComplemento A2: ");
    for (j = i-1 ; j >= 0 ; j--)
    	printf("%i ",arr2[j]);

    return 0; 
} 

void convert_to_binarioA1(int num) 
{ 

    int aux;     
    if(num==0) 
    	return; 
    aux=num%2;
    if (aux == 0)
    	aux = 1;
    else if (aux == 1)
    	aux = 0;

    arr[i] = aux;
    i++;
    
    num=num/2;
    convert_to_binario(num); 
    printf("%d ", aux);
}

void convert_to_binario(int num) 
{ 

   int aux;     
   if(num==0) 
      return; 

	aux=num%2;
   	arr[i] = aux;
    i++;
    num=num/2; 

   convert_to_binario(num); 
   printf("%d ",aux);
}


/////
/////