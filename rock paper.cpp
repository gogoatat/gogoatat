#include <bits/stdc++.h>
using namespace std;
int main(){
char i[8];
int f,compf;
string mystring ;
cout<<"rock "<<"paper "<<"sissors "<<endl;

for(int h=1; h>0;h++){
cin>>mystring;
if(mystring=="paper"){
    f=2;break;
}else if(mystring=="rock"){
f=1;break;
}else if(mystring=="sissors"){
f=3;break;
}else{
cout<<"what"<<endl;}

}
compf= rand() % 3 + 1;
for(int h=1; h>0;h++){
if(compf==2){
    cout<<"paper";break;
}else if(compf==1){
cout<<"rock";break;
}else if(compf==3){
cout<<"sissors";break;
}else{
cout<<"what"<<endl;}
}


if(compf==(f%3)+1){
cout<<" computer wins"<<endl;
}else if(compf==f){
cout<<" draw";
}else {
cout<<" computer loses"<<endl;
}







return 0;

}
