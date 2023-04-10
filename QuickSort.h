#include "Sort.h"
#ifndef QUICKSORT_H
#define QUICKSORT_H
class QuickSort : public Sort
{
public:
    int partition(std::vector<int>& nums,int low, int high);
    void doQuickSort(std::vector<int>& nums,int low, int high);
    std::vector<int> quickSort(std::vector<int>& nums);
    int setPivot(std::vector<int>&nums,int low, int high);
};
#endif
