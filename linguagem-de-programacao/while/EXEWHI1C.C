/* Imprimindo os n�meros de 1 a 10, cada n�mero em uma linha

   Nesta vers�o utiliza-se uma estrutura de repeti��o, o while.
   O c�digo tamb�m fica pequeno, mais o melhor, ele fica flex�vel e
   f�cil de dar manuten��o.

   Vamos supor que queiramos imprimir 100 n�meros, basta mudar um n�mero
   no c�digo fonte, e recompilar.
*/

#include<conio.h>
#include<stdio.h>

int main(){
	int numero = 0;
	while(numero < 10){
		printf("\n%d",numero++); // numero += 1; ou numero = numero + 1;
	}
	printf("\n\nDigite qualquer tecla para encerrrar...");
    getch();
    return 0;
}
