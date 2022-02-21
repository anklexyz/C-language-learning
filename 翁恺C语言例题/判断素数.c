//素数又称质数，是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。

#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);
	
	int i;
	int isPrime = 1;	//	x是素数
	for ( i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;//跳出所在循环 
		}
	}
	if ( isPrime == 1 ) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}
	return 0;
	
/*
#include <stdio.h>

int main()
{
	int x;
	
	for ( x=1; x<=100; x++ ) {
		int i;
		int isPrime = 1;	//	x是素数
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
			printf("%d ", x);
		} 
	}
	printf("\n");
	return 0;
}
*/ 

/*
//判断50以内的素数
#include <stdio.h>

int main()
{
	int x;
	int cnt = 0;

	x = 1;
	while ( cnt <50 ) {
		int i;
		int isPrime = 1;	//	x是素数
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
			cnt ++;
			printf("%d\t", x);
			if ( cnt %5 == 0 ) {
				printf("\n");
			}
		} 
		x++;
	}
	return 0;
}
*/ 
