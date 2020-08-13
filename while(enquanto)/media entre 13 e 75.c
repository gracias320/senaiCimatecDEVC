#include <stdio.h>

main()


{
	
	int i,a,media;
	float x,y;


		while(i>=13 <=73)
	{	
	printf("Digite a numeracao do aluno\n");
	scanf("%d",&a);
		if(a>73){
	printf("SEM ALUNO NESTA NUMERACAO\n\n");
	}
		else{
		if(a<13){
		printf("SEM ALUNO NESTA NUMERACAO\n\n");
		}	
		else{	
	printf("Digite a primeira nota\n\n");
	scanf("%f",&x);
		printf("Digite a segunda nota\n\n");
		scanf("%f",&y);
			media=(x+y)/2;
			printf("ESTE ALUNO POSSUI A MEDIA DE:%d\n\n",media);
	i=i+1;
	}
	}
	}
}
