/*

    << Thermostater >>

    Jojo would like to make a simple thermometer converter.
    The converter itself can only convert a Celsius scale into 3 other thermometer scale which is Reaumur, Fahrenheit, and Kelvin.
    Your task as a programmer is to help Jojo by making a program which gives out the appropriate value of other 3 thermometer scale.

    --Format Input--
    The first line of input consist a single line T.
    T will always be 3.
    The next T line consist of a single integer A.
    A is a number in Celsius scale.

    --Format Output--
    Output three float number with exactly 2 precision point – the convertion of Celsius to Reaumur, Fahrenheit, and Kelvin.

    --Constraints--
    • 1 ≤ A ≤ 100

*/

#include <stdio.h>

int main(){

    short testCase;
    scanf("%hd", &testCase);

    int celcius;
    for (int i = 0; i < testCase; i++){
        scanf("%d", &celcius);
        printf("%.2f %.2f %.2f\n", (float) 4*celcius / 5, (float) 9*celcius/5 + 32, (float) celcius + 273);
    }

    return 0;

}