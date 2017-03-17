#include<bits/stdc++.h>
using namespace std;
bool chk (char ch){
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U' )
return true;
else
return false;
}
class Pronunciation{
public:
string canPronounce(vector <string> words){
string str="";
for(int i=0;i<words.size();++i){
int x=words[i].length();
	x-=1;
for(int j=0;j<x;++j){
if(chk(words[i][j])&&chk(words[i][j+1])&&words[i][j]!=toupper(words[i][j+1])&&words[i][j]!=tolower(words[i][j+1])){
str=words[i];
goto ss;
}
if(j!=x-1&&j!=x&&!chk(words[i][j])&&!chk(words[i][j+1])&&!chk(words[i][j+2])){
str=words[i];
goto ss;
}
}
}
ss:
return str;
}
};
