/*

    << Matchmaker >>

    As a programmer,
    Marie is making a matchmaking app to predict whether the name of the person A matched with name of the person B from their name’s first initials.
    
    In order to MATCH, the inital letter of person A’s name must be located the Nth letter from the front of alphabet list, A to Z.
    And the initial letter of person B’s name must also be located at the Nth letter from the last of alphabet list, A to Z.
    
    For example,
    the initial located at Nth letter from the front of alphabet list, will match with the initial located at Nth letter from the back of alphabet list.

    --Format Input--
    The input consists of 2 lines.
    The first line consists of an integer T which indicates the number of matching cases to be predict by the app.
    Each of the next T lines consists of two letters A and B which is the initials of the person A’s name and the person B’s name.
    The initials are not separated by space or any symbol in one line.
    The initials only contains uppercase letters of the English alphabet, ’A to Z’ and no spacing or special characters.

    --Format Output--
    Print T lines of matchmaking result. If the initials match, print MATCH in one line, otherwise print NOT MATCH.

    --Constraints--
    • 1 ≤ T ≤ 10000

*/

#include <stdio.h>
#include <stdbool.h>

bool checkMatch(char *str){

    static const char lookup[26] = {
        'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N',
        'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'
    };

    return lookup[str[0]-'A'] == str[1];

}

int main(){

    short numTests;
    scanf("%hd", &numTests);
    
    for (int i = 0 ;i < numTests; i++){
        char str[3];
        scanf("%s", str);
        
        if (checkMatch(str))
            puts("MATCH");
        
        else
            puts("NOT MATCH");
    }

    return 0;

}