/*

    << Domain Filtering >>

    Each email address consists of two parts: the username (the part before the @) and the domain (the part after the @).
    Some email clients allow their users to filter incoming emails based on the domain of their origin addresses.
    For example, if an email is received from “test@example.com” and a filter is set for “example.com”,
    the received email will not be shown in the client.
    You are to implement a rudimentary version of this feature. You will be given N email addresses.
    You will need to count the number of emails that will be filtered out given a string M, the email domain you will be filtering out.

    --Format Input--
    The first line contains a single integer N.
    The next N lines will contain a string Oi, the origin address of the i-th email.
    The final line will contain M, the email domain to be filtered out.
 
    --Format Output--
    Output a single integer X, the number of emails that will be filtered out.

    --Constraints--
    • 1 ≤ N ≤ 1000
    • 1 ≤ |Oi| ≤ 100
    • Oi will only contain lowercase characters, underscore, dots, and one single @ character.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

short domain_filter(char **originAdress, int size){
    
    char subString[105];
    scanf("%s", subString);

    short filteredOut = 0, i = 0;

    while (i < size){
        char *strg = originAdress[i];
        char *akeong = strchr(strg, '@');
        
        if (akeong != NULL){
            if (!strcmp(akeong + 1, subString))
                filteredOut++;
        }
        ++i;

    }

    return filteredOut;

}

int main(){

    short size;
    scanf("%hd", &size);

    char **originAdress = malloc(size * sizeof(char *));
    
    for (int i = 0; i < size; i++){
        originAdress[i] = malloc(105 * sizeof(char));
        scanf("%s", originAdress[i]);
    }

    printf("%d\n", domain_filter(originAdress, size));

    for (int i = 0; i < size; i++)
        free(originAdress[i]);
    
    free(originAdress);

    return 0;

}