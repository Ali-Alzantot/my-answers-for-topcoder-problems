#include<bits/stdc++.h>
using namespace std;
class TheBlackJackDivTwo{
public :
int score(vector <string> cards){
int res=0;
for (int i=0;i<cards.size();++i){
if (cards[i][0]=='T'||cards[i][0]=='K' || cards[i][0]=='Q' || cards[i][0]=='J' )
res+=10;
else if(cards[i][0]=='A')
res+=11;
else
res+=cards[i][0]-'0';

}
return res;
}
};
