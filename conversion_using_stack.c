#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 20
struct stack
{
 int top;
 int a[10];
}s;
void binarytodecimal();
void decimaltobinary();
void push(int);
void display();
int pop();
void main()
{
 s.top=-1;
 int ch;
 do
 {
  printf("\n1.decimal to binary\n2.binary to decimal\n3.exit\n");
  scanf("%d",&ch);
  switch (ch)
  {
   case 1: decimaltobinary();
           break;
   case 2: binarytodecimal();
           break;
   case 3: exit(0);
  }
 }while(ch!=3);
}
void decimaltobinary()
{
 int dec,r,bin=0,i=0;
 printf("ENTER THE NUMBER TO BE CONVERTED");
 scanf("%d",&dec);
 while(dec!=0)
 {
  r=dec%2;
  push(r);
  dec=dec/2;
 }
 display();
}
void binarytodecimal()
{
 int dec=0,c,r,bin,i=0;
 printf("ENTER THE NUMBER TO BE CONVERTED");
 scanf("%d",&bin);
 while(bin!=0)
 {
  r=bin%10;
  push(r);
  bin=bin/10;
 }
 while(s.top!=-1)
 { 
  c=pop();
  dec=dec+(c*pow(2,s.top));
  s.top--;
 }
printf("\nthe converted decimal is:%d",dec);
}
void push(int p)
{
   s.top++;
   s.a[s.top]=p;
}
void display()
{
 int i;
 for(i=s.top;i>=0;i--)
  printf("\n|%d|",s.a[i]);
} 
int pop()
{
 int delel;
 delel=s.a[s.top];
 return delel;
}
  
