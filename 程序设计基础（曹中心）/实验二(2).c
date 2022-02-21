#include <stdio.h>

int main(void)
{
	char x;
	printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸£º\n");
	scanf("%c",&x);
	
	if(x=='A'||x=='a'){
		printf("America");
	}else if(x=='B'||x=='b'){
		printf("Britain");
	}else if(x=='C'||x=='c'){
		printf("China");
	}else{
		printf("Country");
	}
	
	return 0;
}
