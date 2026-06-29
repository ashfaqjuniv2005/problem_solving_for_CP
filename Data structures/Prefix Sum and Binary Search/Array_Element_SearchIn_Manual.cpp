#include<bits/stdc++.h>
using namespace std;
       
       
       
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 
    int n,q;cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

for(int i=1;i<=q;i++){
    int x;cin>>x;
    bool flag=false;
    for(auto cn:a){
        if(cn==x){
            flag=true;
            break;
        }
      
      
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
 
return 0;
}
