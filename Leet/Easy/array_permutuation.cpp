//
// Created by chava on 26/09/23.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArrayMemoryEfficiency(vector<int> &nums) {
    {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] + n * (nums[nums[i]] % n);
        }
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / n;
        }
        return nums;
    }
}

vector<int> buildArrayTimeEfficiency(vector<int> &nums) {
        vector<int> ans;
        for (int i: nums) {
            ans.push_back(nums[i]);
        }
        return ans;
}

int main() {
    vector<int> nums = {1, 2, 4, 0, 3};
    vector<int> ans = buildArrayTimeEfficiency(nums);
    return 0;
};