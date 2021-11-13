#include <bits/stdc++.h>
#define ll long long
using namespace std;

void changeDir(int &px,int &py){
    if(px==0&&py==1){
        px=1;
        py=0;
    }
    else if(px==1&&py==0){
        px=0;
        py=-1;
    }
    else if(px==0&&py==-1){
        px=-1;
        py=0;
    }
    else{
        px=0;
        py=1;
    }
}

int solution(vector<string> &R){
    int n=R.size(),m=R[0].size();
    int answer=1;
    vector<vector<int>> cnt(n,vector<int>(m,0));
    queue<pair<int,int>> qu;
    qu.push({0,0});
    int px=0,py=1;
    while(!qu.empty()){
        auto it=qu.front();
        qu.pop();
        if(cnt[it.first][it.second]>4)
            break;
        cnt[it.first][it.second]++;
        if(it.first+px<0||it.second+py<0||it.first>=n||it.second>=m||R[it.first+px][it.second+py]=='#'){
            changeDir(px,py);
            qu.push({it.first,it.second});
        }
        else{
            if(cnt[it.first+px][it.second+py]==0)
                answer++;
            qu.push({it.first+px,it.second+py});
        }
    }
    cout<<ans;
    return answer;
}
int main(){

    // int n;
    // cin>>n;
    // vector<string>a(n);
    // for(int i=0;i<n;i++)cin>>a[i];
  vector<string>a(4);
  a[0] = "...#.";
  a[1] = ".#..#";
  a[2] = "#...#";
  a[3] = "..#..";
  cout<<solution(a);
   return 0;
}