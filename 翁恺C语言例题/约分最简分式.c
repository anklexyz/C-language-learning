/*
ʵ��������շת����������Լ�� 
134 / 18 = 7 ... 8Ȼ�󱻳�����ɳ�����һֱ�ݹ���ȥ 
18 / 8 = 2 ... 2
8 / 2 = 4 ... 0

Ҫ�����������Լ��������ֻ��Ҫһֱ�ݹ�����ˣ�ֱ������Ϊ0��
���Լ�����ǽ�С���Ǹ��������������ݹ����Ŵ�Ҷ��˽���ɣ�
�ض���һ���ڣ���֤����ֹͣ�򷵻أ���ô����ĳ������������������ӵ�2��������Ϊ0��
*/
#include <stdio.h>

int main(void)
{
	int dividend,divisor;
	scanf("%d/%d",&dividend,&divisor);
	
	int a=dividend;
	int b=divisor;
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d/%d\n",dividend/a,divisor/a);
	
	return 0;
 } 
