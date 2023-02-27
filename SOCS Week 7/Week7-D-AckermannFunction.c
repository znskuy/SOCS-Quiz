/*

    << Ackermann Function >>

    Ackermann function is:
    
             n+1               if m = 0
    A(m,n) = A(m-1, 1)         if m > 0 and n = 0
             A(m-1, A(m, n-1)) if m > 0 and n> 0

    --Format Input--
    Contains 2 integer M and N stating the given value of Ackermann function.

    --Format Output--
    Output of the calculation with a format “result: X”, where X is the result of Ackermann function.

    --Constraints--
    • 1 ≤ M ≤ 3
    • 1 ≤ N ≤ 10

*/  

#include <stdio.h>

int ackermann(int x, int y){

    if(x == 0)
        return y+1;
    if((x > 0) && (y == 0))
        return ackermann(x-1, 1);
    if((x > 0) && (y > 0))
        return ackermann(x-1, ackermann(x, y-1));

}

int main(){

    short num1, num2;
    scanf("%hd %hd", &num1, &num2);

    printf("result: %d\n", ackermann(num1, num2));

    return 0;

}