#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s){
	if(s.length()<1||s.length()>15){
		return -1;
	}
	unordered_map<char,int> listKarakter = {
		{'I',1},//Bebas dimana aja (kiri[max 1] dan kanan[max 3])
		{'V',5},//Kanan bisa max 1, kiri raiso
		{'X',10}, //kiri max 1, kanan max 3
		{'L',50},
		{'C',100},//Kiri max 1, kanan max 3
		{'D',500},
		{'M',1000},//max 3 digit harus di kiri.
	};
	int result =0;
	int prevValue = 0;
	for(int i=s.length()-1;i>=0;i--){
		if(listKarakter.find(s[i])==listKarakter.end()){
			return -1;
		}
		int current = listKarakter[s[i]];
		if(current>=prevValue){
			result +=current;
		}
		else{
			result -=current;
		}
		prevValue=current;
	}
	return result;
}

int main(){
	/*
	CCM = 800 = SALAH
	DCCC = 800 = BETUL
	TEST CASE 1 (NENTUIN KANAN KIRI BENER ENGGA
	s = CCM
	current = M
	int res = 1000
	current+1 = C => IF C<M =>false
	*/
	cout<<romanToInt("");
}
