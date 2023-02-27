/*

    << Confused Joshua >>

    Joshua like to play Genshin Impact. 
    In this game, we can gacha the characters we like. 
    To get the character we like, we need primogems. Joshua is super busy with school so Joshua don’t have much time to play games. 
    Please help Joshua to get the most least quest to do but the most primogems to get. 
    Because Joshua is kinda lazy to do quest, the number of quest to do have more priority than the amount of primogems.
    
    --Format Input--
    The first line consists of N which is the number of lines quest and primogems. 
    The next N lines consists of two integers X and Y which is the number of quest and the amount of primogems.
    
    --Format Output--
    Print one line like “Please do X Quest Joshua and you will get Y primogems for gacha yay!” 
    with X is the number of the most least quest Joshua need to do and Y is the number of the most primogems Joshua can get.
    
    --Constraints--
    • 1 ≤ N ≤ 1000
    • 1 ≤ X ≤ 1000
    • 1 ≤ Y ≤ 10000000000

*/

#include <stdio.h>

int main(){

    short line;
    scanf("%hd", &line);

    int minQuest = 1000, maxPrimogems = 0;

    for (int i = 0; i < line; i++){
        int quest, primogems;
        scanf("%d %d", &quest, &primogems);

        if(quest < minQuest || (quest == minQuest && primogems > maxPrimogems)){
            minQuest = quest;
            maxPrimogems = primogems;
        }
    }

    printf("Please do %d Quest Joshua and you will get %d primogems for gacha yay!\n", minQuest, maxPrimogems);

    return 0;

}