#include<stdio.h>
int main()
{
	//1.Display the menu
	printf("Pick an Item : \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich ");
	//2.Read their Choice
	int choice=0;
	scanf("%d",&choice);
	//3.Display based on their choice
	
	switch (choice)
	{
    case 1:
			printf("You Picked pizza.");
			printf("Price- Rs239");
			break;
		case 2:
		    printf("Food Item Burger.");
		    printf("Price- Rs129");
			break;	
		case 3:
			printf("Food Item Pasta.");
			printf("Price- Rs179");
			break;
		case 4:
			printf("Food Item French Fries.");
			printf("Price- Rs99");
			break;
		case 5:		
		printf("Food Item Sandwich.");
		printf("Price- Rs149");
		break;
		 Default: printf("Invalid Choice.");
		 return 0;
	}
}
