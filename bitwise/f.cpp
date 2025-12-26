#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0; i<n-1; i++){
        cin>>v[i];
    }
    vector<int>ans(n+1,0);
    for(int i=0; i<v.size(); i++){
        ans[v[i]]++;
    }
    
    for(int i=1; i<=n; i++){
        if(ans[i]==0){
            cout<<i<<"";
        }
    }
    cout<<endl;
    return 0;
}