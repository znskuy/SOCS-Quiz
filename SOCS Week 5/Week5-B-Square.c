/*

	<< Square >>

	Lili loves square and wants to make square with many sizes.
	Lili ask you as her friend to help Lili to make a square only with a ‘*’ character and also with the size of N ∗ N.
	
	--Format Input--
	Input consists of an integer N, the size of square Lili wanted.
	
	--Format Output--
	Output consists of a square with size N ∗ N.

	--Constraints--
	• 1 ≤ N ≤ 100

*/

#include <stdio.h>

int main(){

	short size;
	scanf("%hd", &size);
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++)
			putchar('*');
		puts("");
	}

	return 0;

}