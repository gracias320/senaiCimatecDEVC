#include<stdio.h>
#include<string.h>

int i;

typedef struct
{
	char nome[20];
	int	idade;
	float altura;
	char sexo[20];
	
}Dados;

preenche (Dados vet[],int y)
{
	for(i=0;i<y;i++)
	{
		printf("Digite seu nome\n");
		scanf("%s",&vet[i].nome);
		printf("Digite sua idade\n");
		scanf("%d",&vet[i].idade);
		printf("Digte sua altura\n");
		scanf("%f",&vet[i].altura);
		printf("Digite o sexo\n");
		scanf("%s",&vet[i].sexo);
	}
	
}


imprime (Dados vet[],int y)
{
	for(i=0;i<y;i++)
	{
	printf("Seu Nome: %d\n Sua idade: %d\n Sua Altura: %d\n Seu Sexo: %d",vet[i].nome,vet[i].idade,vet[i].altura,vet[i].sexo);	
	}
}

//FUNÇÃO PARA ENCONTRAR NOMES E APLICAR CONDIÇÕES
localiza (Dados vet[],int y,char nome[])
{
	int r;
	
	for(i=0;i<y;i++)
	{	
	//COMANDO COM STRING
		r=strcmp(vet[i].nome,nome);
		
		if(r==0)
		{
			printf("nome encontrado\n");
		}
		else
		{
			printf("nome nao encontrado\n");	
		}
	}
		
}


main()
{
	Dados x[2];
	
	preenche(x,2);
	imprime(x,2);
	localiza(x,2,"ovo");
	
	
}
