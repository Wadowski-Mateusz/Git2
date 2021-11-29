//
// Created by mateu on 29.11.2021.
//
#include "../include/ListNote.h"

ListNote::ListNote(){
    title = "Nowa notatka";
    for(int i = 0; i < maxSize; i++)
        content[i] = "";
}

ListNote::ListNote(std::string *const title){
    this->title = *title;
    for(int i = 0; i < maxSize; i++)
        content[i] = "";
}

std::string ListNote::getContent() {
    std::string returnContent = "";

    for(int i = 0; i < size; i++)
        for(int j = 0; this->content[i][j] != '\0'; j++)
            //if(this->content[i][j] != 36)
                returnContent += this->content[j];
    return returnContent;
}

void ListNote::setContent(std::string *content){
    if(size < maxSize)
        this->content[++size] = *content;
    else
        std::cout<<"Brak miejsa w notatce\n";

}