#include<bits/stdc++.h>
using namespace std;
 void func(int *p){
    int y=200;
    *p=y;
 }
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    
   int x=10;
   int *p=&x;
   func(p);
   cout<<*p<<endl;

    return 0;
}