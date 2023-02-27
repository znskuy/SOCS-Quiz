/*

	<< Smart CMz >>

	CMz is one of the brightest students at JoBiLi University.
	To prove it, he practiced several Competitive Programming questions to prepare himself for the national championship competition in 3rd semester.
	He found an interesting case given by his friend, Deenz, where the resulting output is 3 digits.
	The first result of the operation F(N) = BN ∗ N.
	For example, 12 to the power of 4 produces an output of 829 because the result is 20.736 and is added 4 times so that the result is 82,944.
	CMz felt challenged by the questions given by his friend, Deenz.

	--Format Input--
	The input to this question starts with 2 integers, B and P, the base number and the power.

	--Format Output--
	For each test case, output a row containing an integer that is the first 3 digits of F(N).
	If the sum of the first digits is less than 3, add a 0 in front of it.

	Constraints
	• 1 ≤ B ≤ 100
	• 1 ≤ N ≤ 10

*/

#include <stdio.h>
#include <math.h>

int main(){

    short baseNumber, thePower;
    scanf("%hd %hd", &baseNumber, &thePower);

    unsigned long long result = pow(baseNumber,thePower) * thePower;

    if (result < 1000)
        printf("%03d\n", result);

    else
        printf("%d\n", (int) ((result) / pow(10,floor(log10(result))-2)));

    return 0;

}