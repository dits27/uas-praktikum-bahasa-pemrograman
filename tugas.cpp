#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Masukan nilai A :");
	scanf("%i" ,&a);
	printf("\nMasukan nilai B :");
	scanf("%i" ,&b);
	printf("\nMasukan nilai C :");
	scanf("%i" ,&c);
	printf("\n");
	
	if(a>b)
		if(a>c)
		printf("\n%i" ,a);
		else
		printf("\n%i" ,c);
		
			if(b>c)
			printf("\n%i" ,b);
			else
			printf("\n%i" ,c);
			
			return 0;
}
