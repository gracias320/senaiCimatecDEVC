#include <stdio.h>

 linha (int x,char y)
{
	int i;
	for(i=0;i<x;i++){
		printf("%c",y);
	}
	
}

main()
{
	linha(3,'*');
	printf("\n");
	linha(5,'*');
	printf("\n");
	linha(7,'*');
	printf("\n");
	linha(10,'*');
	
}
