#include <stdio.h>

int main(){
    int num_1, num_2, num_3;
    int temp = 0;

    printf("Input 3 numbers: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	if(num_1 > num_2){
		temp = num_2;
		num_2 = num_1;
		num_1 = temp;
	}
	if(num_1 > num_3){
		temp = num_3;
        num_3 = num_1;
        num_1 = temp;
	}
	if(num_2 > num_3){
        temp = num_3;
 		num_3 = num_2;
        num_2 = temp;
    }
	printf("Numbers in ascending order: %d %d %d\n", num_1, num_2, num_3);
}
