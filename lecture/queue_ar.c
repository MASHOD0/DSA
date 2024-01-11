//QUEUE USING ARRAY


#include<stdio.h>
#include<conio.h>


int rear=-1; 
int front=0;
int q[4];
int size=4;


void insertion()
{
	int elem;
	if(rear==size-1)
	{
		printf("Insertion operation not possible\n");
	}
	else
	{
		printf("Enter an element\n");
		scanf("%d",&elem);
		rear++;
		q[rear]=elem;
	}
}


void deletion()
{

	if((rear==-1)||(front>rear))
	{
		printf("Deletion not possible\n");
	}
	else
	{
		printf("Element deleted is : %d\n",q[front]);
		++front;
	}
}


void disp()
{
	int i;
	if((rear==-1)||(front>rear))
	{
		printf("Nothing to display\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",q[i]);
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