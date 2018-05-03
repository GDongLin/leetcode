//
// Created by GDongLin on 2018/5/1.
//

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {

        if (nums.empty() || nums.size() == 1) {
            return int(nums.size());
        }

        int i{0}, j{1}, count{0};
        while (j < nums.size()) {
            if (nums[i] == nums[j]) {
                count++;
                if (count < 2) {
                    nums[++i] = nums[j];
                }
            } else {
                nums[++i] = nums[j];
                count = 0;
            }
            j++;
        }
        return i + 1;

    }
};

//int main() {
//    Solution s;
//    vector<int> v{0, 0, 1, 1, 1, 1, 2, 3, 3};
//    s.removeDuplicates(v);
//}