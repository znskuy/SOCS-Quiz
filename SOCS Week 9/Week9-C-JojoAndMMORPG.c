/*

    << Jojo and MMORPG >>

    Jojo has just created an account for an MMORPG.
    There are N missions in the game, each having a boss with a power level of Xi.
    To complete a mission, Jojo needs to have a power level that is not smaller than the power level of its boss.
    After finishing a mission, Jojo’s power level decreases according to the power level of its boss.
    The missions can be completed in any order.
    Jojo wants to know the maximum amount of missions he can complete with a power level of Y.
    Write a program to help Jojo!

    --Format Input--
    The input consists of three lines:
    • The first line contains an integer N, the number of missions in the game.
    • The second line contains N integers Xi, the power level of each mission’s boss.
    • The third line contains an integer Y , Jojo’s power level.

    --Format Output--
    Output a single integer A, the answer to Jojo’s question.

    --Constraints--
    • 1 ≤ N ≤ 100
    • 1 ≤ Y ≤ 10^18
    • 1 ≤ Xi ≤ 10^18

*/

#include <stdio.h>
#include <stdlib.h>

void calculateMissions(short mission, unsigned long long* bossPower, unsigned long long jojoPower){

    for (int i = 0; i < mission-1; i++){
        for (int j = 0; j < mission-i-1; j++){
            if (bossPower[j] > bossPower[j+1]){
                unsigned long long temp = bossPower[j];
                bossPower[j] = bossPower[j+1];
                bossPower[j+1] = temp;
            }
        }
    }

    short completedMission = 0;

    int i = 0;
    while(i < mission && bossPower[i] <= jojoPower){
        jojoPower -= bossPower[i];
        completedMission++;
        i++;
    }

    printf("%hd\n", completedMission);

}

int main(){
    
    short mission;
    scanf("%hd", &mission);
    unsigned long long *bossPower = malloc(mission * sizeof(unsigned long long));

    for(int i = 0 ;i < mission; i++)
        scanf("%llu", &bossPower[i]);

    unsigned long long jojoPower;
    scanf("%llu", &jojoPower);

    calculateMissions(mission, bossPower, jojoPower);

    free(bossPower);
    return 0;

}