//�����Լ�� 

//��һ��ö�ٷ� 
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
			}//�������������߼���䲢����д 
		}
	}
	printf("%d��%d�����Լ����%d.\n", a, b, ret);
	
	return 0;
}

/*
//������շת����� 
//���a����0�����������a�������Լ����
//���򣬼���a����b����������a����b����b�����Ǹ�������
//�ص���һ�� 
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
	printf("%d��%d�����Լ����%d.\n", origa, origb, a);
	
	return 0;
}
*/
