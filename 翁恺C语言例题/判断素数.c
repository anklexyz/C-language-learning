//�����ֳ���������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ����

#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);
	
	int i;
	int isPrime = 1;	//	x������
	for ( i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;//��������ѭ�� 
		}
	}
	if ( isPrime == 1 ) {
		printf("������\n");
	} else {
		printf("��������\n");
	}
	return 0;
	
/*
#include <stdio.h>

int main()
{
	int x;
	
	for ( x=1; x<=100; x++ ) {
		int i;
		int isPrime = 1;	//	x������
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
//�ж�50���ڵ�����
#include <stdio.h>

int main()
{
	int x;
	int cnt = 0;

	x = 1;
	while ( cnt <50 ) {
		int i;
		int isPrime = 1;	//	x������
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
