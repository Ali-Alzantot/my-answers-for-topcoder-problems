#include <iostream>
#include <string>
#include <map>

using namespace std;
class CheckFunction {
public:
int newFunction(string code){
map <char , int> mp;
mp['0']= 6; mp['1']=2; mp['2']=5; mp['3']=5;
mp['4']=4;  mp['5']=5;  mp['6']= 6;
mp['7']=3; mp['8']=7; mp['9']=6;
int num=0;
for (int i=0; i<code.length();++i){
num+=mp[code[i]];
}
return num;
}

};
