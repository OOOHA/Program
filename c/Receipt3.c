#include<stdio.h>
#include<stdlib.h>

#define surper_special 42024723    
#define special 64157858
#define head1 68550826
#define head2 84643124
#define head3 46665810
#define more6_1 651
#define more6_2 341

int receipt_to_array(int);
int price_to_array(int);

int f;
int f1;
int f2[8];

int p;
int pa[8];

int main()
{
	printf("\t\t\t歡迎來到109年 09 ~ 10 月發票兌獎系統\n");
	
	
    while (1)
    {
        printf("請輸入統一發票號碼:");
        scanf("%d" ,&f);

        receipt_to_arry(f);
        
    
        if (f == surper_special)
        {
            printf("恭喜你中了特別獎1,000萬元!\n\n");
        }
        else if (f == special)
        {
            printf("恭喜你中了特獎200萬元\n\n");
        }
        else if (f2[5] == 8 && f2[6]== 2 && f2[7] == 6)
        {
            if (f2[4] == 0)
            {
                if (f2[3] == 5)
                {
                    if (f2[2] == 5)
                    {
                        if (f2[1] == 8)
                        {
                            if (f2[0] == 6)
                            {
                                printf("恭喜你中了頭獎20萬元!\n\n");
                                continue;
                            }

                            printf("恭喜你中了二獎4萬元!\n\n");
                            continue;
                        }

                        printf("恭喜你中了三獎1萬元!\n\n");
                        continue;

                    }

                    printf("恭喜你中了四獎4千元!\n\n");
                    continue;
                    
                }
                
                printf("恭喜你中了五獎1千元!\n\n");
                continue;

            }
            
            printf("恭喜你中了六獎2百元!\n\n");
            continue;

        }
        else if (f2[5] == 1 && f2[6]== 2 && f2[7] == 4)
        {
            if (f2[4] == 3)
            {
                if (f2[3] == 4)
                {
                    if (f2[2] == 6)
                    {
                        if (f2[1] == 4)
                        {
                            if (f2[0] == 8)
                            {
                                printf("恭喜你中了頭獎20萬元!\n\n");
                                continue;
                            }

                            printf("恭喜你中了二獎4萬元!\n\n");
                            continue;
                            
                        }

                        printf("恭喜你中了三獎1萬元!\n\n");
                        continue;
                        
                    }

                    printf("恭喜你中了四獎4千元!\n\n");
                    continue;
                    
                }

                printf("恭喜你中了五獎1千元!\n\n");
                continue;
                
            }

            printf("恭喜你中了六獎2百元!\n\n");
            continue;
            
        }
        else if (f2[5] == 8 && f2[6]== 1 && f2[7] == 0)
        {
            if (f2[4] == 5)
            {
                if (f2[3] == 6)
                {
                    if (f2[2] == 6)
                    {
                        if (f2[1] == 6)
                        {
                            if (f2[0] == 4)
                            {
                               printf("恭喜你中了頭獎20萬元!\n\n");
                               continue; 
                            }
                            
                            printf("恭喜你中了二獎4萬元!\n\n");
                            continue;

                        }

                        printf("恭喜你中了三獎1萬元!\n\n");
                        continue;
                        
                    }

                    printf("恭喜你中了四獎4千元!\n\n");
                    continue;
                    
                }

                printf("恭喜你中了五獎1千元!\n\n");
                continue;
                
            }

            printf("恭喜你中了六獎2百元!\n\n");
            continue;
            
        }
        else if (f2[5] == 6 && f2[6]== 5 && f2[7] == 1)
        {
             printf("恭喜你中了六獎2百元!\n\n");
        }
        else if (f2[5] == 3 && f2[6]== 4 && f2[7] == 1)
        {
            printf("恭喜你中了六獎2百元!\n\n");
        }
        else
        {
            printf("抱歉你沒中獎\n\n");
        }
        
    }
	
	return 0;
}

int receipt_to_array(int f)
{
        f1 = f/10000000;
	    f2[0] = f1;

	    f1 = f/1000000;
	    f1 = f1%10;
	    f2[1] = f1;
	
	    f1 = f/100000;
	    f1 = f1%100;
	    f1 = f1%10;
	    f2[2] = f1;
	
	    f1 = f/10000;
    	f1 = f1%1000;
    	f1 = f1%10;
	    f2[3] = f1;
	
	    f1 = f/1000;
	    f1 = f1%100;
	    f1 = f1%10;
	    f2[4] = f1;
	
    	f1 = f/100;
    	f1 = f1%10;
    	f2[5] = f1;
	
    	f1 = f/10;
    	f1 = f1%10;
    	f2[6] = f1;
	
    	f1 = f%10;
    	f2[7] = f1;

        for (int i = 0; i < 8 ; i++)
        {
            return f2[i];
        }
    return 0;        
}

int price_to_array(int f)
{
        f1 = f/10000000;
	    f2[0] = f1;

	    f1 = f/1000000;
	    f1 = f1%10;
	    f2[1] = f1;
	
	    f1 = f/100000;
	    f1 = f1%100;
	    f1 = f1%10;
	    f2[2] = f1;
	
	    f1 = f/10000;
    	f1 = f1%1000;
    	f1 = f1%10;
	    f2[3] = f1;
	
	    f1 = f/1000;
	    f1 = f1%100;
	    f1 = f1%10;
	    f2[4] = f1;
	
    	f1 = f/100;
    	f1 = f1%10;
    	f2[5] = f1;
	
    	f1 = f/10;
    	f1 = f1%10;
    	f2[6] = f1;
	
    	f1 = f%10;
    	f2[7] = f1;

        for (int i = 0; i < 8 ; i++)
        {
            return f2[i];
        }
    return 0;        
}