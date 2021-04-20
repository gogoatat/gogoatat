#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, a,br=0;

   char aa[100];
  for(int i=0;i<100;i++){
    cin>>aa[i];
    if(aa[i]=='\n'){
            cout<<"l";
            g=i;
i=1000;

    }
  }
  for(int h=0;h<g;h++){
    if (aa[h]=='a'){
        br++;
    }
  }
  cout<<br;

    return 0;
}
