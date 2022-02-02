//
// Created by mateu on 29.01.2022.
//

#ifndef BACKPACK_DRINK_H
#define BACKPACK_DRINK_H

#include "Food.h"


class Drink : public Food{

protected:
    double volume;
    int const id = drink;
public:

    Drink(std::string const &name, double const &size, std::string const expiry_date = "none", double const volume = 500.0);
    ~Drink();

    /**
     * @brief returns volume of this object
     * @return this->volume
     */
    double get_volume() const;

    /**
     * @brief changes this->volume to given volume
     * @param volume double argument that this->volume have to be changed
     */
    void set_volume(double const &volume);

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


#endif //BACKPACK_DRINK_H
