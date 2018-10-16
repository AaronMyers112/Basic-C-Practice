#include <stdio.h>

void c_2_f(void){
	printf("What is the temperature in Celsius degrees? ");
	float Celsius;
	scanf("%f", &Celsius);;
	float fahr = (9 * Celsius)/5 + 32;
	printf("Celsius %.5f is equal to Fahrenheit %.5f.\n", Celsius, fahr);

}

int main(void){
	c_2_f();
	return 0;
}