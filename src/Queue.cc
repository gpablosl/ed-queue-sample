#include "Queue.hh"
#include <iostream>

Queue::Queue(){}

Queue::~Queue()
{
   if(!IsEmpty())
   {
       Node* current = first;
       while (current)
       {
           Pop();
           current = first;
       }
   }
   else
   {
       std::cout << "La cola esta vacia" << std::endl;
   }
   
}

void Queue::Add(Book* book)
{
    Node* node{new Node(book)};
    //checar si esta vacia
    if(IsEmpty())
    {
        first = node;
        last = node;
    }
    else
    {
        last->next = node;
        last = node;
    }
}

bool Queue::IsEmpty() const
{
    return !first; // pregunta si no existo osea si estoy null
}

Node* Queue::Peek() const
{
    if (IsEmpty())
    {
        return nullptr;
    }
    else
    {
        return first;   
    }
}

void Queue::Pop()
{
    Node* temp = first;
    first = temp->next;
    delete temp;
}

void Queue::Print()
{
    Node* temp = first;

    if(IsEmpty())
    {
        std::cout << "La cola esta vacia" << std::endl;
        return;
    }

    while (temp)
    {
        std::cout << "Nombre del libro" << temp->book->GetName() << std::endl;
        std::cout << "Nombre del autor" << temp->book->GetAuthor() << std::endl;
        std::cout << std::endl;

        temp = temp->next;
    }
    
}