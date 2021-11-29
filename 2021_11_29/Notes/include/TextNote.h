//
// Created by mateu on 29.11.2021.
//

#ifndef __TEXTNOTE_H__
#define __TEXTNOTE_H__
#include "Note.h"
class TextNote : public Note{
private:
    std::string content;
public:
    TextNote();
    TextNote(std::string *const title);
    TextNote(std::string *const title, std::string *const content);

    std::string getContent();
    void setContent(std::string *content);

};
#endif //__TEXTNOTE_H__
