//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_ITEM_H
#define BACKPACK_ITEM_H
#include <iostream>
extern int allo;

/**
 * @brief id of class
 */
enum class_id {
    item = 0,
    food,
    drink,
    other
};

class Item{
protected:
    std::string name;
    double size;
    int const id = item;
public:
    Item();

    //if not virtual ~, then only this ~ will be called for successors classes
    virtual ~Item();

    /**
     * @brief returns name of object
     * @return name of object as string
     */
    std::string get_name() const;

    /**
     * @brief returns size of object
     * @return size of object as double
     */
    double get_size() const;


    /**
     * @brief returns class id
     * @return class id
     */
    int get_id() const;

    /**
     * @brief change object name to new
     * @param name new name
     */
    void set_name(std::string const &name);

    /**
     * @brief changes maximum size of object
     * @param size new size
     */
    void set_size(double const &size);

    /**
     * @brief prints arguments of object
     * @param separator string to separate arguments
     */
    virtual void print(std::string const separator = ", ") const = 0;

    /**
     * @brief prints data to one string
     * @param separator string between terms
     * @return returns string with data
     */
    virtual std::string print_to_string(std::string const &separator = ",") = 0;

};


#endif //BACKPACK_ITEM_H
