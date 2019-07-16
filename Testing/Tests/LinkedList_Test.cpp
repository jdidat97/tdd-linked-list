/*!
 * @file
 * @brief Tests for Linked List module.
 */

extern "C"
{
#include "LinkedList.h"
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "uassert_test.h"

TEST_GROUP(LinkedList)
{
   LinkedList_t instance;
   LinkedListNode_t node1, node2, node3;

   void setup()
   {
      LinkedList_Init(&instance);
   }

   void teardown()
   {
   }
};

TEST(LinkedList, MyFirstTest)
{
   FAIL("My first test is running!");
}

TEST(LinkedList, EmptyAfterInit)
{
   CHECK(0 == LinkedList_Count(&instance));
}

TEST(LinkedList, CountIncreasesAfterPushFrontOneNode)
{

   LinkedList_PushFront(&instance, &node1);

   CHECK(1 == LinkedList_Count(&instance));
}

TEST(LinkedList, CountIncreasesAfterPushFrontMultipleNodes)
{
   LinkedList_PushFront(&instance, &node1);
   LinkedList_PushFront(&instance, &node2);
   LinkedList_PushFront(&instance, &node3);

   CHECK(3 == LinkedList_Count(&instance));
}

TEST(LinkedList, CountIncreasesAfterPushBackOneNode)
{
   LinkedList_PushBack(&instance, &node1);

   CHECK(1 == LinkedList_Count(&instance));
}

TEST(LinkedList, CountIncreasesAfterPushBackMultipleNodes)
{
   LinkedList_PushBack(&instance, &node1);
   LinkedList_PushBack(&instance, &node2);
   LinkedList_PushBack(&instance, &node3);

   CHECK(3 == LinkedList_Count(&instance));
}

#if(0)
TEST(LinkedList, PopBackRemovesAndReturnsTheLastElementInTheList)
{
}

TEST(LinkedList, PopFrontRemovesAndReturnsTheFirstElementInTheList)
{
}

TEST(LinkedList, CountDecreasesWhenAnElementIsPoppedFromTheFrontOfAList)
{
}

TEST(LinkedList, CountDecreasesWhenAnElementIsPoppedFromTheBackOfAList)
{
}

TEST(LinkedList, CountDecreasesWhenANodeIsRemoved)
{
}

TEST(LinkedList, CanRemoveNodeThatIsntInList)
{
   LinkedListNode_t node;

   LinkedList_Init(&instance);
   LinkedList_Remove(&instance, &node);
}

IGNORE_TEST(LinkedList, CannotAddNodeThatIsAlreadyInTheList)
{
   LinkedListNode_t node;

   LinkedList_Init(&instance);
   LinkedList_PushFront(&instance, &node);
   CHECK_ASSERTION_FAILED(LinkedList_PushFront(&instance, &node));
   CHECK_ASSERTION_FAILED(LinkedList_PushBack(&instance, &node));
}

TEST(LinkedList, CountIsUpdatedCorrectlyAfterAddingMultipleNodes)
{
}

TEST(LinkedList, CanGetTheNodeAtAnIndex)
{
}
#endif
