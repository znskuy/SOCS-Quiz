/*

    << Playing with String >>

    Jojo likes to play with string. He want to change some alphabet in the string with another
    alphabet.
    Given some list of alphabet to be changed to another alphabet, output the final string after being changed.

    --Format Input--
    Input starts with T, the number of test cases.
    For each test cases, there will be an original string. The next line will be an integer M, the number queries.
    For each queries there will be 2 lowercase characters A and B,
    denote the transformation of every characters A in the string become B.

    --Format Output--
    For each test cases output start with “Case #T: ” followed by the strings after all the query is done.

    --Constraints--
    • 1 ≤ T ≤ 100
    • 0 ≤ M ≤ 100
    • The original strings only consists of lowercase character with at most 1000 lenght.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void handleQuery(char* string, char a, char b){
    
    for (int i = 0; i < strlen(string); i++){
        if (string[i] == a)
            string[i] = b;
    }

}

void inputProcess(int n){

    for (int i = 0; i < n; i++){
        char string[1001];
        short queries;
        scanf("%s %hd", string, &queries);

        for (int j = 0; j < queries; j++){
            char a, b;
            while (getchar() != '\n');
            scanf("%c %c", &a, &b);
            handleQuery(string, a, b);
        }

        printf("Case #%d: %s\n", (i+1), string);
    }

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    inputProcess(testCase);

    return 0;

}