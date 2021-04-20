#include <bits/stdc++.h>
using namespace std;
int main(){
int k,n,br=1,l;
int nn [n];
cin>>k>>n;
for(int i=0;i<n;i++){
    cin>>nn[i];
}
for(int p=0;p<n;p++){
    for(int l=nn[p];nn[p]<1;){
    nn[p]=(nn[p]-nn[p]%10)/10;
     br++;

}
if(br==k){
    cout<<nn[p]<<' ';
}
}




return 0;
}
