//
// Created by GDongLin on 16/01/2018.
//

#include "vector"

// https://leetcode.com/problems/two-sum/description/

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res = {};
        size_t len_i=nums.size(), j=0;
        for(int i=0; i< len_i; i++){
            for(int j=len_i-1; j>i; j-- ){
                int tag = nums[i]+nums[j];
                if(tag==target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};