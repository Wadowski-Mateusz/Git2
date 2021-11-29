//
// Created by mateu on 29.11.2021.
//

#include "../include/TextNote.h"

TextNote::TextNote(){
    content = "";
    title = "Nowa notatka";
}

TextNote::TextNote(std::string *const title){
    this->content = "";
    this->title = *title;
}

TextNote::TextNote(std::string *const title, std::string *const content){
    this->title = *title;
    this->content = *content;
}


std::string TextNote::getContent() {
    return content;
}

void TextNote::setContent(std::string *content){
    this->content = *content;
}