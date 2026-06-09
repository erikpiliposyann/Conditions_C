#include <stdio.h>

int max_element(int a, int b){
	return (a > b ? a : b);
}

int min_3_element(int a,int b,int c){
	int k =  (a > b ? b : a);
	return c > k ? k : c;
}

int main(){
	int num_1;
	int num_2;
	printf("Input first number: ");
	scanf("%i", &num_1);
	printf("Input second number: ");
	scanf("%i", &num_2);

	int max = max_element(num_1,num_2);
	printf("Output max number: %i\n", max); 

	int num_3;
	printf("Input third number: ");
	scanf("%i", &num_3);
     int min_of3 = min_3_element(num_1,num_2,num_3);
     printf("Output min of 3 elements: %i" , min_of3);
} 
