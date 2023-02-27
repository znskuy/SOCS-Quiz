/*

    << 2 Rows Theatre >>

    After college, a group of students of a certain height planned to go to the movies.
    The cinema they go to is quite unique because the number of cinema rows is always 2 and the number of seats is as many as the number of students.
    Because this is a unique cinema, the way they sit is also unique.
    They will try to minimize their height difference with the one next to it 
    so that the biggest height difference of each pair of students next to each other is as minimal as possible.
    
    Example:
    There are 6 students with height of 1, 6, 9, 7, 2, and 3.
    There are various sequences that can produce the biggest difference in height.
    
    Ordering 1:
    1 3 6
    2 7 9
    Difference 1 and 3 is 2.
    Difference 3 and 6 is 3.
    Difference 2 and 7 is 5.
    Difference 7 and 9 is 2.
    So the biggest difference in height is 5.
    
    Ordering 2:
    1 3 2
    6 7 9
    The biggest difference in height is 2. This difference is also an optimal answer.

    --Format Input--
    There are T test cases.
    Each testcase contains integers N which indicates the number of students watching.
    In the next line there are N integers that represent the height of each student.

    --Format Output--
    Output T line with format “Case #X: Y ”,
    where X represents the testcase number (starting from 1) and Y represents the the minimum of the biggest height differences.

    --Constraints--
    z 1 ≤ T ≤ 100
    • 2 ≤ N ≤ 500, where N is always even.
    • 1 ≤ Ai ≤ 10^9, where Ai is the height of the i−th student.

*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int size){

    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1 - i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int getMaxHeight(int *arr, int size){
    
    int maxHeight = 0;

    for (int i = 1; i < size/2; i++){
        int height = abs(arr[i] - arr[i-1]);
        if (height > maxHeight)
            maxHeight = height;
    }

    for (int i = size-2; i >= size/2; i--){
        int height = abs(arr[i] - arr[i+1]);
        if (height > maxHeight)
            maxHeight = height;
    }

    return maxHeight;

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        short seat;
        scanf("%hd", &seat);
        int *num = malloc(seat * sizeof(int));
        
        for (int j = 0; j < seat; j++)
            scanf("%d", &num[j]);

        sortArray(num, seat);
        int maxHeight = getMaxHeight(num, seat);

        printf("Case #%d: %d\n", (i+1), maxHeight);
        free(num);
    }

    return 0;

}