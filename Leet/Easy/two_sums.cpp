//
// Created by chava on 26/09/23.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSums(vector<int>& nums, int target){
    unordered_map<int, int> hash;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if (hash.count(complement)){
            ans.push_back(i);
            ans.push_back(hash[complement]);
            return ans;
        } else {
            hash[nums[i]]=i;
        }
    }
    return ans;
};

int main(){
    vector<int> nums = {3,2,4};
    vector<int> ans = twoSums(nums,5);
    for (auto& x : ans) {
        cout << x << " ";
    }
    return 0;
}