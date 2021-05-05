#include <bits/stdc++.h>
using namespace std;

void rps(){
int f,compf;
string mystring,mode ;


cout<<"rock "<<"paper "<<"sissors "<<endl;
cout<<"special modes: computer always wins-1, computer always loses-2, computer always draws-3, random-4"<<endl;
cin>>mode;
cout<<endl<<"rock,paper or sissors"<<endl;
for(int h=1; h>0;h++){

cin>>mystring;
cout<<endl;
if(mystring=="paper"){
    f=2;break;
}else if(mystring=="rock"){
f=1;break;
}else if(mystring=="sissors"){
f=3;break;
}else{
cout<<"what"<<endl;}

}
if(mode=="1"){
    compf=(f%3)+1;
}else if(mode =="2"){
compf=(f+2)%3;
}else if(mode=="3"){
compf=f;
}else if(mode=="4"){
srand(time(0));
compf= rand() % 3 + 1;
}else{
cout<<"what"<<endl;
}
for(int h=1; h>0;h++){
if(compf==2){
    cout<<"paper"<<endl;break;
}else if(compf==1){
cout<<"rock"<<endl;break;
}else if(compf==3){
cout<<"sissors"<<endl;break;
}else{
cout<<"what"<<endl;}
}


if(compf==(f%3)+1){
cout<<"computer wins"<<endl;
}else if(compf==f){
cout<<"draw";
}else {
cout<<"computer loses"<<endl;
}
}
int main(){
string again;
for(int g=1;g>0;g++){
    rps();
    cout<<endl<<endl<<"again?"<<endl<<"yes"<<endl<<"no"<<endl<<endl;
cin>>again;
    if(again=="no"){
        break;
    }else{cout<<endl;



    }


}




return 0;

}
