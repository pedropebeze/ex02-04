#include <stdio.h>

int main(){
	
	int ent = 0;
	int total = 0;
	while(1){
		puts("Digite o numero");
		scanf("%d",&ent);
	
		if(ent%2==0){
			total+=ent;
		}else{
			break;
		}
	}
	printf("total: %d",total);
	
	return 0;
}
