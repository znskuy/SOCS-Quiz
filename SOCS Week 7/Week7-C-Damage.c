/*

    << Damage >>

    In the game Defense of The Bee Hive there are 3 types of damage: physical, magical, and pure.
    Jojo received 20% physical damage, 30% magical damage, 50% pure damage from his enemy. Jojo wants to know the total damage he received.

    --Format Input--
    Given 1 line consists of 3 integers Ph, M, Pu - Physical damage, magical damage, and pure damage.

    --Format Output--
    Output the answer with 2 numbers behind decimals total damage that Jojo received.

    --Constraints--
    • 0 ≤ Ph, M, Pu ≤ 100

*/

#include <stdio.h>

int main(){

    short physical, magical, pure;
    scanf("%hd %hd %hd", &physical, &magical, &pure);
    printf("%.2lf\n", (double) physical/5 + (double) magical * 3/10 + (double) pure/2);

    return 0;

}