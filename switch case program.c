#include<stdio.h>
main()
{
	printf("pick a number:");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("food item-Pizza\n" "Price-Rs 239");
			break;
		case 2:
			printf("food item-Burger\n"  "Price-Rs 129");
			break;
		case 3:
			printf("food item-Pasta\n" "Price-Rs 179");
			break;
		case 4:
			printf("food item-French fries\n"  "Price-Rs 99");
			break;
		case 5:
			printf("food item-Sandwich\n"  "Price-Rs 149");
			break;
		default:
			printf("Ask your friends to select");
			
	}
}
