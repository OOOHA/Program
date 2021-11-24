#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct node
{
	long long account_number_data;
	bool account_type_data;
	long long money_data;
	struct node *next;
	struct node *prev;
} Node;

void add_node(Node **start, long long account_number_value, bool account_type_value, long long money_value);
void delete_node(Node **start, long long);
void insert_node();
void sortList();
void print_list(Node *node);
void free_list(Node *node);
struct node *head, *tail = NULL;

int main(int argc, char* argv[])
{
	FILE *file_handle = fopen ("1.txt", "r");
	FILE *file_handle1 = fopen ("2.txt", "r");
	FILE *file_handle2 = fopen ("3.txt", "r");
	FILE *file_handle3 = fopen ("4.txt", "r");
	FILE *file_handle4 = fopen ("5.txt", "r");

	// create first node "head"
	Node *head = NULL;
	long long account_number[10];
	bool account_type[10];
	long long money[10];

	for (int i = 0; i < 10; i++)
	{
    	fscanf (file_handle, "%lld %d %lld", &account_number[i], &account_type[i], &money[i]);
		add_node(&head, account_number[i], account_type[i], money[i]);
	}
	fclose(file_handle);

    for (int i = 0; i < 3; i++)
	{
    	fscanf (file_handle1, "%lld", &account_number[i]);
		delete_node(&head, account_number[i]);
	}
	fclose(file_handle1);


	sortList();

	print_list(head);
	free_list(head);

	return 0;	
}

void add_node(Node **start, long long account_number_value, bool account_type_value, long long money_value)
{

	Node *new_node = (Node*)malloc(sizeof(Node));

	new_node->account_number_data = account_number_value;
	new_node->account_type_data = account_type_value;
	new_node->money_data = money_value;
	new_node->next = NULL;
	new_node->prev = NULL;

	if(*start == NULL)
	{
		*start = new_node;
		return;
	}
	else
	{
		Node *current;	
		current = *start;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		return;
	}
}
void delete_node(Node **start, long long account_nember_value)
{
	Node *current = *start;
	Node *temp;

	if(account_nember_value == current->account_number_data) {
		*start = current->next;
		(*start)->prev = NULL;
		free(current);
		return;
	}
	
	while(current != NULL) {
		if(current->next->account_number_data == account_nember_value) {
			temp = current->next;
			current->next = current->next->next;	
			if(current->next != NULL)
				current->next->prev = current;
			free(temp);
			return;
		}
		current = current->next;
	}
}

void insert_node()
{

}

void sortList()
{  
    struct node *current = NULL, *index = NULL;  
    long long temp;  
    //Check whether list is empty  
    if(head == NULL) {  
        return;  
    }  
    else {  
        //Current will point to head  
        for(current = head; current->next != NULL; current = current->next) {  
            //Index will point to node next to current  
            for(index = current->next; index != NULL; index = index->next) {  
                //If current's account_number_data is greater than index's account_number_data, swap the account_number_data of current and index  
                if(current->account_number_data > index->account_number_data) {  
                    temp = current->account_number_data;  
                    current->account_number_data = index->account_number_data;  
                    index->account_number_data = temp;  
                }  
            }  
        }  
    }  
}  

void print_list(Node *node)
{
	while(node != NULL)
	{
		printf("%lld ", node->account_number_data);
		printf("%d ", node->account_type_data);
		printf("%lld\n", node->money_data);

		node = node->next;
	}
	printf("\n");
}

void free_list(Node *node)
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