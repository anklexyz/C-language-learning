//前N项求和 1/1+1/2+1/3+1/4……+n 
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	double sum=0.0;
	int sign=1;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;
		sign=-sign;
	}
	
	printf("%d\n",sum);
	
	return 0;
 } 
