/*

    << PaloRun >>

    PaloRun is a team-based, 5 vs 5, first-person hero shooter game set in a specific time.
    Players can choose one agent according to their respective abilities.
    PaloRun consists of 2 teams, namely attacker and defender.
    The task of the attacker is to install spikes (bombs) in the defender area.
    The defender’s job is to guard the defender area so that the bomb is not installed by the attacker.
    In PaloRun there is a certain amount of money that is used to buy a weapon.
    Deenz, one of the professional players is always happy when he is in the attacking team so he wants to know what is the right decision to win this game.
    
    There are a few rules to note:
    • Each player will have 800 credits at the start of the game.
    • Each player gets 200 credits for every kill of another player.
    • The player does not get credits added or subtracted if he dies in the match.
    • Each player who gets an assist will get an additional 100 credits.
    • The attacking team will get an additional 300 credits if and only if they successfully spike the defender’s area.
    • You and your team will get an additional 3,000 credits if you win for each match.
    However, if you lose, you and your team only get 1,900 additional credits.
    
    As a professional player, Deenz believes weapons are one of the factors that will determine his victory.
    There are several weapons in the game PaloRun:
    • Specters: 1,600 credits
    • Vandals: 2,900 credits
    • Phantom: 2,900 credits
    • Marshal: 950 credits
    • Operators: 4,700 credits
    
    Deenz knows very well what weapon he should use every match, but he’s not good enough at counting money,
    so he needs your help as a programmer to determine if he can afford it or not.
    However, he also had to pay attention to whether he should buy his teammates weapons or not.

    --Format Input--
    The first line contains the integer M, the amount of money Deenz has for the current match.
    The second line contains K, D, A, which is the number of Kills, Deaths, and Assists Deenz gets in a match.
    The third row contains the integer R, predicting whether Deenz can win the current match.
    There will be 3 possibilities,
    • -1 if Deenz lose
    • 0 if Deenz wins, and
    • 1 if Deenz wins by successfully spike.
    The third and fourth rows contain 2 strings S and X.
    S is the type of weapon that Deenz will buy and X is the weapon that his team wants to request.

    --Format Output--
    The output consists of 2 lines:
    The first line contains the decisions that Deenz chose.
    Print "SURE!" if and only if he can buy the weapons Deenz and his team want.
    Print \SORRY!" if Deenz can buy weapons just for himself.
    Print \REQUEST!" if Deenz can’t buy any weapons.
    Print without double quotes.
    The second output contains an integer stating the number of credits that Deenz has for the next game.

    --Constraints--
    • 800 ≤ M ≤ 10000
    • 0 ≤ K, D, A ≤ 75
    • −1 ≤ R ≤ 1
    • 6 ≤ |S|, |X| ≤ 8, |S| and |X| is the length of the strings S and X.

*/

#include <stdio.h>

int weaponPrice(char weaponRequest){

    char weaponName[] = "MSPVO";
    int price[] = {950, 1600, 2900, 2900, 4700};

    for (int i = 0; i < 5; i++){
        if (weaponRequest == weaponName[i])
            return price[i];
    }

    return 0;

}

int countCredits(int currentCredits, int kills, int deaths, int assists, int matchPrediction){

    int creditsPerMatch = 800;
    creditsPerMatch += currentCredits + kills * 200 + assists * 100;

    if (matchPrediction == -1)
        creditsPerMatch += 1900;

    else if (matchPrediction == 0)
        creditsPerMatch += 3000;

    else
        creditsPerMatch += 3300;

    return creditsPerMatch;

}

void printResult(int creditsPerMatch, char deenzWeapon, char teammatesWeapon){

    int deenz = weaponPrice(deenzWeapon);
    int teammates = weaponPrice(teammatesWeapon);
    
    if (creditsPerMatch > deenz + teammates) 
        printf("SURE!\n");

    else if (creditsPerMatch > deenz && creditsPerMatch < deenz + teammates)
        printf("SORRY!\n");

    else
        printf("REQUEST!\n");

}

int main(){
    
    char deenzWeapon[100], teammatesWeapon[100];
    int currentCredits, kills, deaths, assists, matchPrediction;
    scanf("%d %d %d %d %d %s %s", &currentCredits, &kills, &deaths, &assists, &matchPrediction, deenzWeapon, teammatesWeapon); 

    int creditsPerMatch = countCredits(currentCredits, kills, deaths, assists, matchPrediction);
    printResult(creditsPerMatch, deenzWeapon[0], teammatesWeapon[0]);

    return 0;

}