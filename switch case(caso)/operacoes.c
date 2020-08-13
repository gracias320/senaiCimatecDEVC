#include <stdio.h>

main()

{
	int x,y,op,OP;
	
	printf("Digite o primeiro valor\n");
	scanf("%d",&x);
	printf("Digite o segundo valor\n");
	scanf("%d",&y);
	printf("Escolha o numero para a operacao:\n1-SOMAR\n2-SUBTRAIR\n3-MULTIPLICAR\n4-Dividir\n\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: 
		OP=(x+y);
		printf("%d\n",OP);break;
		
		case 2: 
		OP=(x-y);
		printf("%d\n",OP);break;
		
		case 3:
		OP=(x*y);	
		printf("%d\n",OP);break;
		
		case 4:
		OP=(x%y);	
		printf("%d\n",OP);break;
	}

}
