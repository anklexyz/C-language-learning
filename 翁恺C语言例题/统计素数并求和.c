#include <stdio.h>

int main(void)
{
	int m,n;
	int i;
	int cnt=0;
	int sum=0;
	//输入的是一个区间m-n 
	scanf("%d %d",&m,&n);
	if(m==1)
	m=2;
	for(i=m;i<=n;i++){
		int isPrime=1;
		int k;
		for(k=2;k<i-1;k++){
			if(i%k==0){
				isPrime=0;
				break;
			}
		} 
		//判断i是否是素数，用这个数除以“1和它本身 ”以外的数 ，如果整除，那就不是素数，否则就是素数 
		if(isPrime){
			cnt++;
			sum+=i;
		} 
	}

printf("%d %d",cnt,sum);

return 0;
}

