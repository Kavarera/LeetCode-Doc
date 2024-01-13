#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int lengthOfLastWord(string s) {
    bool isStart = false;
    int j = 0;
    // int j =0;
    for(int i=s.length()-1;i>=0;i--){
        isStart = isalpha(s[i]) ? true :false;
        if(isStart){
            j++;
        }
        else if(j>0){
            return j;
        }
    }
    return j;
}
// Hello World
int main(){
    cout<<lengthOfLastWord("Hello   World  ");
}