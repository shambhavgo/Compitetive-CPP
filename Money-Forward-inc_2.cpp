#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    sum/=2;
    sort(arr.rbegin(),arr.rend());
    priority_queue<pair<int,vector<int> >,vector<pair<int,vector<int> > >, greater<pair<int,vector<int> > > > pq;
    vector<int> temp;
    pq.push({0,{}});pq.push({0,{}});pq.push({0,{}});
    bool flag = true;
    for(int i=0;i<n;i++){
        auto p = pq.top();
        pq.pop();
        if(arr[i]>sum){
            if(p.second.size()==0){
                p.second.push_back(arr[i]);
                p.first+=arr[i];
                pq.push(p);
            }else{
                flag=false;
                break;
            }
        }else{
            if(p.first+arr[i]>sum){
                flag=false;
                break;
            }else{
                p.second.push_back(arr[i]);
                p.first+=arr[i];
                pq.push(p);
            }
        }
    }
    if(flag==false){
        cout << "No" << endl;
    }else{
            cout << "Yes" << endl;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            for(int i=0;i<p.second.size();i++){
                cout << p.second[i] << " ";
            }
            cout << endl;
        }
    }

}