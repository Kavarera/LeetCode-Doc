#include <iostream>

using namespace std;
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    unsigned int reversed =0;
    int original = x;
    while(original>0){
    	int num = original%10;
    	reversed = (reversed*10)+num;
    	original /=10;
	}
	return reversed == x ? true:false;
}
int main(){
	cout<<"Hasil "<<isPalindrome(1234567899);
}
