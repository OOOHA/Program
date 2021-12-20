#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int ID;
    char gender;
    int phone;
    Node *LChild;
    Node *RChild;
};

void lists_LVR(Node *node);
void lists_VLR(Node *node);
Node* searchs(Node *root,int key);
Node* newNode(int ID,char gender,int phone);
Node* inserts(Node *node,Node *newnode);
void free_list(Node *node);

int main()
{
    FILE *one;
    FILE *two;
    FILE *three;
    FILE *four;
    Node *headnode = NULL;
    Node *findnode = NULL;
    int ID = 0;
    char gender;
    int phone = 0;

    printf("\n===============1st step===============");
    one = fopen("1.txt","r");
    while(!feof(one))
    {
        fscanf(one, "%d %c %d\n", &ID, &gender, &phone);
        headnode=inserts(headnode, newNode(ID, gender, phone));
    }

    printf("\nLVR: \n");
    lists_LVR(headnode);
    printf("\nVLR: \n");
    lists_VLR(headnode);

    printf("\n===============2nd step===============\n\n");

    two = fopen("2.txt","r");
    while(!feof(two))
    {
        fscanf(two, "%d\n", &ID);
        findnode = searchs(headnode,ID);
        if(findnode == NULL)
        {
            printf("ID: %d not fount \n", ID);
        }
        else
        {
            printf("Find: %d %c %d\n", findnode->ID, findnode->gender, findnode->phone);
        }
    }

    printf("\n===============3rd step===============\n\n");

    three = fopen("3.txt","r");
    while(!feof(three))
    {
        fscanf(three, "%d %c %d\n", &ID, &gender, &phone);
        headnode=inserts(headnode, newNode(ID, gender, phone));
    }

    printf("\nLVR: \n");
    lists_LVR(headnode);
    printf("\nVLR: \n");
    lists_VLR(headnode);

    printf("\n===============4th step===============\n\n");


    four = fopen("4.txt","r");
    while(!feof(four))
    {
        fscanf(four, "%d\n",&ID);
        findnode = searchs(headnode,ID);
        if(findnode == NULL)
        {
            printf("ID:%d not found \n",ID);
        }
        else
        {
            printf("Find:%d %c %d\n", findnode->ID, findnode->gender, findnode->phone);
        }
    }

    free_list(headnode);
}

void lists_LVR(Node *node)
{
    if(node == NULL)
    {
        printf("Tree is Empty");
    }
    if(node->LChild != NULL)
    {
        lists_LVR(node->LChild);
    }

    printf("%06d %c %010d\n", node->ID, node->gender, node->phone);

    if(node->RChild != NULL)
    {
        lists_LVR(node->RChild);
    }
}

void lists_VLR(Node *node)
{
    if(node == NULL)
    {
        printf("Tree is Empty");
    }

    printf("%06d %c %010d\n",node->ID,node->gender,node->phone);

    if(node->LChild != NULL)
    {
        lists_VLR(node->LChild);
    }
    if(node->RChild != NULL)
    {
        lists_VLR(node->RChild);
    }
}

Node* searchs(Node *root, int key)
{
    if(root == NULL || root->ID == key)
    {
        return root;
    }
    if(root->ID<key)
    {
        return searchs(root->RChild, key);
    }
    return searchs(root->LChild, key);
}

Node* newNode(int ID, char gender, int phone)
{
    Node * temp = (Node *)malloc(sizeof(Node));
    temp->ID = ID;
    temp->gender = gender;
    temp->phone = phone;
    temp->RChild = temp->LChild = NULL;
    return temp;
}

Node* inserts(Node *node,Node *newnode)
{
    if(node == NULL)
    {
        return newnode;
    }
    if(newnode->ID < node->ID)
    {
        node->LChild = inserts(node->LChild,newnode);
    }
    else if(newnode->ID > node->ID)
    {
        node->RChild = inserts(node->RChild,newnode);
    }
    return node;
}

void free_list(Node *node)
{
	Node *current, *temp;
	current = node;
	while(current != NULL)
    {
		temp = current;
		current = current->RChild;
		free(temp);
	}
}