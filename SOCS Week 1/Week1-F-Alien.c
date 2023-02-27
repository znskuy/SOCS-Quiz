/*

	<< Alien >>

	In 2201, humanity has discovered an Earth-like planet called planet Jol1B3.
	Planet Jol1B3 is inhabited by an alien race.
	After several research, the scientists have found out that alien language is similar to English.
	The only difference is alien language always have “szs” at the end of their words.
	Alien only understand a sentence if it contains exactly three words.
	The scientists want to try to communicate with them, so they ask you to create a program to translate some words in English to the alien language.

	--Format Input--
	The input will consist of 2 lines of words that need to be translated.

	--Format Output--
	Print the 2 lines of translated words, each word should be seperated by a space.

	--Constraints--
	• Each line consists of exactly 3 words, each word is seperated by exactly one space.
	• Each word woll only contain lowercase and uppercase English alphabets and will be at most 20 characters long.

*/

#include <stdio.h>

int main(){

	char a[20], b[20], c[20];
	char d[20], e[20], f[20];

	scanf("%s %s %s", a, b, c);
 	scanf("%s %s %s", d, e, f);

 	printf("%sszs %sszs %sszs\n", a, b, c);
 	printf("%sszs %sszs %sszs\n", d, e, f);

	return 0;

}