#include<bits/stdc++.h>
using namespace std;
       
       
       
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        int idx=i;
        int pre_sum=0,pst_sum=0;
        for(int j=0;j<idx;j++){
            pre_sum+=a[j];
        }
        for(int j=idx+1;j<n;j++){
            pst_sum+=a[j];
        }
        if(pre_sum==pst_sum){
            cout<<idx<<endl;
            break;
        }

        else {
            cout<<"No Equilibrium Index found"<<endl;
            break;
        }

    }
 
return 0;
}