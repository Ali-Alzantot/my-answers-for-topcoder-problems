#include <bits/stdc++.h>
using namespace std;
class GreatFairyWar {
public:
int minHP(vector <int> dps, vector <int> hp ){
int sum=0;
for (int i=0;i<hp.size();++i){
sum+=hp[i]*accumulate(dps.begin()+i,dps.end(),0);
}
return sum;
}
};
