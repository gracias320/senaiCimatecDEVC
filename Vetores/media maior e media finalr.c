#include <stdio.h>

/*Uma escola com 200 alunos est� realizando um competi��o que premiar� o aluno que obtiver a maior m�dia final em todas as disciplinas. 
Elabore um algoritmo que guarde a m�dia final de todos os alunos e mostre a m�dia do aluno campe�o. */

main(){
	int	vet[6],i,mfinal,maior;
	
	mfinal=0;
	maior=0;
	
	for(i=0;i<6;i++)
	{
		
	printf("Digite a media do aluno\n");
	scanf("%d",&vet[i]);
	
	if(vet[i]>7){
		mfinal=vet[i];
		
	}
	else{
		mfinal=mfinal;
	}
	
	if(vet[i]>maior){
		maior=vet[i];
	}
	else{
		maior=maior;
	}
		printf("\nMEDIA DO ALUNO CAMPEAO:\n%d\n",maior);
	
	}
	
}
