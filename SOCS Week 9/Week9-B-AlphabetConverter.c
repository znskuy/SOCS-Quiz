/*

    << Alphabet Converter >>

    Jojo, Lili and Bibi are playing together.
    Because they had just learned the alphabet, Jojo also proposed a game using the alphabet to hone and deepen their abilities.
    The game is a game of changing strings. Initially Jojo has an X string.
    The X string will be changed through several processes given by Jojo.
    The process is changing an alphabet Ai to Bi.
    Each alphabet can only be changed once.
    After all processes take place. Jojo just wants to find out how many characters Bi are in the string X.
    If the alphabet does not appear in the string, the character does not need to be displayed.
    The alphabet displayed must be ordered by alphabet.
    Lili and Bibi want to do it, but they doubt their answer, for that they ask for your help to make an answer for the Jojo game.

    --Format Input--
    The input will consist of several lines of input in “testdata.in” file.
    First consists of T, the number of test cases.
    For each testcase consists of several lines. The first line consists of the X string, Jojo’s initial string.
    The second line consists of an integer N, the number of processes that must be done.
    For the next N lines the process must be done.

    --Format Output--
    The output consists of M lines, which contain the character and the amount of characters inside the new string,
    where M is the number of different characters that are in the string after the process.

    --Constraints--
    • 1 ≤ T ≤ 100
    • 1 ≤ N ≤ 26 
    • 1 ≤ |X| ≤ 100
    • The characters in the X string consist of the alphabet which is uppercase letters.

*/

#include <stdio.h>
#include <string.h>

void processString(FILE *fp, char *initialString, int procces){

    char A, B;

    for (int j = 0; j < procces; j++){
        fscanf(fp, " %c %c", &A, &B);
        for (int k = 0; k < strlen(initialString); k++){
            if (initialString[k] == A)
                initialString[k] = B;
        }
    }

}

void countChars(char *initialString, int caseNumber){
    
    int count[26] = {0};

    for (int j = 0; j < strlen(initialString); j++)
        count[initialString[j]-'A']++;

    printf("Case #%d: ", caseNumber);

    for (int j = 0; j < 26; j++){
        if (count[j] > 0)
            printf("%c:%d ", j+'A', count[j]);
    }

    puts("");

}

int main(){

    FILE *fp = fopen("testdata.in", "r");

    short testCase;
    fscanf(fp, "%hd", &testCase);

    for (int i = 0 ;i < testCase; i++){
        char initialString[101];
        fscanf(fp, "%s", initialString);
        short procces;
        fscanf(fp, "%hd", &procces);
        processString(fp, initialString, procces);
        countChars(initialString, i+1);
    }

    fclose(fp);
    return 0;

}