#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	int i,j,k;
	int cnt=0;
	
	for(i=a;i<=a+3;i++){
		//printf("i������%d\n",i); 
		for(j=a;j<=a+3;j++){
				//printf("j������%d\n",j); 
			for(k=a;k<=a+3;k++){
					//printf("k������%d\n",k); 
				if(i!=j&&i!=k&&j!=k){
					cnt++;
					printf("%d%d%d\n",i,j,k);
					if(cnt==6){//ÿ����������������� 
						printf("\n");
						cnt=0;//�������� 
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	
	return 0;
}
