/*!
 * @file
 * @brief Implementation of singly-linked list.
 */

#include "LinkedList.h"
#include "stdio.h"
#include "stdlib.h"

void LinkedList_Init(LinkedList_t *instance) {
   instance->head = (LinkedListNode_t *)malloc(sizeof(LinkedListNode_t));
   instance->head->next = NULL;
}

int LinkedList_Count(LinkedList_t *instance) {
   LinkedListNode_t *node = instance->head;
   int count = 0;
   while(node->next != NULL) {
      count++;
      node = node->next;
   }
   return count;
}

void LinkedList_PushFront(LinkedList_t *instance, LinkedListNode_t *node) {
   node = (LinkedListNode_t *)malloc(sizeof(LinkedListNode_t));
   LinkedListNode_t *temp_node = instance->head;
   instance->head = node;
   node->next = temp_node;
}

void LinkedList_PushBack(LinkedList_t *instance, LinkedListNode_t *node) {
   node = (LinkedListNode_t *)malloc(sizeof(LinkedListNode_t));
   LinkedListNode_t *temp_node = instance->head;
   
   printf("first print\n");

   if(instance->head == NULL) {
      instance->head = node;
      return;
   }

   printf("second print\n");
   
   while(temp_node->next != NULL) {
      temp_node = temp_node->next;
   }
   temp_node->next = node;

   printf("third print\n");

   return;
}
