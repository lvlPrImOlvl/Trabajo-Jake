/*24.-Programa que reciba una palabra y te diga si es palindromo o no.
Autor: Soto Jiménez Jonathan*/

#include <stdio.h>
int main()
{
system("clear");
char  palabra[255], token [255];
int i, cont=0;
    printf("Dame la palabra: ");
    gets(palabra);

    for (i = 0 ; i <= strlen(palabra) ; i++) //Le pasa los datos a token
        {
        token[i]=palabra[i];
        }

    for (i = strlen(palabra) -1 ; i >= 0  ; i--) //invierte la palabra
        {
        token[strlen(palabra)- i -1]=palabra[i];
        }

    for (i = 0 ; i <= strlen(palabra) ; i++) // cuenta coincidencias
        {
            if (palabra[i] == token[i])
                cont++;
        }

    if ((cont-1) == strlen(palabra)) // le quita -1 por que cont toma en cuenta el fin de cadena
        printf("\nLas palabras %s y %s son palindromos\n",palabra, token);
    else printf("\nLo siento, las palabras %s y %s no son palindromos\n",palabra, token);
}
