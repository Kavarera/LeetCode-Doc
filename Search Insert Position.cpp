#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    for(int i =0;i<nums.size();i++){
        if(target<=nums[i]){
            return i;
        }
    }
    return nums.size();
}
int main(){
    vector<int>a = {1,5,6,10,26};
    cout<<searchInsert(a,0);
}