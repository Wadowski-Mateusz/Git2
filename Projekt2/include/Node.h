//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_NODE_H
#define BACKPACK_NODE_H
#include <iostream>

extern int allo;

/**
 * @brief node of List<class T> container
 * @tparam T class to storage
 */

template <class T>
class Node{
protected:
    T *t;
    Node<T>* next;

public:

    Node(T* const t, Node<T>* next = nullptr);

    /**
    * @brief Destroys @Node object and @t object
    */
    ~Node();

    /**
     * @brief changes data
     * @param t new data
     */
    void set_t(T* const t = nullptr);

    /**
     * @brief sets new next node
     * @param next pointer to next node
     */
    void set_next (Node<T>* const next = nullptr);

    /**
     * @brief returns pointer to data
     * @return pointer to data as given class
     */
    T* get_t() const;

    /**
     * @brief returns next node
     * @return pointer to next node
     */
    Node<T>* get_next () const;

};

#endif //BACKPACK_NODE_H

template <class T>
Node<T>::Node(T* const t, Node<T>* next){
    this -> t = t;
    this -> next = next;
    allo++;
    //cout<<"Node: Allo++\n";
};

template <class T>
void Node<T>::set_next (Node<T>* const next){
    this -> next = next;
}

template <class T>
void Node<T>::set_t(T* const t) {
    this -> t = t;
}

template <class T>
Node<T>* Node<T>::get_next () const {
    return this -> next;
}

template <class T>
T* Node<T>::get_t() const {
    return this -> t;
}

/**
 * @brief Destroy Node<class T> and T* t objects
 *
 */
template <class T>
Node<T>::~Node(){
    //cout<<"destruktor node\n";
    delete this -> t;
    allo--;
    //cout<<"Node: Allo--\n";
}
