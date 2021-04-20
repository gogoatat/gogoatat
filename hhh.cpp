#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,br=0;
    cin>>a;
   char aa[a];
  for(int i=0;i<a;i++){
    cin>>aa[i];
  }
  for(int h=0;h<a;h++){
    if (aa[h]=='a'){
        br++;
    }
  }
  cout<<br;
    return 0;
}
