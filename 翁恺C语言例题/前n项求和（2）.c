/*
��������2/1+3/2+5/3+8/5+����ǰn��͡�ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ��ǰһ��ķ��ӡ�
���룺������һ���и���һ��������n
�������һ����������ֺ͵�ֵ����ȷ��С�����2λ����Ŀ��֤������������˫���ȷ�Χ�� 
*/ 
//��Ҫ 
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	double fz=2;
	double fm=1;
	double sum=0.0;
	double p;
	for(int i=1;i<=n;i++){
		sum+=1.0*fz/fm;
		p=fz;
		fz=fm+fz;
		fm=p;
	}
	printf("sum=%.2f\n",sum);
	
	return 0;
}
