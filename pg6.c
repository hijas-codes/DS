    #include<stdio.h>   
    #include<stdlib.h>  
    struct node   
    {  
        int data;   
        struct node *next;  
    };  
    struct node *front;  
    struct node *rear;   
    void insert();  
    void delete();  
    void display();  
    void main ()  
    {  
        int choice;   
        while(choice != 4)   
        {     
           
            printf("\n1.enqueue\n2.dequeue\n3.Display\n4.Exit\n");   
            scanf("%d",& choice);  
            switch(choice)  
            {  
                case 1:  
                insert();  
                break;  
                case 2:  
                delete();  
                break;  
                case 3:  
                display();  
                break;  
                case 4:  
                exit(0);  
                break;  
                default:   
                printf("\nEnter valid choice??\n");  
            }  
        }  
    }  
    void insert()  
    {  
        struct node *ptr;  
        int item;   
          
        ptr = (struct node *) malloc (sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
            return;  
        }  
        else  
        {   
            printf("\nEnter value?\n");  
            scanf("%d",&item);  
            ptr -> data = item;  
            if(front == NULL)  
            {  
                front = ptr;  
                rear = ptr;   
                front -> next = NULL;  
                rear -> next = NULL;  
            }  
            else   
            {  
                rear -> next = ptr;  
                rear = ptr;  
                rear->next = NULL;  
            }
            printf("inserted");  
        }  
    }     
    void delete ()  
    {  
        struct node *ptr;  
        if(front == NULL)  
        {  
            printf("\nUNDERFLOW\n");  
            return;  
        }  
        else   
        {  
            ptr = front;  
            front = front -> next;  
            free(ptr);  
        } 
        printf("deleted"); 
    }  
    void display()  
    {  
        struct node *ptr;  
        ptr = front;      
        if(front == NULL)  
        {  
            printf("\nEmpty queue\n");  
        }  
        else  
        {   printf("\nprinting values .....\n");  
            while(ptr != NULL)   
            {  
                printf("\n%d\n",ptr -> data);  
                ptr = ptr -> next;  
            }  
        }  
    }  
