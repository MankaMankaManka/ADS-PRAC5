#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

int main(){
std::vector<int> sampleOne= {1, 3, 5, 4, -5, 100, 7777, 2014};
std::vector<int> sampleTwo= {0, 3, 5, 4, -5, 100, 7777, 2014};
std::vector<int> sampleThree= {0, 3, 5, 4, -5, 100, 7777, 2014};
QuickSort a;
RecursiveBinarySearch b;
BubbleSort c;
c.bubbleSort(sampleThree);

a.quickSort(sampleOne);
if (b.search(sampleOne, 1)==1){
    std::cout<<"true ";
} else{
    std::cout<<"false ";
}
for (int i=0; i<sampleOne.size();i++){
    std::cout<<sampleOne[i]<<" ";
    }
    
a.quickSort(sampleTwo);
if (b.search(sampleTwo, 1)==1){
    std::cout<<"true ";
} else{
    std::cout<<"false ";
}
for (int i=0; i<sampleTwo.size();i++){
    std::cout<<sampleTwo[i]<<" ";
    }
}

