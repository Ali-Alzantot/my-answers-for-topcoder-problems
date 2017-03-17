#include <bits/stdc++.h>
using namespace std;
int toint (string s){
stringstream ss(s);
int x;
ss>>x;
return x;
}
class AccountBalance{
public :
int processTransactions(int startingBalance, vector <string> transactions){
int re=startingBalance;
for (int i=0;i<transactions.size();++i){
int x=toint(transactions[i].substr(2));
if((int)transactions[i].find("C")==-1)
re-=x;
else
re+=x;
}
return re;
}
};
