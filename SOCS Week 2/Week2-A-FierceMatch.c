/*

	<< Fierce Match >>

	In a match, each contestant gets ready to do the problem as quickly as possible.
	This fierce match will be won by anyone who can solve 1 problem correctly and quickly.

	--Format Input--
	Consists of 1 line with the format “X+Y“.

	--Format Output--
	Output 1 number N = X+Y.

	--Constraints--
	• 0 ≤ X,Y ≤ 10000

*/

#include<stdio.h>

int main(){

	short x, y;
	char operator;

	scanf("%hd %c %hd", &x, &operator, &y);
	printf("%hd\n", x+y);

	return 0;

}