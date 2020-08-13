#include<stdio.h>

//comando de struction
typedef struct
{
	float nota1;
	float nota2;
	float nota3;
	
}Notas;

inserir (x[i],int y)
{
	for(i=0;i<y;i++)
	{
	printf("Digite a primeira nota\n");
	scanf("%f",&Notas[].nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&Notas[].nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&Notas[].nota3);
	}
	
}


main()
{
	Notas aluno1[2];
	float media;
	
	inserir(aluno1);
	
	for(i=0;i<2;i++)
	{
	printf("Notas: %.1f\n%.1f\n%.1f\n",aluno1[i].nota1[i],aluno1[i].nota2,aluno1[i].nota3);
	}
		
	media=(aluno1.nota1+aluno1.nota2+aluno1.nota3)/3;
	
	printf("Media: %.1f",media);
}
