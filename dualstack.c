#define SIZE 10
#include<stdio.h>
struct stack{
	int top1;
	int top2;
	int st[50];
}s;
 
void isFull()
{
	if(s.top1==s.top2-1)
		printf("\nStack is full");
	else	
		printf("\nStack is not full");
}

void isEmpty()
{
	if(s.top1==-1 && s.top2==SIZE-1)
		printf("\nStack is empty");
	else
		printf("\nStack is not empty");
}

void pushLeft()
{
	int n;
	if(s.top1==s.top2-1)
		printf("\nThe array is full.Cannot push any more element");
	else
	{
		printf("\nEnter the number to be pushed--");
		scanf("%d",&n);
		s.top1++;
		s.st[s.top1]=n;
		printf("\nThe element was successfully pushed\n");
	}
}

void popLeft()
{
	if(s.top1==-1 && s.top2==SIZE-1)
		printf("The stack is empty. No element can be popped\n");
	else
		{
			int pe;
			pe=s.st[s.top1];
			printf("\nThe element popped=%d",pe);
			s.top1--;
		}
}

void pushRight()
{
	int n;
	if(s.top1==s.top2-1)
		printf("\nThe array is full.Cannot push any more element");
	else
	{
		printf("\nEnter the number to be pushed--");
		scanf("%d",&n);
		s.top2--;
		s.st[s.top2]=n;
		printf("\nThe element was successfully pushed\n");
	}
}

void popRight()
{
	if(s.top1==-1 && s.top2==SIZE-1)
		printf("The stack is empty. No element can be popped\n");
	else
		{
			int pe;
			pe=s.st[s.top2];
			printf("\nThe element popped=%d",pe);
			s.top2++;
		}
}

void display()
{
	int i;	
	if(s.top1==-1 && s.top2==SIZE-1)
		printf("The stack is empty");
	else
	{
		printf("\nThe elements present in the stack are--\n");				
		for(i=s.top2;i>=0;i--)
			printf("\n|%d|",s.st[i]);
	}		
}

int main()
{
	int ch;
	s.top1=-1;
	s.top2=SIZE-1;
	do{
		printf("\n 1.isFull()\n 2.isEmpty()\n 3.PushtoLeftSide()\n 4.PopfromLeftSide()\n 5.PushToRightSide()\n 6.PopfromRightSide()\n 7.Display()\n 8.Exit()\n");
		printf("\nEnter your choice--");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: isFull();break;
			case 2: isEmpty();break;
			case 3: pushLeft();break;
			case 4: popLeft();break;
			case 5: pushRight();break;
			case 6: popRight();break;
			case 7: display();break;
			case 8: return(0);break;
			default: printf("Wrong choice\n");
		}
	}while(ch!=8);
	return 0;
}
			
