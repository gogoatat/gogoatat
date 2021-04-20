#include <bits/stdc++.h>
using namespace std;
int main(){
int A[10][10],sbor=0,minn,maxx,hi=0,s=1;
for (int i=0;i<10;i++){
    for (int h=0;h<10;h++){
 cin>>A[i][h];
}
}
for (int i=0;i<10;i++){
    for (int h=0;h<10;h++){
    sbor=sbor+A[i][h];

}
if(hi==0){
    minn=sbor;
    maxx=sbor;
}
cout<<sbor<<endl;
if(sbor>maxx){
    maxx=sbor;
}
if(sbor<minn){
    minn=sbor;
}
sbor=0;
hi++;
}
cout<<minn<<endl<<maxx;


return 0;
}
