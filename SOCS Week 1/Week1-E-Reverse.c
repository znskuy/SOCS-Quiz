/*

	<< Reverse >>

	Help Bibi create a program which receives three words as the input and then display those words back in reverse order!

	--Format Input--
	The input consists of a single line which contains exactly three words separated by spaces.

	--Format Output--
	The output also consists of a single line which contains exactly three words separated by spaces.
	Print enter at the end of output. Output must be corresponding to the instruction.

	--Constraints--
	• 1 ≤ the number of characters in each word ≤ 20
	• Each word only contains lowercase letters from 'a' to 'z'.

*/

#include <stdio.h>

int main(){

	char a[20], b[20], c[20];
	scanf("%s %s %s", a, b, c);

	printf("%s %s %s", c, b, a);
	
	return 0;

}