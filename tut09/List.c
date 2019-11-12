// Interface for a list Abstract Data Type (ADT)
// Author: Finbar Berkon
// Date: November 2019

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "List.h"

// given a linked list, create a copy of the list, and return the head of the 
// new list. Note: the list should duplicate every node in memory not just
// provide duplicate pointers to the same list.
Node copy(Node head) {
    // TODO implement this function and change return value
    return head;
}

// given two lists, determine if they are identical, returning TRUE or FALSE 
// accordingly
int identical(struct node *head1, struct node *head2) {
    // TODO implement this function and change return value
    return FALSE;
}

// given a linked list, determine whether it is in strictly increasing order, 
// returning TRUE or FALSE accordingly
int ordered(struct node *head) {
    // TODO implement this function and change return value
    return FALSE;
}

// given two lists in strictly increasing order, return a new linked list (in 
// strictly increasing order) of the elements in both set1 and set2
Node set_intersection(Node set1, Node set2) {
    // TODO implement this function and change return value
    return set1;
}

// given two linked lists in strictly increasing order, return a new linked list
// (in strictly increasing order) of the elements in either set1 or set2 - no 
// duplicates (only include them once)
Node set_union(Node set1, Node set2) {
    // TODO implement this function and change return value
    return set1;
}