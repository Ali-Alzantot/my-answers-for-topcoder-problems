#include <iostream>
#include <string>
using namespace std;
class InsideOut {
public:
string unscramble(string line){
string res="";
int length=line.length();
int move=(length/2)-1;
for (int i=move;i>=0;i--){
res+=line[i];
}
for (int j=length-1;j>move;j--){
res+=line[j];
}
return res;
}
};
