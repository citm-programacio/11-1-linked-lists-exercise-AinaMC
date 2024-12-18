// 11.1 Linked List.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Tienen dos componentes, EL DATO que guarda la lista, EL PUNTERO que apunta al siguiente

#include <iostream>
using namespace std;

struct A
{
    int data;
    A* next;//Puntero al siguiente nodo
};
class Lista
{
private:
    int size;

public:
    A* inicio; //Creamos puntero apuntando al inicio

    Lista()//Constructor default
    {
        inicio = nullptr;
        size = 0;
    }

    void insert(const int& value) //Añadir espacio al final
    {
        //Creamos un nuevo nodo
        A* newNode = new A();
        newNode->data = value; //Este nuevo nodo tendra como valor el que le enviemos
        newNode->next = nullptr; //El siguiente valor esta vacio

        //Si al final esta vacio añadios nuevo nodo
        if (inicio == nullptr)
        {
            inicio = newNode;
        }
        else {
            newNode->next = inicio;
            inicio = newNode;
        }
        size++;
    }

    void print()
    {
        A* aux = inicio;
        while (aux != nullptr)
        {
            cout << aux->data << " ";//El aux apunta al valor que guarda
            aux = aux->next; //Ahora apuntara al siguiente hasta que sea nullptr
        }
    }
};
int main()
{
    //Insertar 5 elementos en diferentes posiciones e imprimir cada vez
    Lista a;
    a.insert(2);
    a.insert(5);
    a.insert(7);
    a.insert(3);
    a.insert(2);
    a.print();
}
