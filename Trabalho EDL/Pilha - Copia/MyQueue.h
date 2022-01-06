#ifndef _MYQUEUE_H_
#define _MYQUEUE_H_

class MyQueue {
	   public:
     	  MyQueue(int size);
	 	  MyQueue();
   	 	  bool isEmpty();
   	 	  bool isFull();
   	 	  int size();
   	 	  int front();
   	 	  int back();
   	 	  void enqueue(int element);
   	 	  int dequeue();
   	 	  void clear();
   	 	  void print();
	   	   
       private:
 		  typedef int type;
   	 	  typedef struct{
    			type *vetor;
    			int ini;
    			int fim;
			} Fila;
};
#endif
