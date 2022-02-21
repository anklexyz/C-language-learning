#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	
	//判断是几位数 
	int mask=1;
	int t=x;
	while(t>9){
		t/=10;
		mask*=10;
	}
	printf("x=%d,mask=%d\n",x,mask);
	
	//整数分解的部分 
	do{
		int d=x/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");
		}
		x%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
	
	return 0;
}
