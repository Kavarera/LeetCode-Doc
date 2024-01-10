#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	unordered_map<int,int> listUnique;
	listUnique[nums[0]]=0;
	for(int i=1;i<nums.size();i++){
		//[1,1,2]
		if(listUnique.find(nums[i])!=listUnique.end()){ //ketemu
			nums.erase(nums.begin()+i);
			i = i-1;
		}
		else{//ga ketemu
			listUnique[nums[i]]=i;
		}
	}
	return listUnique.size();
}

int main(){
	vector<int> s = {0,0,1,1,1,2,2,3,3,4};
	cout<<removeDuplicates(s);
}
