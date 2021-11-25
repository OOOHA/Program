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
}Node;

void add_node(Node **start, long long account_number_value, bool account_type_value, long long money_value);
void print_list(Node *node);
void insert_node(Node **start, long long account_number_value, bool account_type_value, long long money_value);
void delete_node(Node **start, long long account_number_value);
void sort_node(Node **head_ref);
void find_node(Node **start,long long account_number_value);
void free_list(Node *node);

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
	print_list(head);
	printf("==============\n");

	for (int i = 0; i < 3; i++)
	{
    	fscanf (file_handle1, "%lld %d %lld", &account_number[i], &account_type[i], &money[i]);
		insert_node(&head, account_number[i], account_type[i], money[i]);
	}
	fclose(file_handle1);
	print_list(head);
	printf("==============\n");
	
    for (int i = 0; i < 2; i++)
	{
    	fscanf (file_handle2, "%lld", &account_number[i]);
		find_node(&head, account_number[i]);
	}
	fclose(file_handle2);


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
	
	if(*start == NULL) {
		*start = new_node;
		return;
	}
	else {
		Node *current;	
		current = *start;
		while(current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
		return;
	}
}

void insert_node(Node **start, long long account_number_value, bool account_type_value, long long money_value)
{
	struct node *temp= malloc(sizeof (struct node));
    temp->account_number_data = account_number_value;
	temp->account_type_data = account_type_value;
	temp->money_data = money_value;
	temp->next = NULL;
	temp->prev = NULL;

    if (*start==NULL)
    {
        (*start)= temp;
    }
    else
    {
        (*start)->prev = temp;
         temp->next=(*start); 
        (*start)=temp;
    }
}

void delete_node(Node **start, long long account_number_value)
{
	Node *current = *start;
	Node *temp;

	if(account_number_value == current->account_number_data) {
		*start = current->next;
		(*start)->prev = NULL;
		free(current);
		return;
	}
	
	while(current != NULL) {
		if(current->next->account_number_data == account_number_value) {
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

void find_node(Node **start,long long account_number_value)
{
	Node* temp = *start;
    long long pos = 0;

    while (temp->account_number_data != account_number_value&& temp->next != NULL)
	{
        pos++;
        temp = temp->next;
    }

    if (temp->account_number_data != account_number_value)
    {
		printf("No this account number\n");
	}
	else
	{
    	printf("The account is in node %lld.\n", pos + 1);
	}
}

void sort_node(struct Node** head_ref)
{
    // // Initialize 'sorted' - a sorted doubly linked list
    // struct Node* sorted = NULL;
 
    // // Traverse the given doubly linked list and
    // // insert every node to 'sorted'
    // struct Node* current = *head_ref;
    // while (current != NULL) {
 
    //     // Store next for next iteration
    //     struct Node* next = current->next;
 
    //     // removing all the links so as to create 'current'
    //     // as a new node for insertion
    //     current->prev = current->next = NULL;
 
    //     // insert current in 'sorted' doubly linked list
    //     sortedInsert(&sorted, current);
 
    //     // Update current
    //     current = next;
    // }
 
    // // Update head_ref to point to sorted doubly linked list
    // *head_ref = sorted;
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
	while(current != NULL) {
		temp = current;
		current = current->next;
		free(temp);
	}
}