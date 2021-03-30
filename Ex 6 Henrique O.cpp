#include<stdio.h>
int main()
{
	
	int n1, n2;
	
	printf ("Digite a nota A: ");	
	scanf ("%d", &n1);
	
	printf("Digite a nota B:");
	scanf ("%d", &n2);
	
	printf ("Media: %f", (float) (n1 * 3.5 + n2 * 7.5));
	return 0;
	
}
