#include <stdio.h>

int main(void)
{
	int n=9;
	int i,j;
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,i*j);
			//对齐的问题 
			if(i*j<10){
				printf("  ");
			}else{
				printf(" "); 
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
 } 
