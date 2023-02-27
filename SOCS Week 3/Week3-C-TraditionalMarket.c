/*

	<< Traditonal Market >>

	Bibi is a good daughter and she is very satisfied when she looks her mother counting money before her mother go to the traditional market. 
	After her mother count that money, she always separate those money as 3 stacks (groups) of money. 
	That stacks of money is used for buy some Poultry (Daging), Vegetables (Sayur), and Eggs (Telur).
	
	One day, Bibi wants to go with her mother to the traditional market. 
	But she only wants to spend those money with her way. 
	They will go to the market area (Poultry, Veggies, and Eggs Area) from the highest budget. 
	Because of this, they will buy the latest things (with the lowest budget) before they go home.
	Help Bibi to find out the shopping order with her mother.
	
	--Format Input--
	Given 1 line consists of 3 integers d, s, t, 
	which describe budget for buying Poultry (Daging), Vegetable (Sayur), and Eggs (Telur) in Rupiah.
	
	--Format Output--
	Output 3 lines containing the shopping order of Bibi and her mother.
	
	--Constraints-- 
	• 0 ≤ d, s, t ≤ 1.000.000
	• d ≠ s ≠ t

*/

#include<stdio.h>

int main(){

	int polteryPrice, vegetablePrice, eggPrice;
	scanf("%d %d %d", &polteryPrice, &vegetablePrice, &eggPrice);
	
	if (polteryPrice>eggPrice && polteryPrice>vegetablePrice && vegetablePrice>eggPrice) 
		printf("Daging\nSayur\nTelur\n");	

	else if (polteryPrice>eggPrice && polteryPrice>vegetablePrice && eggPrice>vegetablePrice) 
		printf("Daging\nTelur\nSayur\n");

	else if (vegetablePrice>eggPrice && vegetablePrice>polteryPrice && eggPrice>polteryPrice) 
		printf("Sayur\nTelur\nDaging\n");

    else if (vegetablePrice>eggPrice && vegetablePrice>polteryPrice && polteryPrice>eggPrice) 
		printf("Sayur\nDaging\nTelur\n");   

    else if (eggPrice>vegetablePrice && eggPrice>polteryPrice && vegetablePrice>polteryPrice)
		printf("Telur\nSayur\nDaging\n");
		
    else if (eggPrice>vegetablePrice && eggPrice>polteryPrice && polteryPrice>vegetablePrice) 
		printf("Telur\nDaging\nSayur\n");

	return 0;

}