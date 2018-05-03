//
// Created by GDongLin on 2018/4/30.
//

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty() || nums.size()==1){
            return int(nums.size());
        }
        int i{0}, j{1};
        while (j < nums.size()){
            if(nums[i]!=nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }
        return i+1;
    }
};
