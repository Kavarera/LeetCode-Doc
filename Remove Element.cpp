#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
	return nums.size();
}

int main(){
	vector<int> s = {3,2,2,3};
	cout<<removeElement(s,2);
}
