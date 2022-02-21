#include <stdio.h>

int main(void)
{
	int x;
	printf("请输入一个百分制成绩：\n");
	scanf("%d",&x);
	if(x>=0&&x<=100){//程序对不合理的输入数据做必要的处理 
	
			switch(x/10){
				case 10:
				case  9:printf("A");break;
				case  8:printf("B");break;
				case  7:printf("C");break;
				case  6:printf("D");break;
				case  5:
				case  4:
				case  3:
				case  2:
				case  1:
				case  0:printf("E");break;
		}
		
	}else{
		printf("ERROR");
	} 

	return 0;
}
