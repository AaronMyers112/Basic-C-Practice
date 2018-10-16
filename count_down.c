#include <stdio.h>

void count_down(void){
	printf("Reverse order list of integers greater than 83, beginning at 374, stepping by -6.\n");

	int counter = 374;

	while(counter >= 83){
		printf("%i\n", counter);

		counter -= 6;

	}

}


int main(void){
	count_down();
	return 0;
}