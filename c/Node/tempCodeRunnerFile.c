struct node *temp= malloc(sizeof (struct node)); //allocate node

//     temp->account_number_data = account_number_value;
// 	temp->account_type_data = account_type_value;
// 	temp->money_data = money_value;
// 	temp->next = NULL;
// 	temp->prev = NULL;

// //If the linked list is empty,  then make the new node as a head.
//     if (*start==NULL)
//     {
//         (*start)= temp;
//     }
//     else
//     {
//         (*start)->prev = temp; //change prev of head node to new node
//          temp->next=(*start); 
//         (*start)=temp; //Move the head to pint the new node
//     }