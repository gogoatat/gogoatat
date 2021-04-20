
#include <bits/stdc++.h>
using namespace std;
void hi(int C[20]);
int main(){
int C[20];
hi(C);


 return 0;
}
void hi(int C [20]){
int maxodd,maxeven,minodd,mineven,sumodd=0,sumeven=0;
for(int i=0;i<20;i++){
    cin>>C[i];}
   int odd[20],a=0;
   int even[20],b=0;

   for(int h=0;h<20;h++){
if (C[h]%2==1){
    odd[b]=C[h];
    b++;
}else{
even[a]=C[h];
a++;
}


}
mineven=even[0];
minodd=odd[0];
maxeven=even[0];
maxodd=odd[0];
for(int i=0;i<b;i++ ){
if(even[i]<mineven){
    mineven=even[i];
}
if(even[i]>maxeven){
    maxeven=even[i];
}}
for(int i=0;i<a;i++){
if(odd[i]<minodd){
    minodd=odd[i];
}
if(odd[i]>maxodd){
    maxodd=odd[i];
}
}
for(int i=0;i<a;i++){
    sumodd=sumodd+odd[i];

}
for(int i=0;i<b;i++){
    sumeven=sumeven+even[i];

}
cout<<mineven<<endl<<maxeven<<endl<<minodd<<endl<<maxodd<<endl<<sumodd<<endl<<sumeven;

}


