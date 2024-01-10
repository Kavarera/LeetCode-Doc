#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
	//konstanta
	if(s.size()%2==1){
		return false;
	}
	stack<char> listKarakter;
	unordered_map<char,char> kunci;
	kunci[')']='(';
	kunci['}']='{';
	kunci[']']='[';
	for(char n:s){
		if(n=='('||n=='{'||n=='['){
			listKarakter.push(n);
		}
		else if(listKarakter.empty()){
			return false;
		}
		else{
			if(listKarakter.top()==kunci[n]){
				listKarakter.pop();
				continue;
			}
			return false;
		}
	}
	return listKarakter.empty();
}

int main(){
	cout<<isValid("){");
}
