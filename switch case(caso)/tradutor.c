#include <stdio.h>


main()


{
	int animal;
	
	printf("Digite um numero para traduzir: 1-Cachorro ,2-Gato ,3-Passaro ,4- Mesa ,5-Janela\n");
	scanf("%d",&animal);
	
	switch(animal)
	{
	case 1: 
	printf("DOG");break;	
	
	case 2:
	printf("CAT");break;
	
	case 3:
	printf("Bird");break;
	
	case 4:
	printf("Table");break;
	
	case 5:
	printf("Window");break;	
	
	default: 
	printf("NUMERO INVALIDO");break;
	}	
}
