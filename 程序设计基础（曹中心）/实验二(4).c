#include <stdio.h>

int main(void)
{
	char x;
	printf("������һ����ĸ��\n");
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
		printf("Country");//��������������Ĵ��� 
	} 
	
	return 0;
}
