/*

	<< Hex, Hex, Hex! >>

	Lili is a smart student on her campus. 
	One time, Lili’s lecturer gave her an assignment, which is to find out the hexadecimal number of an integer. 
	Lili was hesitant about doing it because she didn’t find out what hexadecimal numbers are.
	
	As a good friend of Lili, you should help Lili complete her task.
	
	--Format Input--
	Given a line consists of 1 integer N.

	--Format Output--
	Output the answer with a line consists of hexadecimal number from N.

	--Contraints--
	• 1 ≤ N ≤ 100
	
*/

#include <stdio.h>

int main(){
	short num ;
	scanf("%hd", &num);	
	printf("%x", num);
	
	return 0;
}
