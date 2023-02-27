/*

	<< Games >>

	Lili and Bibi loves to play games.
	They will play N games in a row and write down who is the winner.
	Now Lili wonders, who won more games?
	Help Lili determine who won more games by making a program that output who wins more.

	--Format Input--
	The first line of input consist integer T, the number of the testcase.
	The next 2 T lines consist integer N and string S,
	consisting of N uppercase letters ‘B’ when Bibi won the game, ‘L’ when Lili won the game and ‘T’ when it is tie.

	--Format Output--
	“Lili” (without quotes) if Lili won more than Bibi,
	“Bibi” (without quotes) if Bibi won more than Lili,
	“None” (without quotes) if they won the same number of games.

	--Constraints-- 
	• 1 ≤ T ≤ 100
	• 1 ≤ N ≤ 100
	• It is guaranteed that the string S only contains ‘B’, ‘L’, or ‘T’ characters.

*/

#include <stdio.h>

int main(){

    short testCase;
	scanf("%hd", &testCase);
	while(getchar()!='\n');

	for (int i = 0; i < testCase; i++){
		short games;
		scanf("%hd", &games);
		while(getchar()!='\n');
		short bibi = 0, lili = 0;

		for (int j = 0; j < games; j++){
			char winner;
			scanf("%c", &winner);

			if (winner == 'B')
				bibi++;

			else if (winner == 'L')
				lili++;
		}

		if(lili>bibi)
			puts("Lili");

		else if(bibi>lili)
			puts("Bibi");

		else
			puts("None");

	}

    return 0;

}