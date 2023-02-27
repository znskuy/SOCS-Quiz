/*

    << Christmaas Train >>

    Christmas Eve is near. As a train manager, Jojo has a problem because Jojo has to sort the carriages that have been used in the morning.
    The carriages will be arranged with an ascending number from left to right.
    However, to sort the carriages, Jojo can only swap 2 adjacent carriages.
    Every swap happens, Jojo needs exactly x minutes to do it.
    Jojo wants to know how long he would finish sorting the train if Jojo sorted the carriages effectively.
    Note: It is guaranteed that there are no same carriages number.

    --Format Input--
    There are T test cases.
    Each testcase contains integers N and X,
    where N represents the number of carriages and X is the amount of time needed to exchange adjacent carriages.
    On the next line there are N numbers which are carriages number Ai.

    --Format Output--
    Output T line with format “Case #X: Y ”,
    where X represents the testcase number and Y indicates the total time needed to sort the trains.

    --Constraints--
    • 1 ≤ T ≤ 100
    • 1 ≤ N ≤ 500
    • 1 ≤ X ≤ 10000
    • 1 ≤ Ai ≤ 1000

*/

#include <stdio.h>
#include <stdlib.h>

void printResult(int caseNum, int swap, int time){

    printf("Case #%d: %d\n", caseNum, swap * time);

}

void inputProcess(int* size, int* time, int** train){
    
    scanf("%d %d", size, time);

    *train = malloc(*size * sizeof(int));

    for (int j = 0; j < *size; j++)
        scanf("%d", &(*train)[j]);

}

void sortTrain(int* train, int size, int* swap){

    for (int j = 0; j < size-1; j++){
        for (int k = 0; k < size-j-1; k++){
            if (train[k] > train[k+1]){
                int temp = train[k];
                train[k] = train[k+1];
                train[k+1] = temp;
                (*swap)++;
            }
        }
    }

}


int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        int size, time;
        int* train;
        int swap = 0;

        inputProcess(&size, &time, &train);

        sortTrain(train, size, &swap);

        printResult(i + 1, swap, time);

        free(train);
    }

    return 0;

}