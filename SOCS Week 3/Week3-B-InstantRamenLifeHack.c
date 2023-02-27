/*

	<< Instant Ramen Life Hack >>

	Oh no, Lili accidentally broke her sink! 
	Fortunately a few minutes earlier Lili has just watched a video of someone fixing a sink using instant ramen noodles, so Lili decided to do exactly that. 
	Lili figured out that she needs at least K packs of instant noodles to fix her sink. 
	Right now Lili has N packs of instant noodles at home and she decided to go to the store to buy some more. 
	However, since instant noodles is a very popular product Lili found out that the store only has M packs of instant noodles left in stock. 
	Lili has a lot of money and can buy all M packs of instant noodles if she needs to, but can she fix her sink?
	
	--Format Input--
	The input consists of T testcases where in each testcase the value of K, N, and M might differ from one another. 
	The first line of the input contains T, the number of testcases.

	Each testcase consists of one line containing three numbers :
	K = the amount of instant noodle packs needed to fix the sink.
	N = the amount of instant noodle packs Lili has at home.
	M = the amount of instant noodle packs at the store respectively.
	
	--Format Output--
	For each testcase, 
	output one line containing “Case #X: ” (without quotes) 
	where X is the testcase number (starting from 1) 
	and then followed by “yes” (without quotes) if Lili can fix her sink 
	or “no” (without quotes) if Lili can’t fix her sink.
	
	--Constraints--
	• 1 ≤ T ≤ 1000 
	• 1 ≤ K, N, M ≤ 100000

*/

#include<stdio.h>

int main(){

	short testCase;
	scanf("%hd", &testCase); 
	
	int arr[100];
	int noodleNeeded, noodleAtHome, noodeAtStore;
	
	for (int i = 0; i < testCase; i++){
		scanf("%d %d %d", &noodleNeeded, &noodleAtHome, &noodeAtStore);
		arr[i] = noodleAtHome + noodeAtStore;
 	}

	for (int i = 0; i < testCase; ++i){
        printf("Case #%d: ", (i+1));

		if (arr[i] >= noodleNeeded) 
			puts("yes");

		if (arr[i] < noodleNeeded) 
			puts("no");
 	}

	return 0;

}