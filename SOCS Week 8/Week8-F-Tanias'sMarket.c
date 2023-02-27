/*

    << Tania's Market >>

    Tania Yundra is a famous beef seller in the city of Bandung.
    Therefore, she decided to open a butcher shop and named it Tania’ Market.
    Due to the popularity of Tania’s Market, she can receive tens or even thousands of orders a day.
    As a result, when evaluating daily sales, Tania always has difficulty sorting orders with the highest total price. 
    Therefore, you are given the task of creating a program that can accept input in the form of the number of orders for meat (kg)
    and then multiply it by the price of beef per kg, which is 20000 Rupiah.
    Give the output in the form of meat prices, ordered from the largest to the smallest.

    --Format Input--
    The input consists of two lines.
    The first line N is the total orders received by Tania’s Market.
    The second line M is the number of orders in units (kg) of N.

    --Format Output--
    The output consists of one line.
    This line represents the total price of each order, sorted from largest to smallest.

    --Constraints--
    • 1 ≤ N ≤ 1000
    • 1 ≤ M ≤ 1000

*/

#include <stdio.h>
#include <stdlib.h>

void sortDescending(int arr[], int size){
    
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-i-1; j++){
            if (arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    int *num =  malloc(testCase * sizeof(int));

    for (int i = 0; i < testCase; i++){
        scanf("%d", &num[i]);
        num[i] *= 20000;
    }

    sortDescending(num, testCase);

    for (int i = 0; i < testCase; i++)
        printf("%d ", num[i]);

    free(num);
    return 0;

}