/*

	<< Cursed Triangles >>

	Lili wants to join a triangle enthusiast club.
	In order to join this club, Lili will need to quickly draw M right triangles with a base and height of N.
	Since Lili cannot do this task quickly enough by hand, Lili has asked you to write a program that will do this task for her. 
	Help Lili complete this task!

	--Format Input--
	The input consists of a single line containing two integers, M and N,
	the amount of triangles Lili has to draw and the length of their bases.

	--Format Output--
	Output M right triangles of length N and height N made out of the ‘*’ character.
	For more clarity please refer to given sample output.

	--Constraints--
	• 1 ≤ M ≤ 100
	• 1 ≤ N ≤ 80

*/

#include <stdio.h>

int main(){

	short lenght;
	scanf("%hd", &lenght);

	for (int i = 1; i <= lenght; i++){
    	for (int j = 1; j <= lenght; j++){
			if(j<=lenght-i)
				printf(" ");

			else
				printf("*");
        }
		puts("");
	}

	return 0;

}