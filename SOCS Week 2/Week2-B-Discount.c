/*

	<< Discount >>

	Today, Lili is going to a department store.
	Because today is the independence day, the price of a specific item change from A to B. 
	She wants to find out how much the item is being discounted in percent. 
	Help her by making a program to answer her question.

	--Format Input--
	Two integers, A and B, the initial price and current price.

	--Format Output--
	A number representing the discount percentage, rounded to 2 decimal places.
	
	--Constraints--
	• 1 ≤ B ≤ A ≤ 10^5.

*/

#include<stdio.h>

int main(){

	float intialPrize, currentPrize;
	scanf("%f %f", &intialPrize, &currentPrize);
	
	printf("%.2f%%", (intialPrize - currentPrize) / intialPrize * 100);

	return 0;

}