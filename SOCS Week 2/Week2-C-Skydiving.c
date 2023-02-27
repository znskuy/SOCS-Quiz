/*

	<< Skydiving >>

	Bibi is a skydiving instructor.
	Before carrying out skydiving activities, Bibi will always ask the name, height, and age of the participants.
	Bibi’s participants is always 2 people.
	To make it easier to remember their identities, Bibi gave them a paper to write down their identity.

	But because they are very enthusiastic in doing skydiving, they write their identity in a single line only (for both of the participants),
	so it wasn’t quite neat and it made difficult for Bibi to see it, and resulted in the skydiving process being disturbed.

	As one of the organizer committee,
	you do not want this activity to be disturbed and plan to provide a program that provides their identity neatly to Bibi.

	--Format Input--
	Input consists of 1 line. It contains the identity of 2 people in a row Ni, Ti, Ui - the name, height, and age of the i-th participant.

	--Format Output--
	The output consists of 6 lines.
	The first line, “Name 1: N1”.
	The second line, “Height 1 : T1”.
	The third line, “Age: U1”.
	For row 4,5,6 the same as row 1,2,3, the only difference only the name, height, and age of the 2nd participant.

	--Constraints--
	• 1 ≤ |Ni|, Ui ≤ 100
	• 1 ≤ Ti ≤ 300.00

*/

#include <stdio.h>

int main(){

	char name1[100], name2[100];
	char age1[100], age2[100];
	double height1, height2;

	scanf("%s %lf %s", &name1, &height1 ,&age1);
	scanf("%s %lf %s", &name2 , &height2 ,&age2);

	printf("Name 1: %s\n", name1);
	printf("Height 1: %.2lf\n", height1);
	printf("Age 1: %s\n", age1);

	printf("Name 2: %s\n", name2);
	printf("Height 2: %.2lf\n", height2);
	printf("Age 2: %s\n", age2);

	return 0;

}