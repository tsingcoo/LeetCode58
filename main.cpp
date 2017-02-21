#include <iostream>
#include "solution.h"

int main() {
    std::string str = "a ";
    Solution s;
    int res;
    res = s.lengthOfLastWord(str);
    std::cout << res << std::endl;

    return 0;
}