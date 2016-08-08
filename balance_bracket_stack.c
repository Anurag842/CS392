#include<stdio.h>
#include<string.h>
struct stack
{
char A[10];
int top;
}s;

int main()
{
char string[50];
s.top= -1;
printf("\nenter the series of brakets");
scanf("%s",string);
int len= strlen(string)-1;
while (len>=0)
{
if(string[len]=='(')
{
s.A[++s.top]= '(';
}
else
{
if(string[len]==')')
s.top--;
}
len--;
}
if(s.top==-1)
printf("\n yes, balanced brackets");
else
printf("\n no, not balanced brackets");
return 0;
}
