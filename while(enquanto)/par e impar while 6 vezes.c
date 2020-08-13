#include <stdio.h>

main()

{
	int i,n;
	
	while(i<=6)
	{
	printf("Digite um numero:\n");
	scanf("%d,&n");
	if(n%2==0){
	printf("PAR\n");
		}
		else{
			printf("IMPAR\n");
			}
	i=i+1;
	}
}
