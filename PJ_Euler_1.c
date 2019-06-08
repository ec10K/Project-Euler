/*
 ============================================================================
 Name        : PJ_Euler_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Sum of multiples of 3 and 5 up to 1000 C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	int num,sum;
	num = 0;
	sum = 0;
	while(num < 1000){
		if((num % 3 == 0) || (num % 5 == 0)){
			sum = sum + num;
			num = num + 1;

		}else{
			num = num + 1;
		}
		}
	printf("sum is = %d", sum);


}
