/*

	<< Bitshifting >>

	Jojo has just start learning his first C programming language today. 
	He would like to apply the material he has just learned, which is input and output. 
	As he had gone through with the most basic things in input and output, he would like to increase the challenge. 
	He wants to add a bitshift operation to the output.
	
	The formula for bitshift operation is: Output = ((A/B) << B)
	
	--Format Input--
	Input consist of 3 lines with each line consists of two integers A and B. 
	A is the first integer that will be bitshifted B times.
	
	--Format Output--
	Output a single integer which is the answer for the bitshift operation

    --Constraints--
    • 1 ≤ B ≤ A ≤ 30

*/

#include<stdio.h>  

int main(){

	int num, bit;

	short testCase;
	scanf("%hd", &testCase);
	
	for (int i = 0; i < testCase; i++){
		scanf("%d %d", &num, &bit);
		printf("%d\n", (num/bit) << bit);
	}

	return 0;

}