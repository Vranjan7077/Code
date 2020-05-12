#include<stdio.h>
#include<iostream>
using namespace std;
struct DynArrQue 
{
		int front,rear;
		int capacity;
		int *array;
};
struct DynArrQue *createDynQueue
{
	struct DynArrQue *Q=malloc(sizeof(struct DynArrQue));
	if(!Q)
	return NULL;
	Q->capacity=1;
	Q->front=Q->rear=-1;
	Q->array=malloc(Q->capacity *sizeof(int));
	if(!Q->array)
	return NULL;
	return Q;
}
int IsEmptyQue(struct DynArrQue *Q)
{
	return (Q->front==-1);//if the condition is true then 1 is returned else 0 is returned
}
int IsFullQue(struct DynArrQue *Q)
{
	return((Q->rear+1)%Q->capacity==Q->front);
}
void Enque(struct DynArrQue *Q,int data)
{
	if(IsFullQue(Q))
	resizeque(Q);
	Q->rear=(Q->rear+1)%Q->capacity;
	Q->array[Q->array]=data;
	if(Q->front==-1)
	Q->front=Q->rear;
}
void resizeque(struct DynArrQue *Q)
{
	int size=Q->capacity;
	Q->capacity=Q->capacity*2;
	Q->array=realloc(Q->array,Q->capacity);
	if(!Q->array)
	{
		printf("memory error:");
		return;
	}
	if(Q->front>Q->rear)
	{
		for(int i=0;i<Q->front;i++)
		{
			Q->array[i+size]=Q->array[i];
		}
		Q->rear=Q->rear+size;
	}
}

