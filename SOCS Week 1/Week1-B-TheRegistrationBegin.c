/*

    << The Registration Begin >>

    The competition between universities resumed. 
    To enter the competition, each person must register by submitting the form in the format determined by the registration committee. 
    Jojo and his friends were eager to take part in the competition. 
    But unfortunately, the format they have is very different from the format determined by the committee. 
    You as a close friend of Jojo feel sorry and wants to help them change the fromat.

    --Format Input--
    There are 3 lines, the first line contains the student ID N which contains the numbers 0-9, 
    the second line contains the full name of student M, 
    and the last line contains a character that indicates the student class C and a number that indicates the student class number O.

    --Format Output--
    In the form of 4 lines with the following format :

    “Id : N”
    “Name : M”
    “Class : C”
    “Num : O”

    --Constraints--
    • |N| = 10, where |N| denotes the length of string N.
    • 1 ≤ |M| ≤ 100, where |M| denotes the length of string M.
    • ‘A’ ≤ C ≤ ‘Z’
    • 1 ≤ O ≤ 1000

*/

#include<stdio.h>

#define gc while(getchar()!='\n'); 

int main(){

    char NIM[11];
    char name[101];
    char class;
    short num;

    scanf("%s", NIM);      gc
    scanf("%[^\n]", name); gc
    scanf("%c", &class);   gc
    scanf("%hd", &num);    gc

    printf("%s\n", NIM);
    printf("%s\n", name);
    printf("%c %hd", class, num);
    
    return 0;

}