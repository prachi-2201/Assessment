#include<stdio.h>
void menu();
main()
{
	menu();
}
void menu()
{
	char count;
	do
	{
	int pizza=180,burger=100,dosa=120,idli=50,quantity=0,bill,Choice;
	printf(" 1. Pizza \t\t Price = %d Rs./pc\n 2. Burger \t\t Price = %d Rs./pc\n 3. Dosa \t\t Price = %d Rs./pc\n 4. Idli \t\t Price = %d Rs./pc\n 5. Exit \n",pizza,burger,dosa,idli);
	printf("\nPlease select choice of food by number : ");
	scanf("%d",&Choice);
	
		switch(Choice)
		{
			case 1:printf(" Pizza \n");
					printf("Quantity of items : ");
					scanf("%d",&quantity);
					bill=pizza*quantity+bill;
					printf("Amount : %d \n",bill);
					break;
			case 2:printf(" Burger \n");
					printf("Quantity of items : ");
					scanf("%d",&quantity);
					bill=burger*quantity+bill;
					printf("Amount : %d \n",bill);
					break;
			case 3:printf(" Dosa \n");
					printf("Quantity of items : ");
					scanf("%d",&quantity);
					bill=dosa*quantity+bill;
					printf("Amount : %d \n",bill);
					break;
			case 4:printf(" Idli \n");
					printf("Quantity of items : ");
					scanf("%d",&quantity);
					bill=idli*quantity+bill;
					printf("Amount : %d \n",bill);
					break;
			case 5:printf("Exit");
		}
		printf("do you want to place more orders ? Y or N :");
		scanf(" %c",&count);
	}while(count!='N');
}

