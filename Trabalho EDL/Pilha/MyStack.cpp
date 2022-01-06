#include "MyStack.h"
#include <iostream>
#include <stdlib.h> 

using namespace std;

//Construtor, podendo receber como argumento o tamanho inicial da pilha.
	MyStack::MyStack(int size){
		tam = size;
		pilha = (int *)malloc(size * sizeof(int));
		topo = -1;
	}

//Construtor padr ~ao da pilha.
	MyStack::MyStack(){
		tam = 10;
	   	pilha = (int *)malloc(tam * sizeof(int));
		topo = -1;
	}

//Verifica se a pilha est ´a vazia.
	bool MyStack::isEmpty(){
		 if (topo == -1){
			 return true;
		 }
		 return false;
	}

//Verifica se a pilha est ´a cheia.
	bool MyStack::isFull(){
		 if (topo == tam -1){
			 return true;
		 }
		 return false;
	}

//Retorna o tamanho da pilha.
	int MyStack::size(){
	     return tam;	
	} 

//Retorna uma referˆencia para o elemento do topo da pilha.
	int MyStack::top(){
		return topo;
	}

//Insere um elemento na pilha.
	void MyStack::push(int element){
		if(isFull()!= true){
			topo++;
  			pilha[topo] = element;
		}
		else{
			cout << "StackOverflow";
		}
		
	}


//Remove e retorna o elemento do topo da pilha.
	int MyStack::pop(){
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
	void MyStack::clear(){
		for (int i = 0; i <= topo; i++){
				pop();
			}
			topo = -1;
	} 

//imprime a pilha.
	void MyStack::print(){
		for(int i = topo; i>=0; i--){
  	  		cout << pilha[i] << "\n";
		}
	} 