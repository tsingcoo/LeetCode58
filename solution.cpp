//
// Created by 王青龙 on 21/02/2017.
//

#include <sstream>
#include "solution.h"

int Solution::lengthOfLastWord(std::string s) {
    int len=0;
    if(s.size() == 0){
        return len;
    }
    int tail = s.size()-1;
    while(tail>=0 && s[tail] == ' '){
        --tail;
    }
    while (tail>=0 && s[tail] != ' '){
        ++len;
        --tail;
    }
    return len;
}
