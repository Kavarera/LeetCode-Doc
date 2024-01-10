#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
			unordered_map<int,int> numberMap;
			for(int i=0;i<nums.size();i++){
				int k = target-nums.at(i);
				if(numberMap.find(k)!=numberMap.end()){
					return {numberMap[k],i};
				}
				else{
					numberMap[nums[i]]=i;
				}
			}
		}
int main(){
	vector<int> nums = {2, 7, 11, 15};
	vector<int> tes = twoSum(nums,9);
	cout<<tes.at(0)<<tes.at(1);
}
