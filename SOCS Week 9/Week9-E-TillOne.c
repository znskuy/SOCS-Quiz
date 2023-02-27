/*

    << Till One >>

    Jojo has numbers with the following formula: 
        
        • F(N) when N is an odd number is F(N−1) + F(N+1)
        • F(N) when N is an even number is F(N/2)
        • F(1) = 1

    Help Jojo find the N-th number using the formula!

    --Format Input--
    The first line input contains T, the number of testcases.
    For each testcase consists of one integer N the number you must find its value using the formula.

    --Format Output--
    For each test case, output “Case #X: Y ”,
    where X is the test case number starting at 1 and Y indicates the value of the N-th number.

    --Constraints--
    • 1 ≤ T ≤ 10
    • 1 ≤ N ≤ 10^8

*/

#include<stdio.h>

int F(int num){

    if(num == 1) 
        return 1;

    if(num%2 == 0) 
        return F(num/2); 

    return F(num-1) + F(num+1);

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    int num;
    for (int i = 0; i < testCase; i++){
        scanf("%d", &num);
        printf("Case #%d: %d\n", (i+1), F(num));
    }

    return 0;

}