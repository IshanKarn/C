#include<stdio.h>
#include<stdlib.h>
struct node 
{
	struct node *prev;
	struct node *next;
	int data;	
};

struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();

void main()
{
	int ch;
	while(ch!=9)
	{
		printf("\n1. Insert in Beginning\n");
		printf("2. Insert in Last\n");
		printf("3. Insert in Position\n");
		printf("4. Delete in Beginning\n")
		printf("5. Delete in Last\n");
		printf("6. Delete in Position\n");
		printf("7. Display\n");
		printf("8. Search\n");
		
		printf("Enter Your Choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				insertion_beginning();
				break;
				
			case 2:
				insertion_last();
				break;
				
			case 3:
				insertion_specified();
				break;		
				
			case 7:	
				display();
				break;
				
		}
	}
}
void insertion_beginning()
{
	int item;
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("Enter Value\n");
		scanf("%d",&item);
		
		if(head==NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			ptr->data = item;
			head = ptr;
		}
		else
		{
			ptr->data = item;
			ptr->prev = NULL;
			ptr->next = head;
		    head->prev = ptr;
			head = ptr;
		}
		printf("\Node is Inserted \n");
	}
}
void insertion_last()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter Value\n");
		scanf("%d",&item);
		ptr->data = item;
		if(head==NULL)
		{
			ptr->next = NULL;
			ptr->prev = NULL;
			head = ptr;
		}
		else
		{
			temp = head;
			while(temp->next!=NULL)
			{
				temp= temp->next;
			}
			
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = NULL;
		}
	}
	printf("\nNode Inserted at last.");

void display()
{
	struct node *ptr;
	printf("Value is : ");
	ptr = head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr= ptr->next;
	}
	printf("\n");
}