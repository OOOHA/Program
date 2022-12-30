#include<stdio.h>
#include<stdlib.h>

int main()
{
	int pass = 12345;
	int sec = 0;
	int choice;
	int money = 10000;
	int remain_money = 10000;
	int take = 0;
	int in = 0;
	char want;
	int wd = 0;
	int de = 0;

	printf("Please enter 12345:");
	scanf("%d" ,&pass);

	while(pass != 12345)
	{
		printf("Wrong enter!\n");
		printf("Please enter 12345:");
		scanf("%d" ,&pass);
		sec++;

		if(sec == 2)
		{
			printf("Too many tries!\n");
			want = 'n';
			break;
		}
	}
	
	do
	{
		switch(pass)
		{
			case 12345:
				printf("-----------------------------------------------\n");
				printf("1.Balance inquiry)\n");
				printf("2.Withdraw\n");
				printf("3.Deposit\n");
				printf("4.Quit\n");
				printf("-----------------------------------------------\n");
				printf("Enter your choice:");
				scanf("%d" ,&choice);

				switch(choice)
				{
					case 1:
						printf("Your blance:%d\n\n" , money);
						printf("Do something else?(y/n):");
						scanf("%s", &want);
						printf("\n");
					break;
		
					case 2:
						printf("Your blance:%d\n\n" , remain_money);
						printf("How much would you want to withdraw:");
						scanf("%d" ,&take);

						if(take > money)
						{
							printf("Poor guy no money!\n");
							printf("Do something else?(y/n):");
							scanf("%s", &want);
							printf("\n");
						}
						else if(take <= money)
						{
							wd = money - take;
							money = wd;
							printf("remain blance:%d\n" ,money );
							printf("Your balance:%d\n" ,money);
							printf("Do something else?(y/n):");
							scanf("%s", &want);
							printf("\n");
						}
						remain_money = money;
					break ;
			
					case 3:
						printf("Your blance:%d\n" , money);
						printf("How much would you want to depost:");
						scanf("%d" ,&in);
						de = money + in;
						printf("remain blance:%d\n\n" ,de);
						money = de;
						printf("Your balance:%d\n" ,money);
						printf("Do something else?(y/n):");
						scanf("%s", &want);
						printf("\n");
					break;

					default:
					want = 'n';
				}
		}
	} while (want == 'y' || want == 'Y');	

	return 0;
}