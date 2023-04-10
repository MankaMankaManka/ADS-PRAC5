#include "Sort.h"
#ifndef BUBBLESORT_H
#define BUBBLESORT_H
class BubbleSort : public Sort
{
    public:
        std::vector<int> bubbleSort(std::vector<int> list);
};
#endif