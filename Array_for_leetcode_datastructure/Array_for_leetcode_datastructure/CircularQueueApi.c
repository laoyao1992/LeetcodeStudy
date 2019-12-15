#include <stdio.h>
#include "CircularQueueApi.h"



/** Initialize your data structure here. Set the size of the queue to be k. */

bool myCircularQueueCreate(int k, MyCircularQueue* pQueue) {
	pQueue->pBase = (int*)malloc(sizeof(int) * k);
	if (pQueue->pBase == NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
		
	pQueue->front = 0;
	pQueue->rear  = 0;
	pQueue->size  = k;
	return true;
}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (myCircularQueueIsFull(obj))
	{
		return false;
	}
	else
	{
		obj->pBase[obj->rear] = value;
		obj->rear = (obj->rear + 1) % (obj->size);
		return true;
	}

}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		return false;
	}
	else
	{
		printf("出队成功，val = %d\n", obj->pBase[obj->front]);
		obj->front = (obj->front + 1) % (obj->size);
		return true;
	}
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		printf("队列为空\n");
		return false;
	}
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
	{
		printf("队列为空\n");
		return false;
	}
	printf("the rear value is %d\n", obj->pBase[obj->rear]);
}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	if ((obj->front) == (obj->rear))
		return true;
	else
		return false;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
	if ((obj->rear + 1) % (obj->size) == obj->front)
		return true;
	else
		return false;
}


void traverse_myCircularQueue(MyCircularQueue* obj) {
	int i = obj->front;
	while (i != obj->rear)
	{
		printf("the %d node is %d\n", i, obj->pBase[i]);
		i = (i + 1) % (obj->size);
	}

}