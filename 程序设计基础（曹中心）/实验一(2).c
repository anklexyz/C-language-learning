#include <stdio.h>

int main(void)
{
	int x,t,d;
	printf("������һ����λ��������\n");
	scanf("%d",&x);
	int old=x;//ԭ������ 
	int new;//�������� 
	while(x>0){
		d=x%10;
		t=t*10+d;
		x/=10;
		new=t;
	}
	printf("%d+%d=%d",old,new,old+new);
	
	return 0;
 } 
