#include<stdio.h>
struct node
{
	int info;
	struct node *link;	
};

struct node *emplist(struct node *start,int data);
struct node *beg(struct node *start,int data);
struct node *end(struct node *start,int data);
struct node *nposition(struct node *start,int data,int position);
void disp(struct node *start);
struct node *del(struct node *start,int data);

int main()
{
	struct node *start = NULL;
	int ch,data,position;
	
	while(1)
	{
		printf("\n1. Insert in an Empty List\n");
		printf("2. Insert at Beginning in List\n");
		printf("3. Insert at End in List\n");
		printf("4. Insert at nth Position of List\n");
		printf("5. Display List Element\n");
		printf("6. Delete Value in List\n");
		
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				if(start!=NULL)
				{
					printf("List is Not Empty\n");
					break;
				}
				
				printf("Enter Data : ");
				scanf("%d",&data);
				start = emplist(start,data);
				break;
				
			case 2:
				printf("Enter Data :");
				scanf("%d",&data);
				start = beg(start,data);
				break;
				
			case 3:
				printf("Enter Data : ");
				scanf("%d",&data);
				start = end(start,data);
				break;
				
			case 4:
				printf("Enter Data : ");
				scanf("%d",&data);
				printf("Enter Position : ");
				scanf("%d",&position);
				
				start = nposition(start,data,position);
				break;
				
			case 5:
				disp(start);
				break;
				
			case 6:
				printf("Enter Data :");
				scanf("%d",&data);
				start = del(start,data);
				break;	
								
			}	
	}	
}
struct node *emplist(struct node *start,int data)
{
	struct node *temp;
	
	temp = (struct node*)malloc(sizeof(struct node));  //  data, address
	temp->info= data;
	temp->link = start;
	start = temp;
	return start;
}


struct node *beg(struct node *start,int data)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node)); 
	temp->info = data;
	temp->link = start;
	start = temp;
	return start;
}

struct node *end(struct node *start,int data)
{
	struct node *p,*temp;
	temp = (struct node*)malloc(sizeof(struct node)); 
	temp->info = data;
	
	p = start;
	while(p->link!=NULL)
	{
		p = p->link;
	}
	
	p->link = temp;
	temp->link = NULL;
	return start;
}

struct node *nposition(struct node *start,int data,int position)
{
	struct node *p,*temp;
	int i;
	temp = (struct node*)malloc(sizeof(struct node)); 
	
	temp->info = data;
	
	if(position==1)
	{
		temp->link = start;
		start = temp;
		return start;
	}
	
	p = start;
	for(i=1; i<position-1 && p!=NULL; i++)
	{
		p=p->link;
	}
	
	if(p==NULL)
	{
		printf("Position Not Found");
	}
	else
	{
		temp->link = p->link;
		p->link = temp;
	}
	
	return start;
}


void disp(struct node *start)
{
	struct node *p;
	if(start ==NULL)
	{
		printf("List is Empty\n");
	}
	
	else
	{
		p=start;
		printf("List Is : ");
		while(p!=NULL)
		{
			printf("%d\t",p->info);
			p = p->link;
		}
		printf("\n");
	}
}

struct node *del(struct node *start,int data)
{
	struct node *temp,*p;
	if(start ==NULL)
	{
		printf("List is Empty\n");
		return start;
	};
	
	if(start->info==data)
	{
		temp = start;
		start = start->link;
		free(temp);
		return start;
	}
	
	p = start;
	
	while(p->info!=NULL)
	{
		if(p->link->info ==data)
		{
			temp = p->link;
			p->link = temp->link;
			free(temp);
			return start;
		}
		p= p->link;
	}
	
	return start;
}