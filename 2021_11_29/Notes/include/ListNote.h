//
// Created by mateu on 29.11.2021.
//

#ifndef __LISTNOTE_H__
#define __LISTNOTE_H__
//linia rozpoczyna sie przy pomocy jakiegos dziwnego ascii
#include "Note.h"

class ListNote : public Note{
private:
    static const int maxSize = 100;
    std::string content[maxSize];
public:

    ListNote();
    ListNote(std::string *const title);
    //TextNote(std::string *const title, std::string *const content);

    std::string getContent();
    void setContent(std::string *content);
};
#endif //__LISTNOTE_H__
