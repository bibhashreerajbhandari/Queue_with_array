#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue_arr[MAX];
int rear = -1;
int front = -1;

void insert();
void delete();
void display();

void main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
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
        default:
            printf("Invalid input\n");
        }
    }
}


void insert()
{
    int add_item;
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter value to add to queue: ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_arr[rear] = add_item;
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted: %d\n", queue_arr[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_arr[i]);
        printf("\n");
    }
}
