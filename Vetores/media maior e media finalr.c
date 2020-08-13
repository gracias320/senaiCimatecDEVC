#include <stdio.h>

/*Uma escola com 200 alunos está realizando um competição que premiará o aluno que obtiver a maior média final em todas as disciplinas. 
Elabore um algoritmo que guarde a média final de todos os alunos e mostre a média do aluno campeão. */

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
