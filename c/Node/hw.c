#include<stdio.h>
#include<stdlib.h>
 
// define struct of node
struct Node{
    long int acc;
    int type;
    long int amount;
    struct Node* prev;
    struct Node* next;
};
 
// create an empty node
struct Node *head = NULL;
struct Node *end = NULL;
 
// create a pointer
struct Node *curr = NULL;
 
int Empty(){
    return head == NULL;
}
 
void listNode(){
    curr = head;
    int num = 1;
   
    while(curr->next != NULL){
        printf("No.%2d , account: %ld, type: %d, amount:%ld\n", num, curr->acc, curr->type, curr->amount);
        curr = curr->next;
        num ++;
    }
    printf("No.%2d , account: %ld, type: %d, amount:%ld\n", num, curr->acc, curr->type, curr->amount);
}
 
void sortNode(){
    struct Node *i = (struct Node*)malloc(sizeof(struct Node));
    struct Node *j = (struct Node*)malloc(sizeof(struct Node));
    struct Node *tmp = (struct Node*)malloc(sizeof(struct Node));
    for(i = head; i->next != NULL; i = i->next){
        for(j = head; j->next != NULL; j = j->next){
            if(j->acc > j->next->acc){
                tmp->acc = j->acc;
                tmp->type = j->type;
                tmp->amount = j->amount;
 
                j->acc = j->next->acc;
                j->type = j->next->type;
                j->amount = j->next->amount;
 
                j->next->acc = tmp->acc;
                j->next->type = tmp->type;
                j->next->amount = tmp->amount;
            }
        }
    }
}
 
int searchNode(long int acc){
    curr = head;
    int found_flag = 0;
    int num = 1;
   
    while(curr->next != NULL){
        if(curr->acc == acc){
            found_flag = 1;
            break;
        }
        curr = curr->next;
        num ++;
    }
    if(found_flag){
        printf("No.%2d , account: %ld, type: %d, amount:%ld\n", num, curr->acc, curr->type, curr->amount);
        return 1;
    }else{
        printf("Account not found!\n");
        return 0;
    }
}
 
void insertNode(long int acc, int type, long int amount){
    // create a Node
    struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    new -> acc = acc;
    new -> type = type;
    new -> amount = amount;
 
    // check if empty then insert in the end
    if(Empty()){
        head = new;
        end = new;
    }else{
        end -> next = new;
        new -> prev = end;
    }
    end = new;
}
 
void deleteNode(long int acc){
    if(Empty()) printf("The Node is empty\n");;
    curr = head;
    int num = 1;
    int found_flag = 0;
 
    while(curr->next != NULL){
        if(curr->acc == acc){
            found_flag = 1;
            break;
        }
        curr = curr->next;
        num ++;
    }
 
    if(found_flag){
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        printf("Delete succed!\n");
        printf("No.%2d , account: %ld, type: %d, amount:%ld\n", num, curr->acc, curr->type, curr->amount);
    }else{
        printf("Account not found!\n");
    }
}
 
 
 
int main(){
    long int acc;
    int type;
    long int amount;
    // blank
    printf("\n<setp1--------------------------------------------------->\n");
    // sept 1
    FILE *fp = fopen("1.txt", "r");
    while(fscanf(fp, "%ld %d %ld\n", &acc, &type, &amount)!=EOF){
        insertNode(acc, type, amount);
        //printf("%ld %d %ld\n", acc, type, amount);
    }
    sortNode();
    listNode();
 
    fclose(fp);
    // blank
    printf("\n<setp2--------------------------------------------------->\n");
    // sept 2
    fp = fopen("2.txt", "r");
    while(fscanf(fp, "%ld %d %ld\n", &acc, &type, &amount)!=EOF){
        insertNode(acc, type, amount);
        //printf("%ld %d %ld\n", acc, type, amount);
    }
    sortNode();
    listNode();
 
    fclose(fp);
    // blank
    printf("\n<setp3--------------------------------------------------->\n");
    // sept 3
    fp = fopen("3.txt", "r");
    while(fscanf(fp, "%ld\n", &acc)!=EOF){
        searchNode(acc);
        //printf("%ld %d %ld\n", acc, type, amount);
    }
    // blank
    printf("\n<setp4--------------------------------------------------->\n");
    // sept 4
    fp = fopen("4.txt", "r");
    while(fscanf(fp, "%ld\n", &acc)!=EOF){
        deleteNode(acc);
        //printf("%ld %d %ld\n", acc, type, amount);
    }
    printf("\n-after delete-\n");
    curr = head;
    listNode();
    // blank
    printf("\n<setp5--------------------------------------------------->\n");
    // sept 2
    fp = fopen("5.txt", "r");
    while(fscanf(fp, "%ld %d %ld\n", &acc, &type, &amount)!=EOF){
        insertNode(acc, type, amount);
        //printf("%ld %d %ld\n", acc, type, amount);
    }
    sortNode();
    listNode();
 
    fclose(fp);
}

