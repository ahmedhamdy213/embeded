#include "../Global.h"
#define QUEUE_LINKED
 
 #ifdef QUEUE_LINKED
typedef struct queue
{
     int front;
    int rear;
    int size;
    
    QueueEntry entry[maxQueue];
}Queue;

#else


typedef struct queuenode
{
    QueueEntry entry;
    struct queuenode* next;
}QueueNode;
typedef struct queue
{
    QueueNode* front;
    QueueNode* rear;
    int Size;
}Queue;

#endif



 void CreateQueue(Queue*);
void Appened(QueueEntry, Queue*);
void Serve(QueueEntry*, Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void ClearQueue(Queue*);
void TraverseQueue(Queue*, void (*) (QueueEntry));
