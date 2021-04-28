#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod = 1e9 + 7;
int ans=0;
ll column[20],diag1[20],diag2[20];
 
void search(string board[8], int x, int res) {
 if (x == 8) {
ans++;
return;
}
for (int y = 0; y < 8; y++) {
  if(board[x][y] == '.'){
  if (column[y] || diag1[x+y] || diag2[y-x+8-1])
   continue;
  else
  {
    column[y] = diag1[x+y] = diag2[y-x+8-1] = 1;
    search(board, x+1,ans);
    column[y] = diag1[x+y] = diag2[y-x+8-1] = 0;
  }
}
}
}
 
int main()
{
  string board[8];
  for (int i = 0; i < 8; i++)
  {
    cin >> board[i];
  }
  search(board,0,ans);
  cout<<ans;
  return 0;
}
