#ifndef MINISPAN_HPP
#define MINISPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class MiniSpan {

    private:
        std::vector<int> _numbers;

    public:
        void addNumber(int n);
        const std::vector<int>& getNumbers() const;
        int shortestSpan();
        int longestSpan();
};




#endif