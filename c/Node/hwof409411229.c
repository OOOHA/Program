#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Node
{
    long long account_number_data;
    bool account_type_data;
    long long money_data;
    struct Node* next;
    struct Node* prev;
}Node;

struct Node *head = NULL;
struct Node *end = NULL;
struct Node *current = NULL;

int Empty();
void list_node();
void sort_node();
int search_node(long long account_number_value);
void insert_node(long long account_number_value, bool account_type_value, long long money_value);
void delete_node(long long account_number_value);
void free_node(Node *node);

int main()
{
    long long account_number_data;
    int account_type_data;
    long long money_data;

    FILE *file_handle = fopen("1.txt", "r");
    while(fscanf(file_handle, "%lld %d %lld\n", &account_number_data, &account_type_data, &money_data) != EOF)
    {
        insert_node(account_number_data, account_type_data, money_data);
    }
    sort_node();
    list_node();
    fclose(file_handle);

    printf("====================================================================================\n");
    file_handle = fopen("2.txt", "r");
    while(fscanf(file_handle, "%lld %d %lld\n", &account_number_data, &account_type_data, &money_data) != EOF)
    {
        insert_node(account_number_data, account_type_data, money_data);
    }
    sort_node();
    list_node();
    fclose(file_handle);

    printf("====================================================================================\n");
    file_handle = fopen("3.txt", "r");
    while(fscanf(file_handle, "%lld\n", &account_number_data) != EOF)
    {
        search_node(account_number_data);
    }

    printf("====================================================================================\n");
    file_handle = fopen("4.txt", "r");
    while(fscanf(file_handle, "%lld\n", &account_number_data) != EOF)
    {
        delete_node(account_number_data);
    }
    printf("==========account deleted!==========\n");
    current = head;
    list_node();

    printf("====================================================================================\n");
    file_handle = fopen("5.txt", "r");
    while(fscanf(file_handle, "%lld %d %lld\n", &account_number_data, &account_type_data, &money_data) != EOF)
    {
        insert_node(account_number_data, account_type_data, money_data);
    }
    sort_node();
    list_node();
    fclose(file_handle);

    free_node(head);
}

int Empty()
{
    return head == NULL;
}

void list_node()
{
    current = head;
    int num = 1;

    while(current->next != NULL)
    {
        printf("%.2d  account number: %lld\t account type: %d\t money:%lld\n", num, current->account_number_data, current->account_type_data, current->money_data);
        current = current->next;
        num++;
    }

    printf("%.2d  account number: %lld\t account type: %d\t money:%lld\n", num, current->account_number_data, current->account_type_data, current->money_data);
}

void sort_node()
{
    struct Node *i = (struct Node*)malloc(sizeof(struct Node));
    struct Node *j = (struct Node*)malloc(sizeof(struct Node));
    struct Node *tmp = (struct Node*)malloc(sizeof(struct Node));

    for(i = head; i->next != NULL; i = i->next)
    {
        for(j = head; j->next != NULL; j = j->next)
        {
            if(j->account_number_data > j->next->account_number_data)
            {
                tmp->account_number_data = j->account_number_data;
                tmp->account_type_data = j->account_type_data;
                tmp->money_data = j->money_data;
 
                j->account_number_data = j->next->account_number_data;
                j->account_type_data = j->next->account_type_data;
                j->money_data = j->next->money_data;
 
                j->next->account_number_data = tmp->account_number_data;
                j->next->account_type_data = tmp->account_type_data;
                j->next->money_data = tmp->money_data;
            }
        }
    }
}

int search_node(long long account_number_value)
{
    current = head;
    int target = 0;
    int num = 1;

    while(current->next != NULL)
    {
        if(current->account_number_data == account_number_value)
        {
            target = 1;
            break;
        }
        current = current->next;
        num++;
    }
    if(target)
    {
        printf("It's at node number: %.2d:\naccount number: %lld\t account type: %d\t money:%lld\n", num, current->account_number_data, current->account_type_data, current->money_data);
        return 1;
    }
    else
    {
        printf("account number not found\n");
        return 0;
    }
}

void insert_node(long long account_number_value, bool account_type_value, long long money_value)
{
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new -> account_number_data = account_number_value;
    new -> account_type_data = account_type_value;
    new -> money_data = money_value;

    if(Empty())
    {
        head = new;
        end = new;
    }
    else
    {
        end -> next = new;
        new -> prev = end;
    }
    end = new;
}

void delete_node(long long account_number_value)
{
    if(Empty())
    {
        printf("The Node is empty\n");
    }

    current = head;
    int num = 1;
    int target = 0;

    while(current->next != NULL)
    {
        if(current->account_number_data == account_number_value)
        {
            target = 1;
            break;
        }
        current = current->next;
        num++;
    }
 
    if(target)
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        printf("It's at node:%.2d:\naccount number: %lld\t account type: %d\t money:%lld\n", num, current->account_number_data, current->account_type_data, current->money_data);
    }
    else
    {
        printf("account number not found!\n");
    }
}

void free_node(Node *node)
{
	Node *current, *temp;
	current = node;

	while(current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}