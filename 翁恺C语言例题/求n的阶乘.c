#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d",&n);
	int fact=1;
	
	for(i=1;i<=n;i++){
		fact*=i;
	} 
	/*
	int i=n;
	for(i=1'i<=n;i++){
	fact*=1;
	}
	//ÓÃµÝ¼õÀ´×ö
	*/
	printf("%d!=%d",n,fact);
	return 0; 
}
