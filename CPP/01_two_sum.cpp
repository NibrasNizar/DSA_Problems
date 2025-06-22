//Two Sum problem in cpp empty function so i can fill it out and main function to test it
#include <iostream>
#include <unordered_map>
#include <utility>  
#include <vector>
using namespace std;

pair<int, int> two_sum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    for(int i = 0;i<nums.size();i++)
    {
        int complement = target - nums[i];
        if(map.find(complement) != map.end())
        {
            pair<int,int> res = {map[complement], i};
            return res;
        }
        else
        {
            map[nums[i]] = i;
        }        
    }
    return {-1,-1};
}

int main() {
    std::vector<int> numbers = {2, 7, 11, 15};
    int target = 18;
    auto result = two_sum(numbers, target);
    if (result.first != -1) {
        std::cout << "Two sum found at indices: " << result.first << " and " << result.second << std::endl;
    } else {
        std::cout << "No two sum solution found." << std::endl;
    }
    return 0;
}