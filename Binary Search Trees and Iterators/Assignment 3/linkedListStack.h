#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

# define TYPE      int
# define TYPE_SIZE sizeof(TYPE)

# define LINKLISTTYPE      void *
# define LL_SIZE sizeof(LINKLISTTYPE)


struct LinkedList;

struct LinkedList *createLinkedList();
void  deleteLinkedList(struct LinkedList *l);

int   isEmptyLinkedList(struct LinkedList *l);
void  pushLinkedList(struct LinkedList *l, LINKLISTTYPE val);
LINKLISTTYPE topLinkedList(struct LinkedList *l);
void  popLinkedList(struct LinkedList *l);

#endif

