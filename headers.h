/*--------------------------------------------------------------------------*
 *--------*
 *----headers.h----*
 *--------*
 *----    This file declares common headers used through-out the----*
 *----the singly-linked list sorting program.----*
 *--------*
 *----------------------------------------*
 *--------*
 *----Version 1a2020 January 5Joseph Phillips----*
 *--------*
 *--------------------------------------------------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include "Node.h"


extern struct Node*insertionSort(struct Node*nodePtr );
extern struct Node*mergeSortWrapper(struct Node*nodePtr );
extern void print (const struct Node*nodePtr);

//  YOUR CODE HERE
