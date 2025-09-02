#include <stdio.h>
int main ()
{
	int ascii;
	printf("enter an ascii value:");
	scanf("%d",&ascii);
	printf("character for ASCII %D = %C", ascii,ascii);
	return 0;	
}