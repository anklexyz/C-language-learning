#include <stdio.h>
int main()
{	
	int x; 
	printf("请输入一个百分制成绩："); 
	scanf("%d",&x); 
	if(x>=90&&x<=100){
		printf("A"); 
	}else if(x>=80&&x<=89){
		printf("B");
	}else if(x>=70&&x<=79){
		printf("C"); 
	}else if(x>=60&&x<=69){
		printf("D"); 
	}else if(x>=0&&x<=59){
		printf("E"); 
	}else{
		printf("ERROR");//程序对不合理的输入数据做的处理 
	}
	return 0; 
}

