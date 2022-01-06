#include "MyQueue.h"
#include <iostream>
#include <stdlib.h> 

using namespace std;

//Construtor, podendo receber como argumento o tamanho inicial da pilha.
	MyQueue::MyQueue(int size){
		Fila *q;
    	q = (Fila *)malloc(sizeof(Fila));
    	q -> vetor = (type *)malloc(size + 1 * sizeof(type));
    	q -> ini = 0;
    	q -> fim = 0;
	}

//Construtor padr ~ao da pilha.
	MyQueue::MyQueue(){
		Fila *q;
    	q = (Fila *)malloc(sizeof(Fila));
    	q -> vetor = (type *)malloc(10 + 1 * sizeof(type));
    	q -> ini = 0;
    	q -> fim = 0;
	}

//Verifica se a pilha est ´a vazia.
	bool MyQueue::isEmpty(){
		 if (q->ini == q->fim){
			 return true;
		 }
		 return false;
	}

//Verifica se a pilha est ´a cheia.
	bool MyQueue::isFull(){
		 if (Fila.ini == Fila.fim){
			 return true;
		 }
		 return false;
	}

//Retorna o tamanho da pilha.
	int MyQueue::size(){
	     return tam;	
	} 

//Retorna uma referˆencia para o elemento do topo da pilha.
	int MyStack::front(){
		return topo;
	}
	
//Retorna uma referˆencia para o elemento do topo da pilha.
	int MyStack::back(){
		return topo;
	}

//Insere um elemento na pilha.
	void MyQueue::enqueue(int element){
		if(isFull()!= true){
			topo++;
  			pilha[topo] = element;
		}
		else{
			cout << "StackOverflow";
		}
		
	}


//Remove e retorna o elemento do topo da pilha.
	int MyQueue::dequeue(){
		int aux;
		
		if(isEmpty()!= true){
			aux = pilha[topo];
  			topo--;
  			return aux;
		}
		cout << "StackUnderflow";
		return NULL;
	}

//Torna a pilha vazia.
	void MyQueue::clear(){
		for (int i = 0; i <= topo; i++){
				pop();
			}
			topo = -1;
	} 

//imprime a pilha.
	void MyQueue::print(){
		for(int i = topo; i>=0; i--){
  	  		cout << pilha[i] << "\n";
		}
	} 