//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_LIST_H
#define BACKPACK_LIST_H

#include "Node.h"

/**
 * @brief container for given class, LIFO list
 * @tparam T type of data to storage
 */
template <class T>
class List{
protected:
    Node<T> *head;

public:

    List();
    ~List();

    /**
     * @brief adds node as head
     * @param node pointer to new head
     */
    void push(Node<T>* node);

    /**
     * @brief adds item as new head
     * @param node pointer to data for new head
     */
    void push(T* const t);

    /**
     * @brief returns pointer to head
     * @return pointer to node of head
     */
    Node<T>* get_head() const;

    /**
     * @brief returns pointer to head data, sets new head to next of current head
     * @return pointer to data, if list empty returns nullptr
     */
    T* pop();

    /**
     * @brief delete head without returning it, sets new head to next of current head
     */
    void delete_head();

    /**
     * @brief delete everything from list without returning
     */
    void clean();

    /**
     *
     * @param rhs
     */
    void operator+(T *rhs);

    /**
     *
     * @param rhs
     */
    void operator+(Node<T> *rhs);

    /**
    * @brief Finds instance of object and deletes node with it
    * @param rhs pointer to data to delete
    */
    void operator-(T* const rhs);

};
#endif //BACKPACK_LIST_H

/*********************************************************************************************************************/

template <class T>
List<T>::List(){
    this -> head = nullptr;
}

template <class T>
List<T>::~List(){
    while(this -> head != nullptr){
        delete_head();
    }
    //cout<<"List: Allo--\n";
}

template <class T>
Node<T>* List<T>::get_head() const{
    return this -> head;
}

template <class T>
void List<T>::push(Node<T>* node){
    node -> set_next(this -> head);
    this -> head = node;
}

template <class T>
void List<T>::push(T* const t){
    Node<T>* tmp = new Node<T> (t, this->head);
    this -> head = tmp;
}

template <class T>
T* List<T>::pop(){
    if(head == nullptr)
        return nullptr;

    Node<T>* tmp_node = this -> head;
    T* tmp_t = this -> head -> get_t();

    this -> head = this -> head -> get_next();

    tmp_node ->set_t();
    delete tmp_node;

    return tmp_t;
}


template <class T>
void List<T>::operator+(T *rhs){
    Node<T>* tmp = new Node<T>(rhs, this -> head);
    this -> head = tmp;
}

template <class T>
void List<T>::operator+(Node<T> *rhs){
    this->push(rhs);
}


template <class T>
void List<T>::operator-(T* const rhs){

    if(this -> head == nullptr)
        return;

    Node<T>* tmp = this -> head;
    if(tmp -> get_t() == rhs){
        this -> head = this -> head -> get_next();
        delete tmp;
        return;
    }

    Node<T>* tmp_prev = tmp;
    tmp = tmp -> get_next();

    while (tmp != nullptr){

        if(tmp -> get_t() == rhs){
            tmp_prev -> set_next(tmp -> get_next());
            delete tmp;
            return;
        }

       tmp_prev = tmp;
       tmp = tmp-> get_next();
    }
}

template <class T>
void List<T>::delete_head(){
    if(this -> head  == nullptr)
        return;

    Node<T>* tmp = this -> head;
    this -> head = tmp -> get_next();
    delete tmp;
}

template <class T>
void List<T>::clean(){
    while(this -> head != nullptr)
        this -> delete_head();
}
