/*

	<< Counting Clocks >>

	Jojo has just bought a custom-made clock. 
	Jojo really likes to count how many rotation can be made by the clock. 
	Jojo will set how much degree and how long will the clock rotate. 
	Jojo is quite bad at math so, he asked you to make a program that will help him to determine how many rotation that his clock could make.
	
	--Format Input--
	The first line of input consists a single integer T. 
	T will always be 3. 
	The next T line consists of two integers A and B. 
	A is the number of degree made in a single second and
	B is the total number of second passed since the clock operates.
	
	--Format Output--
	Output a single float number with exactly 2 precision point – the number of rotation it has made. 
	Note that a full rotation is made when the clock goes 360 degree.
	
	--Constraints--
	• 1 ≤ A ≤ 360
	• 1 ≤ B ≤ 10^15

*/

#include <stdio.h>

int main(){

    short testCase;
    scanf("%hd", &testCase);
    
    for (int i = 0; i < testCase; i++){
		int degree;
		long long second;
        scanf("%d %lld", &degree, &second);
		float rotations;
        rotations = (float) degree * second/360;
		printf("%.2f\n", rotations);
    }

    return 0;

}