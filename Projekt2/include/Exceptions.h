//
// Created by mateu on 02.02.2022.
//

#ifndef BACKPACK_EXCEPTIONS_H
#define BACKPACK_EXCEPTIONS_H
#include <exception>
#include <iostream>
#include <fstream>
#include "backpack.h"
#endif //BACKPACK_EXCEPTIONS_H

class File_Exception : public std::exception{
private:
    std::string txt;
    std::fstream* file;

public:
    File_Exception(std::string const &txt, std::fstream* const file);
    std::fstream* get_file() const;
    const std::string* what();
};
