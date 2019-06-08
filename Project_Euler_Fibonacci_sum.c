/*
 ============================================================================
 Name        : Project_Euler_Fibonacci_sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Fibonacci sum up to 4000000 of even numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int first_term,second_term,fib_sum,tot_sum;
		first_term = 1;
		second_term = 2;

		tot_sum = 0;

		while(fib_sum < 4000000){
			fib_sum = first_term + second_term;
			if(fib_sum % 2 == 0){
				tot_sum = tot_sum + fib_sum;
				first_term = second_term;
				second_term = fib_sum;



			}else{
				first_term = second_term;
				second_term = fib_sum;
			}
			}
		printf("sum is = %d", tot_sum +2);
}
