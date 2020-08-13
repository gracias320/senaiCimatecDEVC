#include<stdio.h>


int somar(int a,int b,int c)
{
	return (a+b+c);
}

int quadrado(int a)
{
	return (a*a);
}

int cubo(int a)
{
	return (a*a*a);
}

parimpar(int a)
{
	if(a%2==0)
	{
		printf("%d - par\n",a);
	}
	else
	{
		printf("%d - impar\n",a);
	}
}

positivonega(int a)
{
	if(a>0)
	{
		printf("%d - Positivo\n",a);
	}
	else
	{
		printf("%d - Negativo\n",a);
	}
}




main()
{

int x,y,z;

printf("Digite o primeiro valor\n");
scanf("%d",&x);
printf("Digite o segundo valor\n");
scanf("%d",&y);
printf("Digite o terceiro valor\n");
scanf("%d",&z);

printf("A soma dos valores: %d\n",somar(x,y,z));
printf("Quadrado do primeiro valor: %d\n",quadrado(x));
printf("Quadrado do segundo valor: %d\n",quadrado(y));
printf("Quadrado do terceiro valor: %d\n",quadrado(z));
printf("cubo do primeiro valor: %d\n",cubo(x));
printf("cubo do segundo valor: %d\n",cubo(y));
printf("cubo do terceiro valor: %d\n",cubo(z));
parimpar(x);
parimpar(y);
parimpar(z);
positivonega(x);
positivonega(y);
positivonega(z);



}
