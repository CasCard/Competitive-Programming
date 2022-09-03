//
// Created by abel_ on 03-09-2022.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> map;
    vector<int> result;

    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];

        if(map.find(complement) != map.end()){
            cout<<i<<endl;
            result.push_back(map[complement]);
            result.push_back(i);
            return result;
        }
        map[nums[i]] = i;
    }
    return result;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}