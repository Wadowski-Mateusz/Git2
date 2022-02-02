//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_OTHER_H
#define BACKPACK_OTHER_H
#include "Item.h"

class Other : public Item{
protected:
    int value;
    int const id = other;
public:

    Other(std::string const &name, int const &value, double const &size = 1);
    ~Other();

    /**
     * @brief returns value
     * @return value as int
     */
    int get_value() const;

    /**
     * @brief changes value to new
     * @param value new value as int
     */
    void set_value(int const &value);

    /**
     * @brief prints arguments of object
     * @param separator string to separate arguments
     */
    void print(std::string const separator) const;

    /**
     * @brief prints data to one string
     * @param separator string between terms
     * @return returns string with data
     */
    std::string print_to_string(std::string const &separator);
};


#endif //BACKPACK_OTHER_H
