#include <iostream>
#include <vector>

#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
class RecursiveBinarySearch
{
    public:
        bool search(std::vector<int> list, int number);
        bool doSearch(std::vector<int> list, int number, int start, int end);
};
#endif
