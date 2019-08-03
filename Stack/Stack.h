#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack{
    public:
    //Cria pilha
    Stack();

    //insere elemento no topo
    void UpStack(double k);

    //Remove elemento do topo
    //Pre-condicao pilha nao pode estar vazia
    void UnStack();

    //Testa se a pilha nao esta vazia
    bool Empty();

    //Retorna o elemento do topo da pilha
    //pre-condição:Pilha nao-vazia
    double Top();

    //testa se a pilha corrente é igual a x
    bool operator==(Pilha& x);

    //SObrescreve todos os elementos da pilha corrente por aqueles em x
    void operator=(Pilha& x);

    //destrutor
    ~Stack();
    private:
    double *elements_;
    int size_:
}