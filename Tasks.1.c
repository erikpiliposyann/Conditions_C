#include <stdio.h>

int main(){
	int num;
	printf("Input your number: ");
	scanf("%i", &num);
	if(num & 1){
		printf("\nNumber is odd.\n");
	}
	else{
		printf("\nNumber is even.\n");
	}

	return 0;
}
