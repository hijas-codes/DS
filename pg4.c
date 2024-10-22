

#include <stdio.h>

#include <stdlib.h>

 

int *circularQueue;

int front = -1, rear = -1, MAX;

 

void enqueue() {

    int value;

    if ((front == 0 && rear == MAX - 1) || (rear + 1 == front)) {

        printf("Circular Queue is full..!\n");

    } else {

        printf("Enter the value to insert: ");

        scanf("%d", &value);

        if (front == -1) { 
            front = rear = 0;

        } else if (rear == MAX - 1 && front != 0) {

            rear = 0; 

        } else {

            rear++;

        }

        circularQueue[rear] = value;

        printf("%d is inserted into the circular queue.\n", value);

    }

}

 

void dequeue() {

    if (front == -1) {

        printf("Circular Queue is empty..!\n");

    } else {

        printf("%d is deleted from the circular queue.\n", circularQueue[front]);

        if (front == rear) {

        

            front = rear = -1;

        } else if (front == MAX - 1) {

            front = 0; 
        } else {

            front++;

        }

    }

}

 

void displayqueue() {

    if (front == -1) {

        printf("Circular Queue is empty..!\n");

    } else {

        printf("Circular Queue elements are: ");

        if (rear >= front) {

            for (int i = front; i <= rear; i++)

                printf("%d\t", circularQueue[i]);

        } else {

            for (int i = front; i < MAX; i++)

                printf("%d\t", circularQueue[i]);

            for (int i = 0; i <= rear; i++)

                printf("%d\t", circularQueue[i]);

        }

        printf("\n");

    }

}

 

int main() {

    int choice;

    



    printf("Enter the size of the circular queue: ");

    scanf("%d", &MAX);

 



    circularQueue = (int*)malloc(MAX * sizeof(int));

    if (circularQueue == NULL) {

        printf("Memory allocation failed.\n");

        return 1; 

    }

 

    do {

        printf("\nCircular Queue Menu\n");

        printf("1. Enqueue\n");

        printf("2. Dequeue\n");

        printf("3. Display \n");

        printf("4. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

 

        switch (choice) {

            case 1:

                enqueue();

                break;

            case 2:

                dequeue();

                break;

            case 3:

                displayqueue();

                break;

            case 4:

                free(circularQueue); 

                exit(0);

            default:

                printf("Invalid choice..!\n");

        }

 

    } while (1);

 

    return 0;

}

