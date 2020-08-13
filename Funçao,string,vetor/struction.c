#include<stdio.h>

//comando de struction
typedef struct
{
	float nota1;
	float nota2;
	float nota3;
	
}Notas;


main()
{
	Notas aluno1;
	float media;
	
	printf("Digite a primeira nota\n");
	scanf("%f",&aluno1.nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&aluno1.nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&aluno1.nota3);
	
	printf("Notas: 1 - %.1f\n Notas: 2 - %.1f\n Notas: 3 - %.1f\n",aluno1.nota1,aluno1.nota2,aluno1.nota3);
	
	media=(aluno1.nota1+aluno1.nota2+aluno1.nota3)/3;
	
	printf("Media: %.1f",media);
}
