#include <bits/stdc++.h>
using namespace std;
class MarbleNecklace{
 public :
string normalize(string necklace){
set <string> st;
	string s=necklace;
for (int i=0;i<s.length();++i){
	string x="";
	string y="";
	for(int j=i;j<s.length();++j)
		x+=s[j];
	for(int k=0;k<i;++k)
		x+=s[k];
	st.insert(x);
	reverse(x.begin(),x.end());
		y=x;
	st.insert(y);

}
set <string>::iterator it=st.begin();
return *it;
}
};
