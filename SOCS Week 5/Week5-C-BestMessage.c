/*

	<< Best Message >>

	Jojo wants to send a message to his girlfriend.
	He wants to send the best message but Jojo is shy so he wants to encrypt the message.
	Jojo will turn every consonant alphabet to the nearest previous vowel alphabet.
	Jojo also will give the key to decrypt the message.
	The key consist of digits meaning the distance between a consonant to its nearest previous vowel.
	If the alphabet is vowel the distance would be 0.
	Help Jojo create the encrypted message with those keys.

	--Format Input--
	The input will consists of multiple test cases.
	The first line of the input contains an integer T the number of test cases.
	For every cases it contains a string of Jojo’s message.
	The message will not contain any spaces and all are capital letters.

	--Format Output--
	For each test case, print “Case #X:” where X is the number of the test case. 
	The next line output Jojo’s message and the key on the other line.

	--Constraints-- 
	• 1 ≤ T ≤ 100
	• 1 ≤ |message| ≤ 1000

*/

#include <stdio.h>
#include <string.h>

void encrypt(char* message, char* key){

    for (int j = 0; j < strlen(message); j++){
        char c = message[j];
        
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            key[j] = '0';
         
        else {
            int offset = 0;
            if (c >= 'A' && c <= 'D'){
                offset = c - 'A';
                c = 'A';
            }
            else if (c >= 'E' && c <= 'H'){
                offset = c - 'E';
                c = 'E';
            }
            else if (c >= 'I' && c <= 'N'){
                offset = c - 'I';
                c = 'I';
            }
            else if (c >= 'O' && c <= 'T'){
                offset = c - 'O';
                c = 'O';
            }
            else {
                offset = c - 'U';
                c = 'U';
            }
            key[j] = offset + '0';
            message[j] = c;
        }
    }
    key[strlen(message)] = '\0';

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        char message[1005], key[1005];
        scanf("%s", message);

        encrypt(message, key);

        printf("Case #%d:\n", (i+1));
        printf("%s\n%s\n", message, key);
    }

    return 0;
}