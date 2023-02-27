/*

    << Present from Lili >>

    Lili wants to give her sister a present. 
    He went to the market and bought a pencil box in the shape of an equilateral triangular prism. 
    Lili will wrap it in wrapping paper. 
    What is the minimum area of gift paper needed to cover the entire surface of the pencil case 
    if it has a prism length L, a side length of triangle B, and height of triangle H ?

    --Format Input--
    A line consisting of 3 real numbers L, B, and H.
    
    --Format Output--
    A line containing the number requested (print 3 digits behind decimal point)
    
    --Constraints-- 
    • 1 ≤ L, B, H ≤ 100

*/

#include<stdio.h>

int main(){

    double lenght, base, height; 
    scanf("%lf %lf %lf", &lenght, &base, &height);

    printf("%.3lf\n", base * (3 * lenght + height));

    return 0;

}