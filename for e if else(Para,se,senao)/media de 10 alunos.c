#include <stdio.h>


main()


{
	int i,r;
	float x,y;
	
	
	for(i=1;i<=10;i++)
	{

		printf("Digite a primeira nota\n");
		scanf("%f",&x);
		printf("Digite a segunda nota\n");
		scanf("%f",&y);
		r=(x+y)/2;
		printf("%d eh a media desse aluno.\n\n",r);
	}
	
}
