// Interface for a list Abstract Data Type (ADT)
// Author: UNSW CSE & Finbar Berkon
// Date: November 2019

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

struct node {
    int data;
    struct node *next;
};

typedef struct node *Node;

Node copy(Node head);

int identical(Node head1, Node head2);

int ordered(Node head);

//============================================================================//
//=========== Functions to allow us to interact with the list ADT ============//

// creates a struct node with the given data value
// returns a pointer to this node
Node create_node(int dat);

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
Node create_list(char **argv, int size);

// prints out the list given the head of a list
void print_list(Node head);

// frees all the elements in a linked list
void free_list(Node head);

// return the number of items in the linked list
int num_items(Node head);
