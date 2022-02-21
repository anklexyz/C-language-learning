#include <stdio.h>

int main(void)
{
	int x,t,d;
	printf("请输入一个四位正整数：\n");
	scanf("%d",&x);
	int old=x;//原来的数 
	int new;//逆序后的数 
	while(x>0){
		d=x%10;
		t=t*10+d;
		x/=10;
		new=t;
	}
	printf("%d+%d=%d",old,new,old+new);
	
	return 0;
 } 
