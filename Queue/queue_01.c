#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void traverse(struct queue *q)
{
    for (int i = q->front; i < q->rear; i++)
    {
        printf("%d\n",q->arr[i]);
    }
    
}

bool isFull(struct queue *q)
{
    if(q->rear == q->size)
    {
        return true;
    }
    else {
        return false;
    }
    
}

bool isEmpty(struct queue *q)
{
    if(q->front == q->rear)
    {
        return true;
    }
    else {
        return false;
    }
}

void enqueue(struct queue *q, int value)
{
  if(isFull(q))
  {
      printf("queue overflow\n");
  }
  else {

      q->arr[q->rear] = value;
      q->rear = q->rear+1;

  }
}

int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("queue empty\n");
        exit(0);
    }
    else {
        int element;
        element = q->arr[q->front];
        q->front++;
        return element;
    }
}



int main()
{

    struct queue q;
    q.size = 5;
    q.front = 0;
    q.rear = 0;
    q.arr = (int*) malloc((q.size) * sizeof(int));

    enqueue(&q,5);
    enqueue(&q,10);
    enqueue(&q,15);
    enqueue(&q,20);
    enqueue(&q,25);
    
    printf("dequeue element is %d\n",dequeue(&q));
    printf("dequeue element is %d\n",dequeue(&q));
    printf("dequeue element is %d\n",dequeue(&q));
    printf("dequeue element is %d\n",dequeue(&q));
    printf("dequeue element is %d\n",dequeue(&q));
    printf("dequeue element is %d\n",dequeue(&q));


    traverse(&q);

}