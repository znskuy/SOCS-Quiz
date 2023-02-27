/*

    << SUMmer Vacation >>

    The SUMmer Vacation (SUMV) is a yearly competition where university students compete to find the cool factor of a list containing N numbers.
    The cool factor of a list is determined by the amount of numbers in that list
    that can be obtained by summing two other different numbers from that list.
    Jojo has just finished his first SUMV in last place.
    Jojo wants to train hard in order to win next year’s SUMV by finding the cool factor of many lists.
    Help Jojo by writing a program that can find the cool factor of a list of numbers A so Jojo can verify his practice answers!

    --Format Input--
    The input consists of T test cases.
    Each test case contains two lines of input.
    The first line of each test case contains a single integer N, the amount of elements in A.
    The second line of each test case contains N integers Ai, the contents of A.

    --Format Output--
    For each test case, output one line containing “Case #X: ” (without quotes),
    where X is the test case number (starting from 1), then followed by C, the cool factor of A.

    --Constraints--
    • 1 ≤ T ≤ 10
    • 1 ≤ N ≤ 200
    • 1 ≤ Ai ≤ 200

*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int sum(int a, int b){

    return a + b;

}

bool contains(int *array, int size, int num){

    for (int i = 0; i < size; i++){
        if (array[i] == num)
            return true;
    }

    return false;

}

int calculateCoolFactor(int *listNumbers, int totalElements){

    int sumArray[4000] = {0};
    int sizeSumArray = 0;

    for (int j = 0; j < totalElements; j++){
        for (int k = j+1; k < totalElements; k++){
            int sumNum = sum(listNumbers[j], listNumbers[k]);

            if (!contains(sumArray, sizeSumArray, sumNum))
                sumArray[sizeSumArray++] = sumNum;
        }
    }

    int coolFactor = 0;
    for (int j = 0; j < sizeSumArray; j++){
        if (contains(listNumbers, totalElements, sumArray[j]))
            coolFactor++;
    }

    return coolFactor;

}

int main(){

    short testCase;
    scanf("%hi", &testCase);

    for (int i = 0; i < testCase; i++){
        int totalElements;
        scanf("%d", &totalElements);

        int *listNumbers = malloc(totalElements * sizeof(int));

        for (int j = 0; j < totalElements; j++)
            scanf("%d", &listNumbers[j]);

        int coolFactor = calculateCoolFactor(listNumbers, totalElements);

        printf("Case #%d: %d\n", (i+1), coolFactor);
        free(listNumbers);
    }

    return 0;

}