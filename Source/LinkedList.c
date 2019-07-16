/*!
 * @file
 * @brief Implementation of singly-linked list.
 */


#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

void LinkedList_Init(LinkedList_t *instance)
{
   instance->head = NULL;
}

int LinkedList_Count(LinkedList_t *instance)
{
   LinkedListNode_t *current = instance->head;
   int count = 0;
   while(current != NULL)
   {
      count++;
      current = current->next;
   }
   return count;
}

void LinkedList_PushFront(LinkedList_t *instance, LinkedListNode_t *node)
{
   node = (LinkedListNode_t *)malloc(sizeof(LinkedListNode_t));
   LinkedListNode_t *tempNode = instance->head;
   instance->head = node;
   node->next = tempNode;
}

void LinkedList_PushBack(LinkedList_t *instance, LinkedListNode_t *node)
{
   node = (LinkedListNode_t *)malloc(sizeof(LinkedListNode_t));
   node->next = NULL;

   if(instance->head == NULL)
   {
      instance->head = node;
   }
   else
   {
      LinkedListNode_t *current = instance->head;
      while(current->next != NULL)
      {
         current = current->next;
      }
      current->next = node;
   }
}
