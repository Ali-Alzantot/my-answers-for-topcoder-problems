#include <bits/stdc++.h>
using namespace std;
class WhiteCells{
public :
int countOccupied(vector <string> board){
int cnt=0;
for (int i=0;i<8;++i){
for (int j=0;j<8;++j){
if ((i%2==0 && j%2==0)|| (i%2 !=0 && j%2 !=0) )
if (board[i][j]=='F')
cnt++;
}
}
return cnt;
}
};
