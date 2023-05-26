#include<stdio.h>

void fct1()
{       
	int var=20;
	int *ptr=&var;
	
	*ptr=30;
	printf("la nouvelle valeur est : %p\n ",ptr);	
}       

int main()
{
	
	fct1();

return (0);
}



