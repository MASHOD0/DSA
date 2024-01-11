//QUEUE USING ARRAY


#include<stdio.h>
#include<conio.h>


int rear=-1; // initalize rear at -1
int front=0; //initalize front at 0
int q[4]; // create an array of size 4
int size=4; // store the size in a size variable


void insertion()
{
	int elem; // declare the element to insert into the queue
	if(rear==size-1)
	{
		printf("Insertion operation not possible\n"); // if rear is at the end of the list then no more elements can be added
	}
	else
	{
		printf("Enter an element\n");   
		scanf("%d",&elem);   // take element input
		rear++; // increment rear and add the element 
		q[rear]=elem;
	}
}


void deletion()
{

	if((rear==-1)||(front>rear)) // the list is empty 
	{
		printf("Deletion not possible\n"); 
	}
	else
	{
		printf("Element deleted is : %d\n",q[front]); // print the element to delete
		++front; // move front
	}
}


void disp()
{
	int i;
	if((rear==-1)||(front>rear))
	{
		printf("Nothing to display\n"); // when there are no elements to display
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",q[i]); // from front move towards the rear and print all the elements 
		}
	}
}


void main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("Press 1 to insert\n");
		printf("Press 2 to delete\n");
		printf("Press 3 to display\n");
		printf("Press 4 to exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	insertion();
				break;
			case 2: deletion();
				break;
			case 3: disp();
				break;
			default:exit(0);
		}
	}
	getch();
}