#include <iostream>
#include <vector>
#include "QuickSort.h"


int main(){
QuickSort popo;
std::vector<int> numbers= {3,2,4};

     for (int i = 0; i < 10; i++){
        numbers.push_back(i);
}
std::vector<int> resullt = popo.quickSort(numbers);
for (int i = 0; i < 10; i++){
        resullt.push_back(i);
}
    for (int i = 0; i < resullt.size(); i++){
        std::cout<<resullt[i]<<"\n";
    }
}