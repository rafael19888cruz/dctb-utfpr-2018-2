/* Exemplo 1B de uso da estrutura de repeti��o do..while

   Nesta solu��o foi utilizada a fun��o fflush para limpar a mem�ria do teclado
   antes de ler novamente.

   Caso tente digitar letra para o scanf lendo n�mero (inteiro ou real), o scanf
   n�o le nada. N�o altera o valor da vari�vel, e deixa o que o usu�rio digitou
   na mem�ria do teclado. Com o scanf dentro de um la�o, vai se tentar ler novamente,
   mas como j� tem informa��o na mem�ria do teclado, n�o chega-se nem a perguntar
   a informa��o ao usu�rio, e o programa fica em la�o infinito.

   Por isto, quando se tem uma leitura dentro de um la�o de repeti��o, o ideal
   e limpar a mem�ria do teclado antes da leitura, com a fun��o fflush.

   A fun��o fflush, pertence a biblioteca stdio.h. E limpa o valor da mem�ria
   especificada. Chamando esta fun��o passando o par�metro strdin (entrada padr�o),
   a mem�ria do teclado � limpa.
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int idade = 0;
	system("cls");

	do{
	  printf("\nEntre com a idade em anos (1 a 130): ");
	  fflush(stdin); // Evite que j� tenha algo na mem�ria do teclado
	  scanf("%d",&idade);
	  if (idade < 1 || idade > 130){
		 printf("\a\nA idade [%d] eh invalida!\n",idade);
	  }
	}while(idade < 1 || idade > 130);

    printf("\nVoce ja viveu aproximadamente %d dias!.",idade*365);
	printf("\n\nDigite qualquer tecla para encerrar..");
	getch();
	return 0;
}
