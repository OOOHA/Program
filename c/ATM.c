#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int pass = 5278;
	printf("請輸入金融卡密碼:");
	scanf("%d" ,&pass);
	int sec = 0;
	int choice;
	int money = 10000;
	int remain_money = 10000;
	int take;
	int in;
	char want;
	int wd;
	int de;
		
	while(pass != 5278)
	{
		printf("密碼錯誤!\n");
		printf("請輸入正確的金融卡密碼:");
		scanf("%d" ,&pass);
		sec = sec + 1;

			if ( sec == 2)
			{
				printf("密碼錯誤太多次!");
				want = 'n';
				break;
			}
	}
	
	do
	{	
		switch(pass)
		{
			case 5278:
				printf("---------- Welcome to Tku ATM service----------\n");
				printf("1.餘額查詢(Blance lnquiry)\n");
				printf("2.存簿提款(Withdraw)\n");
				printf("3.存簿存款(Deposit)\n");
				printf("4.Quit ATM\n");
				printf("-----------------------------------------------\n");
				printf("Enter your choice:");
				scanf("%d" ,&choice);

					switch(choice)
					{
						case 1:
							printf("Your blance:%d\n\n" , money);
							printf("Do you wish to have another transcation(y/n):");
							want = getche();
							printf("\n");
						break;
			
					case 2:
							printf("Your blance:%d\n\n" , remain_money);
							printf("How much would you want to withdraw:");
							scanf("%d" ,&take);

								if(take > money)
								{
								printf("Poor guy no money!\n");
								printf("Do you wish to have another transcation(y/n):");
								want = getche();
								printf("\n");
								}
								else if(take <= money)
								{
									wd = money - take;
									money = wd;
									printf("remain blance:%d\n" ,money );
									printf("Your balance:%d\n" ,money);
									printf("Do you wish to have another transcation(y/n):");
									want = getche();
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
						printf("Do you wish to have another transcation(y/n):");
						want = getche();
						printf("\n");
					break;

					default: 
					want = 'n';	

					}	

		}

	} while (want == 'y' || want == 'Y');	

	return 0;
}