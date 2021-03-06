#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front=0;
int rear=0;


void enqueue();
void dequeue();
void size();
void display();
void front_ele();
void rear_ele();
int Isfull();
int Isempty();


void main()
{ int ch;
	while(1)
	{  printf("\n Operations on static Queue : \n");
       printf("1. Enqueue(Max 5) \n 2. Dequeue \n 3. Size \n 4. Display \n 5.Front_Value \n 6.Rear_Value \n 7.Exit \n");
	   scanf("%d",&ch);
     
		switch(ch)
		{case 1: enqueue();
				break;
		case 2:dequeue();
				break;
		case 3:size();
				break;
		case 4:display();
				break;
		case 5: front_ele();
				break;
		case 6:	rear_ele();
				break;
		case 7:exit(0);
				break;
		default: printf("Invalid choice\n");
			
		}
	
	}
		
}
void enqueue()
{ if(Isfull())
	{
		printf("Queue Overflow\n");
	}
 else
 {int ele;
  printf("Enter Element: ");
  scanf("%d",&ele);
  queue[rear++]=ele;
 }
	
}
int Isfull()
{
	if(rear==SIZE)
		return 1;
	else
		return 0;
}

void dequeue()
{if(Isempty())
	{
		printf("Queue Underflow\n");
	}
 else
 {int i;
  for(i=front;i<rear;i++)
  { queue[i]=queue[i+1];

  }
   rear--;
 }
	
}
int Isempty()
{ if(front==rear)
		return 1;
	else
		return 0;
	
}

void size()
{ int count=rear+1;
printf("Size of queue: %d",count);

}
void display()
{int i;
if(Isempty())
{
 printf("Queue is empty\n");	
	
}
else
{printf("Elements : ");
for(i=front;i<rear;i++)
{
	printf("%d ",queue[i]);
}
	
}
}
void front_ele()
{	if(Isempty())
	{
		 printf("Queue is empty\n");
	}
	else
	{
	printf(" Front Element: %d ",queue[front]);
	}
}
void rear_ele()
{if(Isempty())
	{
		 printf("Queue is empty\n");
	}
	else
	{
	printf(" Rear Element: %d ",queue[rear]);
	}
	
}
