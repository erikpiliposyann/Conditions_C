#include <stdio.h>

int main(){
	double num_1 = 0, num_2 = 0;
	char operator;
	
	printf("Enter first number: ");
    scanf("%lf", &num_1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num_2);

	switch(operator){
		case '+':
			printf("Result is: %.2f\n", num_1 + num_2);
			break;
		case '-':
			printf("Result is: %.2f\n", num_1 - num_2);
			break;
		case '*':
		    printf("Result is: %.2f\n", num_1 * num_2);
			break;
		case '/':
			if(num_2 == 0){
				printf("Error\n");
			}
			else{
				printf("Result: %.2f\n", num_1 / num_2);
			}
 			break;
		default:
            printf("Invalid operation\n");
	} 
	return 0;
}
