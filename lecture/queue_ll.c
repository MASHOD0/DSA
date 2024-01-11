//QUEUE USING LINKED LIST

#include<stdio.h>
#include<conio.h>


struct node
{
	int data;
	struct node *link;
};
struct node *first = NULL;

void insertion()
{
	int elem; 
	struct node *p;
	struct node *temp;
	p = ((struct node *)malloc(sizeof(struct node))); // create a node

	printf("Enter an element\n");
	scanf("%d",&elem); // you get the value to insert into the queue 
	p->data = elem; // add value to the node
	p->link = NULL;

	if(first == NULL)
	{
		first = p; // if nothing is there in the queue add that as first
	}
	else
	{
		temp = first; // temporary pointer used to traverse the linked list
		while(temp->link!=NULL)
		{
			temp = temp->link; // go to the end of the list
		}
		temp->link = p; // you add the node to the end of the list.
	}
}


void deletion()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("Deletion not possible\n");
	}
	else if(first->link == NULL)
	{
		printf("Element deleted is %d\n",first->data);
		free(first);
		first = NULL;
	}
	else
	{
		temp = first;
		printf("Element deleted is %d\n",first->data);
		first = first->link;
		free(temp);
		temp = NULL;
	}
}

void disp()
{
	struct node *temp;
	if(first == NULL)
	{
		printf("Nothing to display\n");
	}
	else if(first->link == NULL)
	{
		printf("Contents of queue are :\n");
		printf(" %d ",first->data);
	}
	else
	{
		printf("Contents of queue are :\n");
		temp = first;
		while(temp!=NULL)
		{
			printf(" %d ",temp->data);
			temp = temp->link;
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
		printf("Press 1 to perform insertion\n");
		printf("Press 2 to perform deletion\n");
		printf("Press 3 to display the contents of queue\n");
		printf("Press any other key to exit out of the program\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	insertion();
				break;
			case 2:	deletion();
				break;
			case 3: disp();
				break;
			default:exit(0);
		}
	}
	getch();
}