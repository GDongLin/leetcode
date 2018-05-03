//
// Created by GDongLin on 19/04/2018.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    static int removeElement(vector<int> &nums, int val) {
        int i{0}, j{0};
        while(i!=nums.size()){
            if(nums[i] == val){
                i++;
                continue;
            }
            nums[j] = nums[i];
            j++;
            i++;
        }
        return j;
    }
};

//int main(){
//    vector<int> nums = {0,1,2,2,3,0,4,2};
//    cout << Solution().removeElement(nums, 2) << endl;
//}