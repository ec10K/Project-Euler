/*
 ============================================================================
 Name        : Fahrnenheit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Fahrenheit celsius conversions C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

/* Print Fahrenheit-Celsius table

 */

/*
 * Define symbolic constants
 * #define name replacement text
 */

#define Lower  0
#define Upper 300
#define Step 20

main()

{
	float fahr,celsius;




	fahr = Lower;

	while(fahr <= Upper){
		celsius = (5.0/9.0) * (fahr-32.0);

		printf("%3.0f %6.1f\n", fahr, celsius);

		fahr = fahr + Step;

	}
}
