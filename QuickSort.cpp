#include "QuickSort.h"
 int QuickSort::partition(std::vector<int>& nums,int low, int high)
    {
        int i=low-1;
        int pivot=nums[high];
        for(int j=low;j<high;j++)
        {
             if(nums[j]<=pivot)
            {
                i++;
                std::swap(nums[i],nums[j]);
            }
        }
        std::swap(nums[i+1],nums[high]);
        return (i+1);
    }
    
    int QuickSort::setPivot(std::vector<int>&nums,int low, int high)
    {
        if(high-low>2){
            std::swap(nums[low+2],nums[high]);
            return partition(nums,low,high);
        }
        else{
            return partition(nums,low,high);
        }
    }

    void QuickSort::doQuickSort(std::vector<int>& nums,int low, int high)
    {
        if(low<high)
        {
            int pivot=setPivot(nums,low,high);
            doQuickSort(nums,low,pivot-1);
            doQuickSort(nums,pivot+1,high);
            
        }
    }

    std::vector<int> QuickSort::quickSort(std::vector<int>& nums) {
         doQuickSort(nums,0,nums.size()-1);
         return nums;
    }
