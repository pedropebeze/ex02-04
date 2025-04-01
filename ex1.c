#include <stdio.h>

int main(){
	
	int n = 7;
	int ent,cont = 3;
	puts("ADVINHE O NUMERO!\n");
	do{
		printf("Tentativas restantes: %d\n",cont);
		cont--;
		printf("Palpite: ");
		scanf("%d",&ent);
		if(ent==7){
			puts("Parabens voce acertou!!");
			cont=0;
		}else{
			if(cont==0){
				puts("FIM DE JOGO!");
			}else{
				printf("Errado. ");
			}
		}
	}while(cont>0);
	
	return 0;
}
