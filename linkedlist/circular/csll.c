#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next; 
};
struct node *head;

void csll_insert_begining (); 
void csll_insert_last ();
void csll_insert_middle();
void csll_delete_begning();
void csll_delete_end();
void csll_delete_middle();
void csll_display();
void csll_search();

void main ()
{
	int choice =0;
	while(choice != 7) 
	{
		
		printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");
		printf("\nEnter your choice?\n");		
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:
			csll_insert_begining (); 	
			break;
			case 2:
			csll_insert_last ();		
			break;
			case 3:
			csll_delete_begning();		
			break;
			case 4:
            csll_delete_end();
			break;
			case 5:
			csll_search();		
			break;
			case 6:
			csll_display();		
			break;
			case 7:
			exit(0);
			break;
			default:
			printf("Please enter valid choice..");
		}
	}
}
void csll_insert_first()
{
	struct node *ptr,*temp; 
	int item; 
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else 
	{
		printf("\nEnter the node data?");
		scanf("%d",&item);
		ptr -> data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
		}
		else 
		{	
			temp = head;
			while(temp->next != head)
				temp = temp->next;
			ptr->next = head; 
			temp -> next = ptr; 
			head = ptr;
		} 
		printf("\nnode inserted\n");
	}
			
}
void csll_insert_last()
{
	struct node *ptr,*temp; 
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nEnter Data?");
		scanf("%d",&item);
		ptr->data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;	
		}
		else
		{
			temp = head;
			while(temp -> next != head)
			{
				temp = temp -> next;
			}
			temp -> next = ptr; 
			ptr -> next = head;
		}
		
		printf("\nnode inserted\n");
	}

}

void csll_delete_beginning()
{
	struct node *ptr; 
	if(head == NULL)
	{
		printf("\n list underflow ");	
	}
	else if(head->next == head)
	{
		head = NULL;
		free(head);
		printf("\nnode deleted\n");
	}
	
	else
	{	ptr = head; 
		while(ptr -> next != head)
			ptr = ptr -> next; 
		ptr->next = head->next;
		free(head);
		head = ptr->next;
		printf("\nnode deleted\n");

	}
}
void csll_insert_middle()
{
    struct node *ptr,*temp; 
    int item,pos;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter the node data?");
        scanf("%d",&item);
        ptr->data = item;
        printf("\nEnter the position?");
        scanf("%d",&pos);
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;	
        }
        else
        {
            temp = head;
            while(pos-2>0)
            {
                temp = temp -> next;
                pos--;
            }
            ptr->next = temp->next;
            temp->next = ptr;
        }
        printf("\nnode inserted\n");
    }
}

void csll_insert_last()
{
	struct node *ptr, *preptr;
	if(head==NULL)
	{
		printf("\nlist underflow");
	}
	else if (head ->next == head)
	{
		head = NULL;
		free(head);
		printf("\nnode deleted\n");

	}
	else 
	{
		ptr = head;
		while(ptr ->next != head)
		{
			preptr=ptr;
			ptr = ptr->next;
		}
		preptr->next = ptr -> next;
		free(ptr);
		printf("\nnode deleted\n");

	}
}

void csll_search()
{
	struct node *ptr;
	int item,i=0,flag=1;
	ptr = head; 
	if(ptr == NULL)
	{
		printf("\nEmpty List\n");
	}
	else
	{ 
		printf("\nEnter item which you want to search?\n"); 
		scanf("%d",&item);
		if(head ->data == item)
		{
		printf("item found at location %d",i+1);
		flag=0;
		}
		else 
		{
		while (ptr->next != head)
		{
			if(ptr->data == item)
			{
				printf("item found at location %d ",i+1);
				flag=0;
				break;
			} 
			else
			{
				flag=1;
			}
			i++;
			ptr = ptr -> next;
		}
		}
		if(flag != 0)
		{
			printf("Item not found\n");
		}
	}	
		
}

void csll_display()
{
	struct node *ptr;
	ptr=head;
	if(head == NULL)
	{
		printf("\nnothing to print");
	}	
	else
	{
		printf("\n printing values ... \n");
		
		while(ptr -> next != head)
		{
		
			printf("%d\n", ptr -> data);
			ptr = ptr -> next;
		}
		printf("%d\n", ptr -> data);
	}
			
}
