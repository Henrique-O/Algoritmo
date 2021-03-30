#include <stdio.h>
#include <stdlib.h>
int main() {
    float raio=0,pi=0;
    printf ("Digite um numero:\n");
    scanf("%f",&raio);
    pi=3.14159;
    raio=pi*(raio*raio);
    printf("A=%.4f\n\n",raio);
    system("pause");
    return 0;
}
