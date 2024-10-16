#include<stdio.h>

int main(){
	float fer,cel;
	
	printf("enter value of cel: ");
	scanf("%f",&cel);
	
	fer = (1.8*cel)+32;
	
	printf("your answer in fer is: %.2f",fer);
}
