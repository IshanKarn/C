#define MAX 5
int queue[MAX];
int front =-1, rear = -1;

void insert(int item);
void del();
void traverse();

void main()
{
	int ch,value;
	
	do
	{
	printf("\n1. Insertion\n");
	printf("2. Deletion \n");
	printf("3. Traverse\n");
	printf("4. Exit\n");
	
	printf("Enter Your Choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Ente Value\n");
			scanf("%d",&value);
			insert(value);
			break;
			
		case 2:
			del();
			break;
			
		case 3:
			traverse();
			break;
			
		case 4:
			printf("Exit.");
			break;
		default:
			printf("Wrong Choice!");
			break;
		}
	}
}

void insert(int value)
{
	if((front == 0 && rear == MAX - 1) || (front == rear+1))
      printf("\nCircular Queue is Full! Insertion not possible!!!\n");
   else{
      if(rear == MAX-1 && front != 0)
	 rear = -1;
      queue[++rear] = value;
      printf("\nInsertion Success!!!\n");
      if(front == -1)
	 front = 0;
   }
}
void del()
{
	if(front == -1 && rear == -1)
      printf("\nCircular Queue is Empty! Deletion is not possible!!!\n");
   else{
      printf("\nDeleted element : %d\n",queue[front++]);
      if(front == MAX)
	 front = 0;
      if(front-1 == rear)
	 front = rear = -1;
   }
	
}
void traverse()
{
	if(front == -1)
      printf("\nCircular Queue is Empty!!!\n");
   else{
      int i = front;
      printf("\nCircular Queue Elements are : \n");
      if(front <= rear){
	 while(i <= rear)
	    printf("%d\t",queue[i++]);
      }
      else{
	 while(i <= MAX - 1)
	    printf("%d\t", queue[i++]);
	 i = 0;
	 while(i <= rear)
	    printf("%d\t",queue[i++]);
      }
   }
}