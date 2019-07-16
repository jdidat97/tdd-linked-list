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

size_t LinkedList_Count(LinkedList_t *instance)
{
   LinkedListNode_t *current = instance->head;
   size_t count = 0;
   while(current != NULL)
   {
      count++;
      current = current->next;
   }
   return count;
}

void LinkedList_PushFront(LinkedList_t *instance, LinkedListNode_t *node)
{
   node->next = instance->head;
   instance->head = node;
}

void LinkedList_PushBack(LinkedList_t *instance, LinkedListNode_t *node)
{
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
