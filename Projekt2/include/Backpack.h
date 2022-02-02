//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_BACKPACK_H
#define BACKPACK_BACKPACK_H
#include "List.h"
#include "Item.h"
#include <float.h>

/***************************************************************
 * A container for class Item based on List<class T>
 * Added and overrided functions and operands
 * Have limitet size
 **************************************************************/

class Backpack : public List<Item>{

private:
    double current_size;
    double max_size;

public:
    /**
     * @param max_size max size of backpack
     */
    Backpack(double const &max_size = DBL_MAX);

    ~Backpack();

    /**
     * @brief prints item at @no place counted from 0
     * @param separator1 character to separate terms of item
     * @param separator2 character to separate items
     * @return no return
     */
    void print(std::string const separator1 = "; ", std::string const separator2 = ", ") const;

    /**
     * @brief prints item at given index counted from 1
     * @param no number of place
     * @param separator character to separate terms of item
     * @return no return
     */
    void print(int const no, const std::string separator = ", ") const;

    /**
     * @brief prints numerated list of items
     * @param separator character to separate terms of item
     * @return no return
     */
    void print_enum(std::string const separator = ", ") const;


    /**
     * @brief returns current size of backpack
     * @return this -> current_size
     */
    double get_current_size() const;

    /**
     * @brief returns maximum size of backpack
     * @return this -> max_size
     */
    double get_max_size() const;

    /**
     * @brief returns Item on given position
     * @param no position of Item
     * @return returns pointer to looked item or nullptr if number is too big
     */
    Item* get_item(int const &no);

    /**
     * @brief sets new maximum size of backpack
     * @param max_size new max size
     * @return no return
     */
    void set_max_size(double const &max_size);

    /**
     * @brief adds item to container
     * @param item pointer to node to add
     */
    void push(Node<Item>* item);

    /**
     * @brief adds item to container
     * @param item pointer to item to add
     */
    void push(Item* const item);

    /**
     * @brief deletes and return head
     * @return pointer to head item
     */
    Item* pop();

    /**
     * @brief delete head without returning it
     */
    void delete_head();

    /**
     * @brief delete everything without returning
     */
    void clean();

    /**
     * @brief analog to push
     * @param rhs pointer to item to add
     */
    void operator+(Item *rhs);

    /**
     * @brief analog to push
     * @param rhs pointer to item to add
     */
    void operator+(Node<Item> *rhs);

    /**
     * @brief delete node with given pointer without returning
     * @param rhs pointer of item to delete
     */
    void operator-(Item* const rhs);

};

#endif //BACKPACK_BACKPACK_H
