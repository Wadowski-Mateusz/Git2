//
// Created by mateu on 29.11.2021.
//

#ifndef __NOTE_H__
#define __NOTE_H__

#include<iostream>

class Note {
protected:
    std::string title;
    int size;

public:
    std::string getTitle();
    void setTitle(const std::string title);

    virtual std::string getContent() = 0;
    virtual void setContent(const std::string *content) = 0;
};


#endif //__NOTE_H__
