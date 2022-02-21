//求最大公约数 

//法一：枚举法 
#include <stdio.h>

int main()
{
	int a,b;
	int min;
	
	scanf("%d %d", &a, &b);
	if ( a<b ) {
		min = a;
	} else {
		min = b;
	}
	int ret = 0;
	int i;
	for ( i = 1; i < min; i++ ) {
		if ( a%i == 0 ) {
			if ( b%i == 0 ) {
				ret = i;
			}//这个后面可以用逻辑语句并起来写 
		}
	}
	printf("%d和%d的最大公约数是%d.\n", a, b, ret);
	
	return 0;
}

/*
//法二：辗转相除法 
//如果a等于0，计算结束，a就是最大公约数；
//否则，计算a除以b的余数，让a等于b，而b等于那个余数；
//回到第一步 
#include <stdio.h>

int main()
{
	int a,b;
	int t;
	
	scanf("%d %d", &a, &b);
	int origa = a;
	int origb = b;
	while ( b != 0 ) {
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d和%d的最大公约数是%d.\n", origa, origb, a);
	
	return 0;
}
*/
