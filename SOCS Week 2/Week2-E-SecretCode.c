/*

	<< Secret Code >>

	Jojo works as a secret agent and communicates with others using secret codes.
	Jojo wants to send a few words to help the secret agent.
	The secret code that Jojo will send contains the ASCII value of each character that has been reversed then modulo them by 2.

	Example:
	If Jojo wants to send the word “Hai” then the ASCII from the reversed word “iaH” is “105 97 72” modulo by 2 becomes “1 1 0”.
	Jojo only send the numbers so it will be “110”.
	Because Jojo’s work needs to be done very quickly and converting words into secret codes takes quite a long time,
	help Jojo in creating a program that automatically turns those words into secret codes!

	--Format Input--
	The input consists of several lines.
	The first line contains an integer T representing the number of test cases.
	The next T line contains the word string S.

	--Format Output--
	The answer starts with the format “Case X: Y ”
	where X is the number of test cases and Y is the ASCII value of each character in the string modulo 2.

	--Constraints--
	• 1 ≤ T ≤ 1000
	• 1 ≤ |S| ≤ 1000
	• S consists of only alphabet.

*/

#include<stdio.h>
#include<string.h>

int main(){

	short testCase;
	scanf("%hd", &testCase);
	while(getchar()!='\n');

	for (int i = 0; i<testCase; i++){
		char string[1001];
 		scanf("%[^\n]", string);
		getchar();
		printf("Case %d: ", i+1);

		for (int j = strlen(string)-1; j >= 0; j--)
			printf("%d", string[j] % 2);

       	puts("");
   	}

	return 0;

}