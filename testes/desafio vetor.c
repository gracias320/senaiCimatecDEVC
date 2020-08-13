#include<stdio.h>


main()
{

int a[4],b[4],i,x=3;


for(i=0;i<4;i++)
{
	printf("Digite um valor\n");
	scanf("%d",&a[i]);
}

for(i=0;i<4;i++)
{
	b[i]=a[x];
	x--;
	
}

printf("Vetor A\n");
for(i=0;i<4;i++)
{
	printf("%d\t",a[i]);
}

printf("\nVetor B\n");
for(i=0;i<4;i++)
{
	printf("%d\t",b[i]);
}


}
