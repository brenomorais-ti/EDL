#ifndef _MYSTACK_H_
#define _MYSTACK_H_

class MyStack {
	   public:
     	  MyStack(int size);
	 	  MyStack();
   	 	  bool isEmpty();
   	 	  bool isFull();
   	 	  int size();
   	 	  int top();
   	 	  void push(int element);
   	 	  int pop();
   	 	  void clear();
   	 	  void print();
	   	   
       private:
   	 	  int tam;
		  int *pilha;
		  int topo;	
};
#endif