#include <stdio.h>

main()
{
	int vet[5],i,pos,impar;
	
	pos=0;
	impar=0;
	
	for(i=0;i<5;i++)
	{
		printf("Digite um valor\n");
		scanf("%d",&vet[i]);
		
		if(vet[i]>0)
		{
			pos++;
		}
		else{
			pos=pos;
		}
		if(vet[i]%2==0){
			impar=impar;
		}
		else{
			impar++;
		}	
	}
		printf("Existem %d valores positivos e %d valores impares\n",pos,impar);

}
