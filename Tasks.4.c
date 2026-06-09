#include <stdio.h>

int main(){
	int age;
	printf("Input age: ");
	scanf("%i", &age);
	
	if(age < 13){
		printf("Child\n");
	}
	else if(13 <= age && age <= 17){
		printf("Teen\n");
	}
	else if(18 <= age && age <= 64){
		printf("Adult\n");
	}
	else{
		printf("Senior\n");	
	}
	return 0;
}
