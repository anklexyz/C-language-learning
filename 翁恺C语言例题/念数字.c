/*
����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�ʮ�����ֶ�Ӧ��ƴ�����£�
0: ling 1: yi 2: er 3: san 4: si 5: wu 6: liu
7: qi 8: ba 9: jiu
�����ʽ��
������һ���и���һ���������磺1234��
��ʾ�������������������������
�����ʽ����һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��
����������-600
���������fu liu ling ling
*/

#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d",&x);
	if(x<0){
		printf("fu");
		x=-x;
	}
	
	int mask=1;
	int t=x;
	while(t>9){
		t/=10;
		mask*=10;
	}//��ȡx�Ǽ�λ����������Ӧ��mask����100��1000�����������������������ֽ� ��������t��һ�������ı�����Ȼ����mask�Լ����Լ� 
	
	do{
		int d=x/mask;
		switch(d){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break; 
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		if(mask>9)printf(" ");
		x%=mask;
		mask/=10;
	}while(mask>0);
	printf("\n");
	
	return 0;
 } 
