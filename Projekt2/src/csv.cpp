//
// Created by mateu on 01.02.2022.
//

#include "../include/csv.h"

void separate(std::vector<std::string> &data, std::fstream &file){

    std::string tmp, term;
    int begin, end;

    while(file>>tmp){
        begin = 0;

        do{
            for(end = begin; tmp[end] != ',' && end < tmp.size(); end++){
            }

            term.resize(end-begin);

            for(int i = begin; i < end; i++)
                term[i-begin] = tmp[i];

            data.push_back(term);
            begin = end+1;
        } while(begin < tmp.length());

    }
}