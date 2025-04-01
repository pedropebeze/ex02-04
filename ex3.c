#include <stdio.h>

int main(){
	
	int n=0;
	while(n<=20){
		n++;
		if(n%3==0){
			continue;
		}else{
		printf("%d ",n);	
		}
		
	}
	return 0;
}
