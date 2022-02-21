/*
计算序列2/1+3/2+5/3+8/5+…的前n项和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
输入：输入在一行中给出一个正整数n
输出：在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。 
*/ 
//需要 
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
