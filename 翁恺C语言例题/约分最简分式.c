/*
实质上是用辗转相除法求最大公约数 
134 / 18 = 7 ... 8然后被除数变成除数，一直递归下去 
18 / 8 = 2 ... 2
8 / 2 = 4 ... 0

要计算两数最大公约数，我们只需要一直递归就行了，直到余数为0，
最大公约数就是较小的那个数（除数）。递归相信大家都了解过吧，
必定有一出口，保证程序停止或返回，那么这里的出口条件就是上面例子的2，即余数为0。
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
