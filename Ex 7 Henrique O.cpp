#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char array[4][50];
float array2[3];

printf("Digite o seu primeiro nome: ");
scanf("%s", array[1]);

printf("Digite o seu sobrenome: ");
scanf("%s", array[2]);

printf("Digite o seu genero: ");
scanf("%s", array[3]);

printf("Digite o seu numero de matricula: ");
scanf("%s", array[4]);

printf("Digite o valor recebido por hora: ");
scanf("%f", &array2[1]);

printf("Digite as horas trabalhadas: ");
scanf("%f", &array2[2]);

array2[3] = array2[1] * array2[2];

printf("\n**todos os dados**\n");

printf("\nNome do usuario: %s %s", array[1], array[2]);

printf("\nGenero do usuario: %s", array[3]);

printf("\nNumero da matricula: %s", array[4]);

printf("\nO valor da hora de trabalho: %.2f", array2[1]);

printf("\nHoras trabalhadas: %.2f", array2[2]);

printf("\nO salario total do usuario: %.2f\n",array2[3]);

system("pause");

return 0;
}
