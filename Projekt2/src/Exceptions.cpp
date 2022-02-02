//
// Created by mateu on 02.02.2022.
//

#include "../include/Exceptions.h"

File_Exception::File_Exception(std::string const &txt, std::fstream* const file){
    this -> txt = txt;
    this -> file = file;
}

std::fstream* File_Exception::get_file() const{
    return this->file;
}

const std::string* File_Exception::what(){
    return &txt;
}