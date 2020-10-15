#include<iostream>
#include "Queue.hh"

int main()
{
    Queue* queue{new Queue()};

    queue->Add(new Book("libro bonito", "autor feito"));
    queue->Add(new Book("libro 2", "autor 2"));
    queue->Add(new Book("libro 3", "autor 3"));

    std::cout << "Lista de elementos en la cola" << std::endl;
    std::cout << std::endl;
    queue->Print();
    std::cout << std::endl;

    std::cout << "nuevo eliminado" << std::endl;

    queue->Pop();

    queue->Print();

    std::cout << std::endl;
    std::cout << "nuevo agregado" << std::endl;
    queue->Add(new Book("libro 4", "autor 4"));

    queue->Print();

    delete queue;

    std::cin.get();

    return 0;
}