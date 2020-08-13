#include <stdio.h>

main(void)
{
	int x[2][2]; int li,co;
	
	for(li=0;li<2;li++)
	{
		for(co=0;co<2;co++)
		{
		printf("Entre com os valores da matriz x\n");
		scanf("%d",&x[li][co]);
		}	
	}
	for(li=0;li<2;li++)
	{
		for(co=0;co<2;co++)
		{
		printf("\n%d-%d:%d\n",li,co,x[li][co]);
		}
	}
}
