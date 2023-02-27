/*

	<< Middle Letter >>

	This is a simple problem you just have to print the letter in the middle of the word.
	Each word consist of only 3 letter.

	--Format Input--
	The input consists of 3 lines. Each line consists of a S-letter word.
	The word only contains uppercase and lowercase letters of the English alphabet and no spacing & special characters.

	--Format Output--
	The output consists of 3 lines. Each line consist of a single letter which is the letter in the middle of the S-letter word.

	--Constraints--
	• |S| = 3

*/

#include<stdio.h>

int main(){
	
	char word1[3]; 
	char word2[3]; 
	char word3[3];
	
	scanf("%s %s %s", word1, word2, word3);
	
	printf("%c\n", word1[1]);
	printf("%c\n", word2[1]);
	printf("%c\n", word3[1]);

	return 0;

}