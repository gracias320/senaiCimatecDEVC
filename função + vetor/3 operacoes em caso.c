#include <stdio.h>

int s(int x,int y,int z)
{
	return(x+y+z);
}

int subs(int x,int y,int z)
{
	return(x-y-z);
}

int m(int x,int y,int z)
{
	return(x*y*z);
}

int d(int x,int y,int z)
{
	return(x/y/z);
}


main()

{
	int a,b,c,operacao;
	
	printf("Digite o primeiro Valor\n");
	scanf("%d",&a);
	
	printf("Digite o segundo Valor\n");
	scanf("%d",&b);
	
	printf("Digite o terceiro Valor\n");
	scanf("%d",&c);
	
	printf("Digite 1 - Soma,2 -Subtrair,3 -Multiplicar,4 -Dividir\n\n");
	scanf("%d",&operacao);
	
	switch(operacao)
	{
	case 1: printf("Resultado: %d\n",s(a,b,c));break;
	
	case 2:	printf("Resultado: %d\n",subs(a,b,c));break;
			
	case 3: printf("Resultado: %d\n",m(a,b,c));break;
		
	case 4:	printf("Resultado: %d\n",d(a,b,c));break;
	
	default: printf("OPERACAO INVALIDA\n");break;
	}
	
}
