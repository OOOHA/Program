#include<stdlib.h>
#include<stdio.h>
int find_MAX(int weight1[],int value1[],int w,int num);

int main(){
    int capacity,i,j,item_num,w,c,w1;
    int weight[99],value[99],unit_value[99],catch[99],catch1[99];
    int wei1[99],wei2[99],val1[99],val2[99];
    char EN[]={'A','B','C','D','E','F','G','H','I','J','K','L'};
    int benefit_value=0,benefit_weight=0,cost_value=0,cost_weight=0;
    
    printf("the capacity of the knapsack is :");
    scanf("%d",&capacity);
    printf("How many item :");
    scanf("%d",&item_num);

    printf("item weight :");
    for(i=0;i<item_num;i++){
        scanf("%d",&weight[i]);
    }
    printf("item value :");
    for(i=0;i<item_num;i++){
        scanf("%d",&value[i]);
        val1[i]=value[i];
    }
    
    printf("Benefit only catch ");
    w=capacity;
    while(w>0){//benefit
        w1,j = find_MAX(weight,val1,w,item_num);//weight[],剩餘w,個數
        if(w1==0){break;}//return 0 break
        else{
            w=w-w1;
            benefit_weight=benefit_weight+weight[j];
            benefit_value=benefit_value+value[j];
            val1[j]=0;
            printf("%c ",EN[j]);
        }
        
    }
    printf("and toatl benefit is %d and total weight is %d\n",benefit_value,benefit_weight);
    for(i=0;i<item_num;i++){
        unit_value[i]=value[i]/weight[i];
        val2[i]=value[i]/weight[i];
    }
    w=capacity;
    printf("Unit of Benefit/Weight catch ");
    while(w>0){//cost
        w1,j = find_MAX(weight,unit_value,w,item_num);//weight[],剩餘w,個數
        if(w1==0){break;}
        else{
            w=w-w1;
            cost_weight=cost_weight+weight[j];
            cost_value=cost_value+value[j];
           unit_value[j]=0;
            printf("%c ",EN[j]);
        }
    }
    printf("and toatl benefit is %d and total weight is %d\n",cost_value,cost_weight);
    //printf("Benefit only catch %c and toatl benefit is %d and total weight is %d\n",benefit_value,benefit_weight);
    //printf("Unit of Benefit/Weight catch ?? and toatl benefit is %d and total weight is %d\n",cost_value,cost_weight);
    return 0;


}
int find_MAX(int weight1[],int value1[],int w,int num){
    int max_value=0;
    int j=0;
    int i;
    for(i=0;i<num;i++){//find max value 
        if(max_value<value1[i]&&weight1[i]<=w){
            max_value=value1[i];
            j=i;
        }
    }
    return weight1[j],j;
}