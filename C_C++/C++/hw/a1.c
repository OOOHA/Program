#include<stdlib.h>
#include<stdio.h>

int find_MAX(int weight1[],int value1[],int w,int num)
{
    int max_value=0;
    int j=0;
    int i;
    for(i=0;i<num;i++)
    {
        if(max_value<value1[i]&&weight1[i]<=w)
        {
            max_value=value1[i];
            j=i;
        }
    }
    if(max_value==0)
    {
        return -1;
    }
    else
    {
        return j;
    }
}

int main()
{
    int capacity,i,j,item_num,w=0,c,w1;
    int weight[99],value[99],unit_value[99],catch[99],catch1[99];
    int wei1[99],wei2[99],val1[99],val2[99];
    char EN[]={'A','B','C','D','E','F','G','H','I','J','K','L'};
    int benefit_value=0,benefit_weight=0,cost_value=0,cost_weight=0;
    
    printf("The capacity of the knapsack is :");
    scanf("%d",&capacity);
    printf("How many item :");
    scanf("%d",&item_num);
    for (int i = 0; i < item_num; i++)
	{
		printf("Item %d's weight :", i+1);
		scanf("%d",&weight[i]);
		printf("Item %d's value :", i+1);
		scanf("%d",&value[i]);
        val1[i]=value[i];
	}
    
    printf("Benefit only catch ");
    w=capacity;
    
    while(w>0)
    {
        j = find_MAX(weight,val1,w,item_num);

        if(j==-1)
        {
            break;
        }
        else
        {
            w=w-weight[j];
            benefit_weight=benefit_weight+weight[j];
            benefit_value=benefit_value+value[j];
            val1[j]=0;
            printf("%c ",EN[j]);
        }
        
    }
    printf("and total benefit is %d and total weight is %d\n",benefit_value,benefit_weight);

    for(i=0;i<item_num;i++)
    {
        unit_value[i]=value[i]/weight[i];
        val2[i]=value[i]/weight[i];
    }
    w=capacity;
    printf("Unit of Benefit/Weight catch ");
    while(w>0)
    {
        j = find_MAX(weight,unit_value,w,item_num);
        if(j==-1)
        {
            break;
        }
        else
        {
            w=w-weight[j];
            cost_weight=cost_weight+weight[j];
            cost_value=cost_value+value[j];
            unit_value[j]=0;
            printf("%c ",EN[j]);
        }
    }
    printf("and total benefit is %d and total weight is %d\n",cost_value,cost_weight);

    system("PAUSE");
    return 0;
}