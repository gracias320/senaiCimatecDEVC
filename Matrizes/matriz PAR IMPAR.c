#include <stdio.h>

main()
{
	
int x[2][2]; int li,co,par,impar;
	
	par=0;
	impar=0;
	for(li=0;li<2;li++)
	{
		for(co=0;co<2;co++)
		{
		printf("Digite os valores da Matriz:\n");
		scanf("%d",&x[li][co]);
		}
	}
	for(li=0;li<2;li++)
	{
		for(co=0;co<2;co++)
		{
			printf("\n");
			printf("%d - %d : %d",li,co,x[li][co]);
			if(x[li][co]%2==0)
			{
				par=(par+1);
			}
			else{
				impar=(impar+1);
			}
		}
	}
	printf("\nPares:%d\n",par);
	printf("\nImpares:%d\n",impar);
		
}
