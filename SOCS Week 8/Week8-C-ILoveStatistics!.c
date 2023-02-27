/*

    << I Love Statistics! >>

    Jojo is now learning statistics and he just realized that there are bunch of topics in statistics.
    One of the topic is about central tendency.
    In statistics, a central tendency (or measure of central tendency) is a central or typical value for a probability distribution.
    It may also be called a center or location of the distribution.
    The most common measures of central tendency are the arithmetic mean, the median and the mode. (Source : Wikipedia)
    Unfortunately, Jojo is trying to understand the difference between median, mean, and mode.
    As he read some statistics books, he learn something about it and he encourage himself to try the exercises from his teacher.
    As a good friend, you should help him verify the result (mean and the median) from the data given.

    --Format Input--
    Input consists of one integer T, the number of test case.
    For every test case, there are 2 rows consist of N, number of element on the set, and A is the set of data.
    Ai is an integer on the ith index of set A.

    --Format Output--
    Output should be expressed in format :
    Case #X:
    Mean : M1
    Median : M2
    X is the number of test case, M1 is the mean of set A, and M2 is the median of set A.
    All result must be rounded to 2 decimal points.

    --Constraints--
    • 1 ≤ T ≤ 20
    • 1 ≤ N ≤ 5.000, total N for all test cases does not exceed 5.000.
    • 1 ≤ Ai ≤ 10^6

*/

#include <stdio.h>
#include <stdlib.h>

void printStatistics(int testCase, double mean, double median){

    printf("Case #%d:\nMean : %.2lf\nMedian : %.2lf\n", testCase, mean, median);

}

void computeStatistics(int *num, int size, double *mean, double *median){
    
    long long sum = 0;

    for (int j = 0; j < size; j++)
        sum += num[j];
    
    *mean = (double)sum / (double)size;

    for (int j = 0; j < size-1; j++){
        for (int k = 0; k < size-j-1; k++){
            if (num[k] > num[k+1]){
                int temp = num[k];
                num[k] = num[k+1];
                num[k+1] = temp;
            }
        }
    }

    if(size%2 == 1)
        *median = num[size/2];

    else
        *median = ((double)num[(size/2)-1] + (double)num[size/2]) / 2;

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        short size;
        scanf("%hd", &size);
        int* num = malloc(size * sizeof(int));
        double mean, median;
        
        for (int j = 0; j < size; j++)
            scanf("%d", &num[j]);
        
        computeStatistics(num, size, &mean, &median);
        printStatistics(i+1, mean, median);
        free(num);
    }

    return 0;

}