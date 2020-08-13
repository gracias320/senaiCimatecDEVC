#include <stdio.h>

main(void)

{
	int x[4][4]; int li,co,soma1=0,soma2=0;
	
	for(li=0;li<4;li++)
	{
		for(co=0;co<4;co++)
		{
		printf("Digite os valores da Matriz:\n");
		scanf("%d",&x[li][co]);
		}
	}
	for(li=0;li<4;li++)
	{
		for(co=0;co<4;co++)
		{
			printf("%d - %d : %d",li,co,x[li][co]);
			printf("\n");
			if(li==co){
				soma1=soma1+x[li][co];
			}
				else{
				soma1=soma1;	
			}
			if(li+co==3){
				soma2=soma2+x[li][co];
			}
			else{
				soma2=soma2;
			}
		}
	}
	if(soma1==soma2)
	{
		printf("iguais\n");
	}
	else{
		printf("Diferentes\n");
	}
	
}
