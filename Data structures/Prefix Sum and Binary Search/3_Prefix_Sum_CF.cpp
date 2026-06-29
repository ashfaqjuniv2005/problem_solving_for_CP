
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
    
    vector<int>pre(n);

    pre[0]=a[0];
       
     //  You can ignore till 31 no. Line
       
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }


    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
 
   cout<<endl;
   
    for(int i=1;i<=q;i++){
          int left,right;
          cin>>left>>right;
          long long sum;
          if(left==0){
            sum=pre[right];
          }

          else sum= pre[right]-pre[left-1];

          cout<<sum<<endl;
    }
   
return 0;
}
