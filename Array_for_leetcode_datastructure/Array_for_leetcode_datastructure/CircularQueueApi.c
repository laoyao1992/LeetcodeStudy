#include <stdio.h>
#include "CircularQueueApi.h"




/** Initialize your data structure here. Set the size of the queue to be k. */

MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue Queue;
	MyCircularQueue* pQueue;
	pQueue = &Queue;
	pQueue->pBase = (int*)malloc(sizeof(int) * 6);
	pQueue->front = 0;
	pQueue->rear  = 0;

}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {

}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {

}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {

}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {

}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {

}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {

}

void myCircularQueueFree(MyCircularQueue* obj) {

}
