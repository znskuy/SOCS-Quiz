/*

	<< Frogger Race >>

	After the eating session is over, then the frog party will be closed with a jump competition between frogs.
	Uniquely, each frog makes a jump equal to the distance of the previous jump plus 1 meterfrog, which starts with a distance of 1 meterfrog. 
	So initially each frog will jump 1 meterfrog in the direction of the positive X axis
	and then in the second jump the frog will jump by 2 metersfrog in the direction of the positive X axis and so on.
	Lili is a frog who is very good at jumping but Lili doesn’t know where the finish line is so Lili doesn’t know when she has to stop her jump.
	You, as a friend of Lili, helped her by telling her the minimum jump needed to reach the finish line. 
	Each frog starts from coordinates 0.
	Note: meterfrog is a unit of length in frog country.

	--Format Input--
	The first line contains an integer T represents number of testcases.
	The next T line contains an integer K represents the location of the finish line.

	--Format Output--
	Output T line in the format of “Case#X : Y"(without quotes) 
	where, 
	X represents the testcase number and
	Y represents the minimum number of jumps that Lili has to make to reach the finish line.

	--Constraints-- 
	• 1 ≤ T ≤ 1000 
	• 1 ≤ K ≤ 10^6

*/

#include <stdio.h>

int main(){

	short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
		int finishPos;
        scanf("%d", &finishPos);
		int jumps = 0, distance = 0;

        while(distance < finishPos){
            jumps++;
            distance += jumps;
        }

        printf("Case #%d: %d\n", (i+1), jumps);
    }

    return 0;

}