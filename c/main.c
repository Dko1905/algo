#include <stdio.h>

#include "ll.h"

LINKED_LIST(IntLinkedList, int);
DOUBLY_LINKED_LIST(IntDoublyLinkedList, int);

void testLinkedList(void);
void testDoublyLinkedList(void);

int main(void)
{
	testLinkedList();
	testDoublyLinkedList();

	return 0;
}

void testLinkedList(void)
{
	printf("TEST: LinkedList\n");
	/* Linked List */
	struct IntLinkedList_Node node0 = {0}, node1 = {0}, node2 = {0};
	struct IntLinkedList ll = {0};

	node0.data = 5;
	node0.next = &node1;

	node1.data = 10;
	node1.next = &node2;

	node2.data = 20;
	node2.next = NULL;

	ll.head = &node0;
	ll.len = 3;

	/* Go trough linked list. */
	size_t n = 0;
	for (struct IntLinkedList_Node *node = ll.head; node != NULL; node = node->next) {
		printf("%zu: %i\n", n++, node->data);
	}
	printf("\n");

}

void testDoublyLinkedList(void)
{
	printf("TEST: DoublyLinkedList\n");
	/* Doubly linked List */
	struct IntDoublyLinkedList_Node node0 = {0}, node1 = {0}, node2 = {0};
	struct IntDoublyLinkedList ll = {0};

	node0.data = 5;
	node0.prev = NULL;
	node0.next = &node1;

	node1.data = 10;
	node1.prev = &node0;
	node1.next = &node2;

	node2.data = 20;
	node2.prev = &node1;
	node2.next = NULL;

	ll.head = &node0;
	ll.tail = &node2;
	ll.len = 3;

	/* Go forwards trough list. */
	size_t n = 0;
	for (struct IntDoublyLinkedList_Node *node = ll.head; node != NULL; node = node->next) {
		printf("%zu: %i\n", n++, node->data);
	}
	printf("\n");

	/* Go backwards trough list. */
	n = ll.len;
	for (struct IntDoublyLinkedList_Node *node = ll.tail; node != NULL; node = node->prev) {
		printf("%zu: %i\n", n--, node->data);
	}
	printf("\n");

}
