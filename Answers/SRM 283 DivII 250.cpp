#include <bits/stdc++.h>
using namespace std;
class DiagonalDisproportion{
public:
int getDisproportion(vector <string> matrix){
int maindiagonal=0;
int collateraldiagonal=0;
for (int i=0;i<(int)matrix.size();++i){
for (int j=0;j<(int)matrix[i].length();++j){
if(i==j)
maindiagonal+=matrix[i][j]-'0';
if(i+j==(int)matrix.size()-1)
collateraldiagonal+=matrix[i][j]-'0';
}
}
return maindiagonal-collateraldiagonal;
}

};
