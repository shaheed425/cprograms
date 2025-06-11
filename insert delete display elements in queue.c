/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full! Cannot enqueue %d\n", value);
    } else {
        if (front == -1)
            front = 0; 
        rear++;
        queue[rear] = value;
        printf("%d enqueued to the queue.\n", value);
    }
}

// Function to remove 
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Cannot dequeue.\n");
    } else {
        printf("%d dequeued from the queue.\n", queue[front]);
        front++; 
        // If the queue becomes empty after dequeue, reset front and rear
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue(); // This will show queue is empty

    return 0;
}
