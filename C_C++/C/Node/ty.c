#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//#include "read.c"

void insert(long,bool,long);

typedef struct Node
{
  long account;
  long amount;
  bool type;
  struct Node *next;
  struct Node *prev;
}Node;

int main()
{
	long a;
    int b;
    long c;
    struct Node *current;
    printf("enter 10 data");	
    for(int i=1;i<=10;i++)
    {
      	printf("Enter account(14):");
   	 	scanf("%ld",&a);
    	printf("Enter type (0-Personal account、1-Personal account):");
    	scanf("%d",&b);
    	printf("Enter amount(12):");
    	scanf("%ld",&c);
    	insert(a,b,c);
    }
    return 0;
}
void insert(long account,bool type,long amount)
{
    struct Node*p , * q,* n = NULL; 
    struct Node *current;
    while(current->next!=NULL)
    {
        current=current->next; //head node have no data
    }
    current->next=(Node*)malloc(sizeof(Node));
    (current->next)->prev = current;
    current = current->next;
    //current->account,account;
    current->type = type;
    current->amount = amount;
    current->next = NULL;
}