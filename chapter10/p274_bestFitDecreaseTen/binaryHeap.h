#include <stdio.h>
#include <malloc.h>
#include "bestFixDecrease.h"

#define ElementType Box
#define ElementTypePtr BoxPtr

struct BinaryHeap;
typedef struct BinaryHeap BinaryHeap;
typedef struct BinaryHeap* BinaryHeapPtr;

void initElement(ElementTypePtr temp);
ElementTypePtr buildSingleElement();
void swap(ElementTypePtr x, ElementTypePtr y);
BinaryHeapPtr initBinaryHeap(int capacity);
void insertHeap(ElementType value, BinaryHeapPtr bh);
ElementTypePtr deleteMin(BinaryHeapPtr);
int isFull(BinaryHeapPtr bh);
int isEmpty(BinaryHeapPtr bh);
void percolateUp(int index, ElementTypePtr bh);
void percolateDownFromOne(int index, BinaryHeapPtr bh);
void printBinaryHeap(BinaryHeapPtr bh);
void printBinaryHeapFromZero(BinaryHeapPtr bh);

struct BinaryHeap 
{
	int capacity;
	int size;	
	ElementTypePtr *elements;		
};

BinaryHeapPtr bh;