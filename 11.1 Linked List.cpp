// 11.1 Linked List.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Tienen dos componentes, EL DATO que guarda la lista, EL PUNTERO que apunta al siguiente

#include <iostream>
using namespace std;

class A
{
private:
    int data;
    A* next; //Puntero al siguiente nodo

public:
    void insert(const int& value, A*& position) //Añadir espacio al final
    {
        //Creamos un nuevo nodo
        A* newNode = new A();
        newNode->data = value; //Este nuevo nodo tendra como valor el que le enviemos
        newNode->next = nullptr; //El siguiente valor esta vacio

        //Si al final esta vacio añadios nuevo nodo
        if (position == nullptr)
        {
            position = newNode;
        }
        else {
            A* temp = position; //Creamos nodo tamps
            while (temp->next != nullptr)
            {
                temp = temp->next; //Recorremos la lista hasta el ultimo nodo
            }
            temp->next = newNode; //Enlazamos el neuvo nodo al final de nuestra lista
        }
    }
    void a(unsigned int position, const int& value)
    {
        
    }
    void print()
    {

    }
};
int main()
{
    A* head = nullptr; //Al iniciar la lista esta vacia
    //Insertar 5 elementos en diferentes posiciones e imprimir cada vez
    A a;
    a.insert(2, head);
    a.insert(5, head);
    a.insert(7, head);
    a.insert(3, head);
    a.insert(2, head);
}
