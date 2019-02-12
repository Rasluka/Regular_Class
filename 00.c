#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert(int);
int del();
void display();
int cqueue[MAX];
int front=-1;
int rear=-1;
 
main()
{
      int choice, num;
      while(1)
      {
      printf("nEnter your choicen");
      printf("1. Insertn");
      printf("2. Deleten");
      printf("3. Displayn");
      printf("4. Exitn");
      scanf("%d",&choice);
      switch(choice)
      {                    case 1:
                         printf("Enter a number to be inserted : ");
                         scanf("%d",&num);
                         insert(num);
                         break;
                    case 2:
                         num=del();
                         break;
                    case 3:
                         display();
                         break;
                    case 4:
                         exit(1);
                    default:
                         printf("Invalid choicen");
      }
   }
}
 
void insert(int element)
{
     if((front==0 && rear==MAX-1) || (front==rear+1))
     {
              printf("Queue is fulln");
              return;
     }
     
     if(front==-1)
     {
     front = 0;
     }
     
     if(rear==MAX-1)
     {
     rear=0;
     }
     else
     {
     rear=rear+1;
     }
     
     cqueue[rear]=element;
}
 
int del()
{
    int element;
    
    if(front==-1)
    {
                 printf("Queue is Emptyn");
                 return;
    }
    element = cqueue[front];
    
    if(front==rear)
    {
                   front=-1;
                   rear=-1;
    }
    
    else if(front==MAX-1)
    {
    front=0;
    }
    
    else
    {
    front = front + 1;
    }
    printf("%d has been deleted n",element);
    return element;
}
 
void display()
{
   if(front==-1)
   {
   printf("Queue is Emptyn");
   return;
   }
 
  int i;
   i=front;
   if(front<=rear)
   {
                  while(i<=rear)
                  printf("%d ",cqueue[i++]);
   }
   
   else {
   
      
       while(i<=MAX-1)
       printf("%d  ",cqueue[i++]);
 
       i=0;
       while(i<=rear)
       printf("%d   ",cqueue[i++]);
      
       }
 
}
