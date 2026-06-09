#include <stdio.h>

int main(){
	int num;
	printf("Input  number: ");
	scanf("%i", &num);
	if(num >= 10 && num <= 100){
		printf("Միջակայքում է");
	}
	else{
		printf("Միջակայքից դուրս է");
	}
}
