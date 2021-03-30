#include<stdio.h>
#include<stdlib.h>

int main (){
	int num1, num2, quociente, resto;
	
	printf("Digite o dividendo: ");
	scanf("%d", &num1);
	printf("Digite o divisor: ");
	scanf("%d", &num2);
	
	quociente=num1/num2;
	resto=num1%num2;
	
	printf("Dividendo: %d\n", num1);
	printf("Divisor: %d\n", num2);
	printf("Quociente: %d\n", quociente);
	printf("Resto: %d\n", resto);
	system("pause");
}

