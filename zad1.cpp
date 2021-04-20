#include <bits/stdc++.h>
using namespace std;
int main (){

int k,n,v=0,b=0;
cout<<"n=";
cin>>n;
cout<<"k=";
cin>>k;
for (int i=1;i<=n;i++){
b=i;
    for(int a=2;a<=(i);a++){

         if(b%a==0){
           v++;
           b=b/a;
           a=a-1;
         }
    }
    b=0;
       if(v==k){
       cout<<i<<endl;
       }
       v=0;
}


return 0;
}
