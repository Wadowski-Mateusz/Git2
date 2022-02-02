//
// Created by mateu on 28.01.2022.
//

#ifndef BACKPACK_FOOD_H
#define BACKPACK_FOOD_H
#include "Item.h"

class Food : public Item{
protected:
    std::string expiry_date;
    int const id = food;
public:

    Food();

    Food(std::string const &n, double const &size = 1, std::string const &expiry_date = "none");

    ~Food();

    /**
     * @brief returns expiry date of this object
     * @return string with expiry_date
     */
    std::string get_expiry_date() const;

    /**
     * @brief changes expiry date to given
     * @param expiry_date new expiry_date string
     */
    void set_expiry_date(std::string const &expiry_date);

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


#endif //BACKPACK_FOOD_H
