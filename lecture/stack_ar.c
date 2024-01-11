//STACK USING ARRAY
#include<stdio.h>
#include<conio.h> // this has getch(), clrscr() -> genie
int top = -1; // the stack starts from the empty case i.e, no elements
int s[4]; // array of size 4
int size=4; // size set to the size of the array


void push()
{
	int elem;
	if(top==size-1) // make sure your array is not full 
	{
		printf("push operation not possible\n");
	}
	else
	{
		printf("Enter an element\n");
		scanf("%d",&elem); // input of an element 
		top++; // increment top by 1
		s[top]=elem; //store the value at the top position of the array 
	}
}


void pop()
{
	if(top==-1) // make sure that your array is not empty
	{
		printf("pop operation not possible\n");
	}
	else
	{
		printf("element popped is : %d\n",s[top]); // print top
		top--; // decrement top by 1
	}
}


void disp()
{
	int i;
	if(top==-1)  // make sure your array is not empty
	{
		printf("Nothing to display\n");
	}
	else
	{
		for(i=top;i>=0;i--) // from back to front print the elements
		{
			printf("%d\n",s[i]);
		}
	}
}


void main()
{       int choice;
	clrscr(); //optional 
	while(1)
	{
		printf("Press 1 to push\n");
		printf("Press 2 to pop\n");
		printf("Press 3 to display\n");
		printf("Press 4 to exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice); // take choice input 
        

		switch(choice)
		{
			case 1: push(); // if choice == 1 push to stack
				break;
			case 2: pop(); // if choice == 2 pop from stack
				break;
			case 3: disp(); // if choice == 3 display elements of the stack 
				break;
			default:exit(0); // exit the program in all other cases 
            // if exit(0) does not work use `return 0;` happens mostly if you are not able to use conio.h
		}
	}
	getch(); // the code should work fine without this statement
}