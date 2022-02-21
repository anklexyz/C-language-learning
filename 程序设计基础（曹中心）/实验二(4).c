#include <stdio.h>

int main(void)
{
	char x;
	printf("请输入一个字母：\n");
	scanf("%c",&x);
	if(x=='A'||x=='a'||x=='B'||x=='b'||x=='C'||x=='c'){
	
		switch(x){
			case 'A':
			case 'a':printf("America");break;
			case 'B':
			case 'b':printf("Britain");break;
			case 'C':
			case 'c':printf("China");break;
		}
	
	}else{
		printf("Country");//对于例外情况做的处理 
	} 
	
	return 0;
}
