#pragma once

#include <iostream>
#include <string>
#include <typeinfo>

template <typename T>
class TNode;

class Node
{
public:
    //wirtualny destruktor
    virtual ~Node() {}

    //szablonowa metoda sprawdzajaca zgodnosc typu obiektu z typem parametru
    template <typename T2>
    bool isType() const
    {
        if(typeid(*this).name() == typeid(TNode<T2>(T2(), NULL)).name())
            return true;
        else
            return false;
    }

    //wirtualna metoda zwracajaca adres kolejnego elementu w liscie
    virtual Node * next() const = 0;
private:

};

template <typename T>
class TNode : public Node
{
public:
    //wirtualny destruktor
    ~TNode() {}

    //konstruktor
    TNode(const T value, Node * next) : n_value(value), n_next(next) {}

    //metoda zwracajaca przechowywana wartosc
    T get() const {return n_value;}

    //metoda zwracajaca adres kolejnego elementu w liscie
    Node * next() const {return n_next;}

private:
    T n_value;
    Node * n_next;
};

class List
{
public:
    //konstruktor
    List() : n_head(NULL) {}

    //destruktor
    ~List()
    {
        while(n_head)
        {
            Node * temp = n_head;
            n_head = n_head->next();

            delete temp;
        }
    }

    //szablonowa metoda dodajaca element na poczatek listy
    template <typename T>
    void add(const T value)
    {
        TNode<T> * newHead = new TNode<T>(value, n_head);
        n_head = newHead;
    }

    //metoda zwracajaca adres pierwszego elementu listy
    const Node * head() const {return n_head;}

    //szablonowa metoda zwracajaca wartosc przechowywana przez node ktorego adres jest argumentem
    template <typename T>
    static T get(const Node * node)
    {
        return dynamic_cast<const TNode<T>*>(node)->get();
    }

private:
    Node * n_head;

};