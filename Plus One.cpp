#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vector<int> plusOne(vector<int>& digits) {
    
//     string a = "";
//     for(int i=0;i<digits.size();i++){
//         a+=to_string(digits[i]);
//     }
//     unsigned long long b = stoull(a);
//     b+=1;
//     vector<int> h;
//     while(b!=0){
//         h.insert(h.begin(),b%10);
//         b /=10;
//     }
//     return h;   
// }
vector<int> plusOne(const std::vector<int>& digits) {
    vector<int> result = digits;
    
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int sum = digits[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {
        result.insert(result.begin(), carry);
    }

    return result;
}
int main(){
    vector<int> a = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> c = plusOne(a);
    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }
}