/*

    << Sorting >>

    Jojo is asked to sort data that contains name and number based on number in descending order.
    If the number is the same, then sort them based on name in ascending order.

    --Format Input--
    The first line contains an integer T stating the number of test cases.
    Each test case contains an integer N which indicates N rows of data to be input.
    Each data consists of a name and number.
    The format of each line of data is name#number.

    --Format Output--
    The output consists of T lines where each line has the format “Case # X:”,
    where X is the test case number starting at 1 with an enter.
    For each test case, output the sorted data by number in descending order and name in ascending order with format name - number.

    --Constraints--
    • 1 ≤ T ≤ 50
    • 1 ≤ N ≤ 50
    • 1 ≤ |Name| ≤ 50
    • Name will only consist of lowercase characters and spaces.
    • Name will not contain leading or trailing spaces.
    • Numbers will fit in integer

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortData(char (*name)[100], int *num, int list){
    
    for (int i = 0; i < list-1; i++){
        for (int j = i+1; j < list; j++){
            if (num[i] < num[j] || (num[i] == num[j] && strcmp(name[i], name[j]) > 0)){
                char temp[100];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);

                int temp_nomor = num[i];
                num[i] = num[j];
                num[j] = temp_nomor;
            }
        }
    }

}

void inputProcess(char (*name)[100], int *num, int list){

    for (int j = 0; j < list; j++){
        scanf("%[^\n]%*c", name[j]);
        char* p = strchr(name[j], '#');
        *p = '\0';
        sscanf(p+1, "%d", &num[j]);
    }

}


int main(){

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        short list;
        scanf("%hd", &list); 

        char (*name)[100] = malloc(list * sizeof(*name));
        int *num = malloc(list * sizeof(*num));
        inputProcess(name, num, list);

        sortData(name, num, list);

        printf("Case #%d:\n", (i+1));

        for(int j = 0; j < list; j++)
            printf("%s - %d\n", name[j], num[j]);

        free(name);
        free(num);
    }

    return 0;

}