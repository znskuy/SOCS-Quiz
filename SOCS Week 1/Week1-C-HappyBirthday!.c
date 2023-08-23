/*

	<<Happy Birthday!>>

	Jojo has lots of friends.
	As a result of Jojo’s many friends, almost every day there is one of Jojo’s friend who has a birthday.
	So, Jojo will send a message to his friend, “Selamat ulang tahun yang ke N yaaa!”.
	Here, N is the age of his friend.
	But almost every day he has to type the message so he feels tired.
	As a good friend of Jojo, he asked you to make a program to say the sentence to his friend whose birthday.

	--Format Input--
	Given a line consisting of N, the age of Jojo's friend who is having a birthday.

	--Format Output--
	Output a line that consist "Selamat ulang tahun yang ke N yaaa!". N is the age of Jojo's froend.

	--Constraints--
	• 1 ≤ N ≤ 100

*/

#include<stdio.h>

int main(){
	short age;
	scanf("%hd", &age);
	printf("Selamat ulang tahun yang ke %d yaaa!\n", age);
	return 0;
}
