#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	//这个循环是生成一个对应的n位数 
	int first=1;
	int i=1;
	while(i<n){
		first*=10;
		i++;
	}
	//调试用：printf("first=%d\n",first);
	//例如三位数，遍历100-999，i是100开始，first再乘10
	i=first;
	while(i<first*10){
		int t=i;
		int sum=0;
		do{//第一次t是153 ；第二轮因为t自己除了10，t变成15 ; 第三轮t一开始就等于=1了，然后往下走 
			int d=t%10;//第一次d=3 ；第二轮t是15然后取余d就变成5了 ；第三轮d取余变1 
			t/=10;//其实这里写在循环后面更容易理解，第一次t=15 ； 第二轮t变成1了 ；第三轮t=0 
			int p=d;//第一次p=3 ；第二轮p=5了 ；第三轮p=1 
			for(int j=1;j<n;j++){
				p*=d;//第一次p等于3^3，因为做了三次循环 ；第二轮p等于5^3 ;  第三轮是1^3 
			}
			sum+=p;
		}while(t>0);
/*
如果三个数的幂的和sum与这个数是相等的，那么就输出 比如1^3+5^3+3^3=153,即sum==i，
i是一次次循环自增，从100增加到153，然后sum里面每个数分解后加起来的原理和以前整数分解是一样的，
先把这个三位数分解成三个数字1，5，3。
*/		
		if(sum==i){ 
			printf("%d\n",i);
		}
		i++;
	} 
	return 0;
}
