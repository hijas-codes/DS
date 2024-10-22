#include <stdio.h>
void main()
{
    int a[100],size,rear=-1,front=-1,value,ch,i,z=-1,val;
    void enqueue()
    {
        if(rear==size-1)
        {
            printf("queue is overflow");
        }
        else if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
            printf("enter the value to insert");
            scanf("%d",&value);
            a[rear]=value;
            printf("%d is inserted",a[rear]);
        }
    }
    void dequeue()
    {
        if(front==-1 && rear==-1)
        {
            printf("queue is empty");
        }
        else if(front==rear)
        {
            val=a[front];
            printf("deleted value is %d",val);
            front++;
        }
        else
        {
            val=a[front];
            printf("deleted value is %d",val);
            front++;
        }
    }
    void display()
    {
        if(front==-1 && rear==-1)
         {
            printf("queue is empty");
        }
        else
        {
            printf("queue elements are");
            for(i=front;i<=rear;i++)
            {
                printf("%d",a[i]);
            }
        }
    }
    printf("enter the size of queue");
    scanf("%d",&size);
    while(z=1)
    {
        printf("select any option 1.insert 2.delete 3.display");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
       	 enqueue();
       	 break;
        case 2:
        	dequeue();
        	break;
        case 3:
       	 display();
        	break;
        default:
        printf("invalid choice");
       }
       }
       }
       
    
