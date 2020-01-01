#include <stdio.h>
#include "Linklist_study.h"

/** Initialize your data structure here. */

MyLinkedList* myLinkedListCreate() {
	MyLinkedList* pHead = (MyLinkedList*)malloc(sizeof(MyLinkedList));
	pHead->val = 0;
	pHead->next = NULL;
	return pHead;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* obj, int index) {
	int i = 0;
	while (NULL != obj)
	{
		i++;
		obj = obj->next;
		if (index == i)
		{
			if (obj == NULL)
				return -1;
			else
				return obj->val;
		}
	}
	return -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
	MyLinkedList* pNode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
	pNode->next = obj;
	obj->next   = NULL;
	pNode->val = val;
	return;
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
	MyLinkedList* pNode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
	obj->next = pNode;
	pNode->val = val;
	return;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
	MyLinkedList* pNode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
	int i = 0;
	while (NULL != obj)
	{
		i++;
		obj = obj->next;
		if (index == i)
		{
			if (obj == NULL)
			{
				printf("failed, in the end of list\n");
				return;
			}
			else
			{
				pNode->next = obj->next;
				obj->next = pNode;
			}
			
		}
	}
	return;
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
	int i = 0;
	while (NULL != obj)
	{
		i++;
		obj = obj->next;
		if (index == i)
		{
			if (obj == NULL)
			{
				printf("failed, in the end of list\n");
				return;
			}
			else
			{
				obj->next = obj->next->next;
			}

		}
	}
}

void myLinkedListFree(MyLinkedList* obj) {
	MyLinkedList* p = NULL;
	while (NULL != obj)
	{
		p = obj->next;
		free(obj);
		obj = p;
	}
	return;
}

int main()
{
	MyLinkedList* pHead = NULL;
	pHead = myLinkedListCreate();

}