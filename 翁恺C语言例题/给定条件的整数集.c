#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	int i,j,k;
	int cnt=0;
	
	for(i=a;i<=a+3;i++){
		//printf("i现在是%d\n",i); 
		for(j=a;j<=a+3;j++){
				//printf("j现在是%d\n",j); 
			for(k=a;k<=a+3;k++){
					//printf("k现在是%d\n",k); 
				if(i!=j&&i!=k&&j!=k){
					cnt++;
					printf("%d%d%d\n",i,j,k);
					if(cnt==6){//每输出六个整数换个行 
						printf("\n");
						cnt=0;//计数清零 
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	
	return 0;
}
