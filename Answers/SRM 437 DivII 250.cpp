#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class TheBeauty {
public:
int find(int n) {
stringstream ss;
ss << n;
string str = ss.str();
int length=str.length();
int num=0;
for (int i=0;i<length;i++){
int n=0;
for (int j=i+1;j<length;j++){
if(str[i]==str[j]){
n=1;
break;
}
}
if (n==0)
num++;
}
return num;
}

};
