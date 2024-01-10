#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if(strs.size()<1||strs.size()>200){
		return "";
	}
	string current = strs.at(0);
	for(int i=1;i<strs.size();i++){
		int j=0;
		while(j<current.length()&&j<strs.at(i).length()&&current[j]==strs.at(i)[j]){
			j++;
		}
		current = current.substr(0,j);
		if(current.empty()){
			break;
		}
	}
	return current;
}

int main(){
	vector<string>s = {"flower","flow","flight"};
	cout<<longestCommonPrefix(s);
}
