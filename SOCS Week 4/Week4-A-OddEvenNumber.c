/*

	<< Odd-Even Number >>

	Jojo is learning about odd and even numbers.
	Lili gave Jojo a number to guess.
	But he could not know whether that number was an odd or even number.
	As a friend of Jojo, help Jojo to determine whether the number is odd or even.

	--Format Input--
	The input will consists only of one number of A,

	--Format Output --
	You need to output a line containing a word “ODD” or “EVEN” depends on whether the number is odd or even.
	Please look below for the sample output.
	REMEMBER! If you output unnecessary character(s), the system will give you “Wrong Answer” instead of “Correct.

	--Constraints--
	• 1 ≤ A ≤ 1000

*/

#include <stdio.h>

int main(){

	short num;
	scanf("%hd", &num); 

	if(num%2 == 0)
		puts("EVEN");

	else
		puts("ODD");

	return 0;

}