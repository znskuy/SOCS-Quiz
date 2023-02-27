/*

    << Text >>

    Lately, Bibi like to text her friends.
    After a while, she began to think about how to reduce the cost.
    She knows that the cost for the text depends on the number of letters in the text.
    So she have an idea. She will remove every vowel letter (a, e, i, o, u) in her text.
    Help her by making a program to remove all vowels in her text.

    --Format Input--
    The first line is an integer T representing the number of test cases.
    The next T lines is a string with length no more than 1000 that represents Bibi’s text.

    --Format Output--
    Bibi’s text with format “Case #X: Y”
    X is the number of test case starting at 1 and Y is a string represent Bibi’s text after removing all vowel letter.

    --Constraints--
    • 1 ≤ T ≤ 100
    • 1 ≤ |S| ≤ 1000

*/

#include <stdio.h>
#include <string.h>

int main(){
    
    short testCase;
    scanf("%hd", &testCase);
    while(getchar()!='\n');

    for (int i = 0; i < testCase; i++){

        char text[1001];
        scanf("%[^\n]", text);
        getchar();

        char modifiedText[1001];
        int textIndex = 0;

        for (int j = 0; j < strlen(text); j++){
            if (text[j] != 'a' && text[j] != 'e' && text[j] != 'i' && text[j] != 'o' && text[j] != 'u' && 
                text[j] != 'A' && text[j] != 'E' && text[j] != 'I' && text[j] != 'O' && text[j] != 'U')

                modifiedText[textIndex++] = text[j];

        }
        modifiedText[textIndex] = '\0';
        printf("Case #%d: %s\n", (i+1), modifiedText);
    }

    return 0;

}