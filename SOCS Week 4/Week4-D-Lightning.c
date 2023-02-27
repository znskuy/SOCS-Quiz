/*

	<< Lightning >>

	Given 6 numbers A, B, C, D, E, F, create a program that does exactly these in order:
	1. Print the letter ‘a’ A times.
	2. Print the letter ‘s’ B times.
	3. Print the letter ‘h’ C times.
	4. Print the letter ‘i’ D times.
	5. Print the letter ‘a’ E times.
	6. Print the letter ‘p’ F times.

	--Format Input--
	The first line contains a single number T, the number of testcases.
	Each testcase consists of one line containing 6 numbers A, B, C, D, E, F respectively.

	--Format Output--
	The output consists of T lines where each line contains “Case #X: ” (without quotes)
	where X is the testcase number (starting from 1) and then followed by the answer according to the instructions stated above.

	--Constraints--
	• 1 ≤ T ≤ 100
	• 1 ≤ A, B, C, D, E, F ≤ 100

*/

#include <stdio.h>

void printWord(char lightning, int num){

    for (int i = 0; i < num; i++)
        printf("%c", lightning);

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        short A, B, C, D, E, F;
        scanf("%hd %hd %hd %hd %hd %hd", &A, &B, &C, &D, &E, &F);
        printf("Case #%d: ", (i+1));

        printWord('a', A);
        printWord('s', B);
        printWord('h', C);
        printWord('i', D);
        printWord('a', E);
        printWord('p', F);

        puts("");
    }

    return 0;

}