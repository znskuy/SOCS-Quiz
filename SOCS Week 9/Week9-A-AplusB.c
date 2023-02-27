/*

    < A plus B >

    This is a sample problem about File Processing for you to test on.
    For this second test problem, you will be given two number, A and B.
    You have to print the value of A + B.

    --Format Input--
    The input will consists only of one line that have A and B separated by a space.
    Please read all the input from testdata.in file.

    --Format Output--
    You need to output a line that contains a value of A + B.
    Please look below for the sample output.
    REMEMBER! If you output unnecessary character(s), the system will give you “Wrong Answer” instead of “Correct”.

    --Constraints--
    • 1 ≤ A ≤ 1000
    • 1 ≤ B ≤ 1000

*/

#include <stdio.h>

int main(){
    
    FILE *fp=fopen("testdata.in", "r");
    
    short A, B;
    
    while (fscanf(fp, "%hd %hd\n", &A, &B) == 2)
        printf("%hd\n", A+B);

    fclose(fp);

    return 0;

}