#include <stdio.h>
int main()
{	
	int x; 
	printf("������һ���ٷ��Ƴɼ���"); 
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
		printf("ERROR");//����Բ�����������������Ĵ��� 
	}
	return 0; 
}

