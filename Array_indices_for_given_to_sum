/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order. */

//Here I have given a default array nums = {2, 7, 11, 15}

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target;
  cin>>target;
  vector<int> ans = {};

  int len = nums.size();
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (nums[i] + nums[j] == target) {
        ans.push_back(i);
        ans.push_back(j);
        break;
      }
    }
  }

  cout << "Indices of the two numbers that add up to the target: ";
  for (int index : ans) {
    cout << index << " ";
  }
  cout << endl;

  return 0;
}
