#include <iostream>
#include <vector>
#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

int main(){
QuickSort a;
RecursiveBinarySearch b;
std::vector<int> numbers;
int input;
while (std::cin >> input){
    numbers.push_back(input);
}

a.quickSort(numbers);

if (b.search(numbers, 1)==1){
    std::cout<<"true ";
} else{
    std::cout<<"false ";
}
for (int i=0; i<numbers.size();i++){
    std::cout<<numbers[i]<<" ";
    }

}

