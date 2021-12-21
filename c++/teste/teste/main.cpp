#include <iostream>
#define TAMANHO 6

using namespace std;

typedef struct{
        int Itens[TAMANHO];
        int Topo;
} Pilha;

void Iniciar_Pilha (Pilha *p){
    p -> Topo = -1;
}

bool Pilha_Vazia (Pilha *p){
    return p -> Topo == -1;
}

bool Pilha_Cheia (Pilha *p) {
    return p -> Topo == TAMANHO -1;
}

void Push (Pilha *p, int x){
    if(Pilha_Cheia(p) == true){
        cout << "Overfolw: Pilha cheia! \n";
    } else {
        p -> Topo++;
        p -> Itens[p -> Topo] = x;
    }
}

int Pop (Pilha *p){
    int aux;
    if(Pilha_Vazia(p) == true){
        cout << "Underflow: Pilha Vazia! \n";
    } else{
        aux = p -> Itens[p -> Topo];
        p -> Topo--;
        return aux;
    }
}

void Pilha_Preencher(Pilha *p){
    for(int i = 0; i < TAMANHO; i++){
        Push(p, i);
    }
}

void Pilha_Impressao(Pilha *p){
    for(int i = 0; i <= p ->Topo ; i++){
        cout << p -> Itens[i] << "\n";
    }
    cout << "\n \n";
}

void Pilha_Inverter (Pilha *p1, Pilha *p2){
    for(int i = 0; i < TAMANHO; i++){
        Push(p2, Pop(p1));
    }

    p1 ->Topo = p2 ->Topo;
}

int main() {
    Pilha *p1 = (Pilha*)malloc(sizeof(Pilha));
    Iniciar_Pilha(p1);
    Pilha_Preencher(p1);
    Pilha_Impressao(p1);

    Pilha *p2 = (Pilha*)malloc(sizeof(Pilha));
    Iniciar_Pilha(p2);
    Pilha_Inverter(p1, p2);
    Pilha_Impressao(p2);

    return 0;
}
