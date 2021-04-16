#include<stdio.h>
#include<stdlib.h>

#define surper_special 42024723//先定義特別獎    
#define special 64157858//定義特獎

int receipt_to_arry(int);//下面的subfunction

int f;//輸入發票數字
int f1;//中間轉換用的
int f2[8];//讓發票各碼存入陣列

int main()
{
	printf("\t\t\t歡迎來到109年 09 ~ 10 月發票兌獎系統\n");
	
	
    while (1)
    {
        printf("請輸入統一發票號碼:");
        scanf("%d" ,&f);

        receipt_to_arry(f);//呼叫下面function
        
        //判斷前三大獎項
        if (f == surper_special)//判斷有沒有中特別獎
        {
            printf("恭喜你中了特別獎1,000萬元!\n\n");
        }
        else if (f == special)//判斷有沒有中特獎
        {
            printf("恭喜你中了特獎200萬元!\n\n");
        }
        else if (f2[5] == 8 && f2[6]== 2 && f2[7] == 6)//頭獎1的判斷，由末三碼開始判斷
        {
            if (f2[4] == 0)//判斷倒數第四碼.....以此類推
            {
                if (f2[3] == 5)
                {
                    if (f2[2] == 5)
                    {
                        if (f2[1] == 8)
                        {
                            if (f2[0] == 6)//判斷第一碼(最右邊)
                            {
                                printf("恭喜你中了頭獎20萬元!\n\n");
                                continue;//跳出if迴圈
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
        else if (f2[5] == 1 && f2[6]== 2 && f2[7] == 4)//頭獎2和頭獎1一樣想法
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
        else if (f2[5] == 8 && f2[6]== 1 && f2[7] == 0)//頭獎3和上面兩個想法相同
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
        else if (f2[5] == 6 && f2[6]== 5 && f2[7] == 1)//增開六獎的判斷
        {
             printf("恭喜你中了六獎2百元!\n\n");
        }
        else if (f2[5] == 3 && f2[6]== 4 && f2[7] == 1)//增開六獎的判斷
        {
            printf("恭喜你中了六獎2百元!\n\n");
        }
        else//沒中獎
        {
            printf("抱歉你沒中獎\n\n");
        }
        
    }
	
	return 0;
}

    /*
    下面段的程式碼為:
    依序找出各個位數的數字並且放入陣列相同的位置
    從最大位數遞減
    發票總共八碼 將發票最右邊那碼(最先輸入的)存在第0個
    */
int receipt_to_arry(int f)
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

        for (int i = 0; i < 8 ; i++)//把排列好的陣列值return回主程式
        {
            return f2[i];
        }
}