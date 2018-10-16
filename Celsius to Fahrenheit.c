#include <stdio.h>
#include <string.h>

void c_2_f(void) {
	
	printf("Please enter the celsius that you wish to convert ");


	float celsius;

	scanf("%f", &celsius);

	float Fahr = 9 * celsius / 5 + 32;

	printf("converting %.3f degrees celsius to fahrenheit \n");

	printf("%.3f converts to a temperature of %.3f", celsius, Fahr);

}

void f_2_c(void){
	printf("Please enter the fahrenheit that you wish to convert ");

	float fahr;

	scanf("%f", &fahr);

	float celsius = (fahr - 32) * 5/9;

	printf("%.3f converts to a temperature of %.3f", fahr, celsius);
}

void start(void){
	printf("What do you want to convert? ");
	char type[100];
	scanf("%s", &type);

	if(!strcmp(type, "fahrenheit")){
		f_2_c();
	}

	else{
		c_2_f();
	}
}

int main(void){
	start();
	return 0;
}