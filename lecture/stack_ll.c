//STACK USING LINKED LIST

#include<stdio.h>
#include<conio.h>


struct node{
	int data;  // value stored in the node
	struct node *link; // pointer to the next node
};

struct node *first = NULL; // pointer to the first node of the linked list, since it is empty initially we assign it NULL.

void push() {

	int elem;   
	struct node *p; // dangling pointer p
	p = ((struct node *)malloc(sizeof(struct node)));

	printf("Enter an element\n");
	scanf("%d",&elem); // integer input to push into the stack
	p.data = elem;  // data is going to be the number pushed on to the stack
	p.link = NULL; // initalize link to null

	if(first == NULL)
	{
		first = p; // if null that becomes the first node
	}
	else
	{
		p.link = first; // if there are elements in the list push the node to the top of the list 
        // that is done by making the link point to first and 
		first = p; // changing first to p
	}
}

void pop()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("pop operation not possible\n"); // pop not possible when there is nothing in the list
	}
	else if(first->link == NULL)
	{
		printf("Element popped is %d\n",first->data); 
		free(first); // free is opposite of malloc it frees up that space in memory
		first = NULL; //make first null as list is empty
	}
	else
	{
		temp = first; // point the temp pointer to first
		printf("Element popped is %d\n",first->data); // display the poped element
		first = first->link;  // make first point to the second node
		free(temp); // free first node
		temp = NULL; 
	}
}

void disp()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("Nothing to display\n"); // no nodes nothing to display
	}
	else if(first->link == NULL)
	{
		printf("Contents of stack are :\n"); 
		printf(" %d ",first->data); // only one node just display the value of that one node
	}
	else
	{
		printf("Contents of stack are :\n");
		temp = first; // start by pointing the 
		while(temp!=NULL) // iterates through the entire list
		{
			printf(" %d ",temp->data);
			temp = temp->link; // make temp point to the next node
		}
	}
}


void main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n");
		printf("Press 1 for push operation\n");
		printf("Press 2 for pop operation\n");
		printf("Press 3 to display the contents of stack\n");
		printf("Press any other key to exit out of the program\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push();
				break;
			case 2:	pop();
				break;
			case 3: disp();
				break;
			default:exit(0);
		}
	}
	getch();
}