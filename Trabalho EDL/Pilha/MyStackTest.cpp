#include <iostream>
#include <stdlib.h> 
#include "MyStack.h"

using namespace std;

int main(){
	
	MyStack teste;
	teste.isEmpty();
	teste.isFull();
	teste.push(8);
	teste.push(4);
	teste.print();
	cout << teste.top() << "\n \n";
	teste.clear();
	cout << teste.top() << "\n \n";;
	
	cout << "\n \n";
	teste.pop();
	
	for(int i =0; i < 10; i++){
		teste.push(i);
	}
	
	cout << "\n \n";
	teste.print();
	teste.push(4);
 
	return 0;
}