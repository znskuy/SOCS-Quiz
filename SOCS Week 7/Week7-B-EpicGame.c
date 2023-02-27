/*

    << Epic Game >>

    Jojo and Lili are playing an epic game.
    In this game, Jojo and Lili each take turns applying the following operation to a number.
    1. If the number is even, then it will be halved.
    2. If the number is odd, then it will be multiplied by three and incremented.
    Each player will apply the above operation to the result of the previous player’s operation.
    The game ends when either Jojo or Lili arrives at the number 1,
    and whoever has to apply the above operation to the number 1 is then declared as the loser. It is guaranteed that the game will always end with the given constraints.
    Given the starting number of the game N, create a program that will display the winner of the game if Jojo always moves first!

    --Format Input--
    The input consists of T test cases.
    Each test case consists of a single line containing a single integer N.

    --Format Output--
    For each test case, output one line containing “Case #X: ” (without quotes),
    where X is the test case number (starting from 1), then followed by either “Jojo” or “Lili” depending on who wins the game.

    --Constraints--
    • 1 ≤ T ≤ 10^3
    • 1 ≤ N ≤ 10^9

*/


#include<stdio.h>

void jo_li(long long num, int testCase){
    
    int steps=0;
    while (num != 1){
        if (num%2 == 0) 
            num /= 2;

        else 
            num = 3*num + 1;

        ++steps; 
    }

    if (steps%2 == 0)
        printf("Case #%d: Lili\n", testCase);

    else
        printf("Case #%d: Jojo\n", testCase);

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        int j = 0;
        long long num;
        scanf("%lld", &num);
        j++;
        jo_li(num, j);
    }

    return 0;

}