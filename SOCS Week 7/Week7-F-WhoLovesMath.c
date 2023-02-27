/*

    << Who Loves Math? >>

    CMz hates math.
    CMz asked your help to find GCD and LCM of some integers.
    GCD or greatest common divisor is the largest non-zero positive integer which divides each of the integers.
    LCM or least common multiple is the smallest multiple that two or more numbers have in common.
    Given N-sized array A, find GCD and LCM of all the elements.

    --Format Input--
    Input consists of two lines. The first line contains an integer n. The second line contains n integers divided by a single space.

    --Format Output--
    Two lines consisting of GCD and LCM of n integers given, respectively.

    --Constraints--
    • 1 ≤ n ≤ 100.000, size of array A.
    • 1 ≤ Ai ≤ 100.000, 1 ≤ i ≤ n, i-th element of array A.

*/

#include<stdio.h>

int findLcm(int a, int b){
    
    if (b == 0) 
        return a; 
    return findLcm(b, a % b);

}

int findGcd(int x, int y){
    
    int r;
    if (x <= 0 || y <= 0)
        return 0;
    
    while ((r = x % y) != 0){
        x = y;
        y = r;
    } 
    
    return y;

}

int main(){

    int size;
    scanf("%d", &size);
    
    int num[100];
    for (int i = 0; i < size; i++)
        scanf("%d", &num[i]);

    int gcd = num[0];

    for (int i = 0; i < size; i++)
        gcd = findGcd(gcd, num[i]);

    printf("%d\n", gcd);

    int lcm = num[0];

    for (int i = 1; i < size; i++){
        int temp = findLcm(num[i], lcm);
        lcm = (lcm * num[i]) / temp;
    }

    printf("%d", lcm);

    return 0;

}