/*

    << An Easy Problem >>

    Bibi is a Computer Science student from Binus University.
    She wants to help her friends to understand programming better and decides to write a problem for them.
    She needs your help in determining whether her problem is easy or not.
    To make your task easier, Bibi will give you a list of opinion from N other friends about the problem she wrote.
    If no one considers the problem to be hard then the problem is easy, otherwise it is hard.

    --Format Input--
    The first line of input is an integer N, the number of friends Bibi asked.
    The second line consists of N integers ai, their opinion on the problem.
    If ai is 1 then they think the problem is hard, if ai is 0 then they think the problem is easy.

    --Format Output--
    Print “easy” (without quotes) if Bibi’s problem is easy, otherwise print “not easy” (without quotes).

    --Constraints--
    • 1 ≤ N ≤ 100
    • 0 ≤ ai ≤ 1

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isProblemEasy(int opinion[], int totalFriends){

    for (int i = 0; i < totalFriends; i++){
        if (opinion[i] == 1)
            return false;
    }

    return true;

}

int main(){

    short totalFriends;
    scanf("h%d", &totalFriends);

    short *opinion = malloc(totalFriends * sizeof(short));

    for (int i = 0; i < totalFriends; i++)
        scanf("%hd", &opinion[i]);

    if (isProblemEasy(opinion, totalFriends))
        puts("easy");
        
    else
        puts("not easy");

    free(opinion);
    return 0;

}