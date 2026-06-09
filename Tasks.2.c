#include <stdio.h>

int main(){
	int num_1, num_2;
	printf("Inuput 2 numbers: ");
	scanf("%i" "%i", &num_1, &num_2);
	if(num_1 == num_2){
		printf("Numbers are equal.\n");
	}
	else if(num_1 > num_2){
		printf("Larger number is %i.\n",num_1);
	}
	else{
		printf("Larger number is %i.\n",num_2);
	}

	return 0;
}
