#include <bits/stdc++.h>
using namespace std; 
class GridGenerator{
public : 

int generate(vector <int> row, vector <int> col){
vector <vector <int>> v(row.size(),vector<int> (col.size(),0));
v[0][0]=9;
for (int i=0; i<row.size();++i){
for (int j=0;j<col.size();++j){
if(i==0)
v[i][j]=row[j];
else if(j==0)
v[i][j]=col[i];
else
 v[i][j]=v[i][j-1]+v[i-1][j]+v[i-1][j-1];
}
}
return v[row.size()-1][col.size()-1];
}
};
