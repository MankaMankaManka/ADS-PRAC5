#include "RecursiveBinarySearch.h"
bool RecursiveBinarySearch::search(std::vector<int> list, int number){
    return doSearch(list, number, 0, list.size());
}

bool RecursiveBinarySearch::doSearch(std::vector<int> list, int number, int start, int end){
    int currentPosition=((end+start)/2);
    if (list[currentPosition]==number){
        return true;
    }
    if (list[currentPosition]<number){
        if (start<currentPosition){
            return doSearch(list, number, currentPosition+1, end);
        } else {return false;}
        
    }
    if (list[currentPosition]>number){
        if (start<currentPosition){
            return doSearch(list, number, start, currentPosition-1);
        } else {return false;}
    }
    return false;
}
