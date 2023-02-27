/*

	<< Decode >>

	One day, Jojo receive a secret message from his friend. Jojo receive a sentence consists of numbers, alphabet, and white space characters.
	Jojo knows how to decode it, so he want to change the code he receives into a lowercase plaintext.
	• 1 = I
	• 2 = R
	• 3 = E
	• 4 = A
	• 5 = S
	• 6 = G
	• 7 = T
	• 8 = B
	• 9 = P
	• 0 = O
	Help Jojo to change the message into lowercase.

	--Format Input--
	Input consists of 1 sentence S in one line. The sentence only contains alphanumeric character and whitespace.

	--Format Output--
	Output one line of sentence, the conversion result from the initial sentence.

	--Constraints--
	• 1 ≤ |S| ≤ 10000

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char decode(char sentence){

    char mapping[] = "1234567890";
    char replace[] = "IREASGTBPO";
    
    for (int i = 0; i < strlen(mapping); i++){
        if (sentence == mapping[i])
            return replace[i];
    }

    return sentence;

}

int main(){

    char sentence[10001];
    fgets(sentence, 10001, stdin);
    sentence[strlen(sentence)] = '\0';

    for(int i = 0; i < strlen(sentence); i++)
        sentence[i] = tolower(decode(sentence[i]));

    printf("%s\n", sentence);

    return 0;

}