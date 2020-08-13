#include <stdio.h>

main()

{
	int i,s;
	float ATM,ATF,maior;
	
	i=1;
	ATM=0;
	ATF=0;
	maior=0;
	
	while(i<=4)
	{
		printf("DIGITE O NUMERO DO SEXO DA PESSOA:\n1-MASCULINO\n2-FEMININO\n\n");
		scanf("%d",&s);
		switch(s)
		{
		case 1: 
		printf("Digite a altura do Homem\n\n");
		scanf("%f",ATM);
		maior=ATM;
		if (ATM>=maior){
		maior=ATM;
		}
		else{
		maior=maior;
		}
		return;
		
		
		case 2:
		printf("Digite a altura da Mulher\n\n");
		scanf("%f",ATF);
		ATF=ATF;
		if(ATF>maior){
		maior=ATF;
	}
		else{
		maior=maior;
		}
		
		default:
		printf("NUMERO INVALIDO\n\n");break;
		
		}
	i=i+1;	
	} 
	printf("%f\n%f\n%f\n",ATM,ATF,maior);
}
