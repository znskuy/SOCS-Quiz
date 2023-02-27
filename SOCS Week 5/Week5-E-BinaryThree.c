/*

    << Binary Three >>

    You are tasked to find the number of xor (ˆ) between two integers Ai and Aj (i < j) in an array which have at least 3 ON bits.
    A bit has a single binary value, either 0 or 1.
    An ON bit is a bit that has binary value 1.

    --Format Input--
    The first line of input consists of an integer T which indicates the number of test cases.
    The next line consists of an integer N which indicates the size of the array.
    The next line consists of N integers.

    --Format Output--
    Output “Case #X: ”, where
    X is the test case number starting at 1,
    then followed by the number of xor pairs of integers that have at least 3 ON bits and
    the number of xor pairs of integers xor that dont have at least 3 ON bits.

    --Constraints--
    • 1 ≤ T ≤ 50
    • 2 ≤ N ≤ 100
    • 0 ≤ Ai ≤ 10^6

*/

#include <stdio.h>
#include <stdlib.h>

int bitsCount(int xor){

    int count = 0;
    while (xor > 0){

        if (xor & 1)
            count++;

        xor >>= 1;
    }

    return count;

}

int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        short size;
        scanf("%hd", &size);

        int *nums = malloc(size * sizeof(int));

        for (int j = 0; j < size; j++)
            scanf("%d", &nums[j]);

        int atLeast3Bits = 0;
        int lessThan3Bits = 0;

        for (int j = 0; j < size; j++){
            for (int k = j+1; k < size; k++){
                int totalBits = bitsCount(nums[j] ^ nums[k]);

                if (totalBits >= 3)
                    atLeast3Bits++;

                else
                    lessThan3Bits++;
            }
        }

        printf("Case #%d: %d %d\n", (i+1), atLeast3Bits, lessThan3Bits);
        free(nums);
    }

    return 0;

}