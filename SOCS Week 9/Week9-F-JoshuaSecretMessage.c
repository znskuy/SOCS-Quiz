/*

    << Joshua Secret Message >>

    Joshua has a two-dimensional 5x5 array containing letters.
    
      1 2 3 4 5
    1 A B C D E
    2 F G H I J
    3 K L M N O
    4 P Q R S T
    5 U V W X Y

    Joshua wants to write a secret message by writing the coordinates of the letters vertically, horizontally.
    Writing using a dot (.) Help Joshua write a program that can translate Joshua’s secret message.

    --Format Input--
    The first line is an integer number of letters to be issued symbolized by N.
    The next line as many as N, is the coordinates of the letters vertical and horizontal symbolized by V and H seperate by one space.

    --Format Output--
    Print out the translation of Joshua’s secret message.

    --Constraints--
    • 1 ≤ N ≤ 1000
    • 1 ≤ |V| ≤ 5
    • 1 ≤ |H| ≤ 5

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s1, char* s2){
    
    for (int j = 0, k = 0; j<strlen(s1) && k<strlen(s2); j++, k++){
        if (s1[j] != '.' || s2[k] != '.')
            return false;
    }

    return true;

}

char getResult(char* s1, char* s2){

    return 'A' + 5*(strlen(s1)-1) + (strlen(s2)-1);

}

void inputProcess(int testCase){

    char (*input)[2][6] = malloc(testCase * sizeof(*input));
    
    for (int i = 0; i < testCase; i++)
        scanf("%s %s", input[i][0], input[i][1]);

    for (int i = 0; i < testCase; i++){
        if (isValid(input[i][0], input[i][1]))
            printf("%c", getResult(input[i][0], input[i][1]));
    }

    free(input);

}

int main(){
    
    short testCase;
    scanf("%hd", &testCase);

    inputProcess(testCase);

    return 0;

}