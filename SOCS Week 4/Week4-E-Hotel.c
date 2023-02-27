/*

    << Hotel >>

    Lili and Bibi who are on vacation are planning to meet at a six-star hotel.
    After Lili and Bibi meet at the hotel,
    they found that Jojo as the hotel manager is confused in arranging guest rooms to make his guests happy.
    Jojo’s guest will ask for the room number he wants to check-in and if the guest request is fulfilled, the guest will be happy.
    Because Jojo only has one hotel, he wants to maximize the number of happy guests.
    Help Jojo to count the maximum number of happy guests.

    --Format Input--
    The first line contains an integer N.
    The next line contains N numbers which is the room number that Jojo’s guest wants to check-in.

    --Format Output--
    Output a number X which is the maximum number of happy guests.

    --Constraints--
    • 1 ≤ N ≤ 5000
    • 1 ≤ Ai ≤ 2 ∗ 10^9, where Ai is the room number requested by Jojo’s guest.

*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool uniqueRoom[10] = {false};
    short happyGuests = 0;

    short testCase;
    scanf("%hd", &testCase);

    for (int i = 0; i < testCase; i++){
        int roomNumber;
        scanf("%d", &roomNumber);

        while(roomNumber > 0){
            int digit = roomNumber % 10;

            if(!uniqueRoom[digit]){
                uniqueRoom[digit] = true;
                happyGuests++;
            }

            roomNumber /= 10;
        }
    }

    printf("%hd\n", happyGuests);

    return 0;

}