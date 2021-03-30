#include <stdlib.h>
#include <stdio.h>


int main(){
	int rolo, totalm, metros;
	printf ("Digite a quantidade de metros que seram utilizados: ");
	scanf("%d", &totalm);
    if (totalm >= 50){
  	rolo = totalm/ 50;
  	printf("Total de rolos: %d\n", rolo);
    
   	metros = totalm % 50;
   	printf("Total metros avulso: %d\n", metros);
	}
	else{
		printf("O total de metros: %d\n", totalm);		
	}
	system("pause");
	return 0;
}
