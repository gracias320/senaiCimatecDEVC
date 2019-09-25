#include <stdio.h>

main()

{
	int x,y;
	
	printf("digite o primeiro valor\n");
	scanf("%d",&x);
	printf("digite o outro valor\n");
	scanf("%d",&y);
	if(x<y){
	printf("o menor valor eh:%d\n",x);
	}
	else{
	if(y<x){
	printf("o menor valor eh:%d\n",y);
	}
	else{
	printf("ambos os valores sao iguais");
	}
	}
	
	
	
	
	
	
}
