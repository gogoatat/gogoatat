#include <bits/stdc++.h>
using namespace std;
int main (){
 int den,mesec,god,ost,y=0,z;
 cout<<"den="<<endl;
 cin>>den;
 cout<<"mesec="<<endl;
 cin>>mesec;
 cout<<"godina="<<endl;
 cin>>god;
  ost=god%4;
 if(ost==0)
 {
     y=1;
     }else{y=0;
 }
 switch(mesec)
 {
    case 1:z=31;break;
    case 2:z=28;break;
    case 3:z=31;break;
    case 4:z=30;break;
    case 5:z=31;break;
    case 6:z=30;break;
    case 7:z=31;break;
    case 8:z=31;break;
    case 9:z=30;break;
    case 10:z=31;break;
    case 11:z=30;break;
    case 12:z=31;break;
 }

 if (y==1 and mesec==2){
    z=29;
 }
if (den==z){
 den=1; mesec=mesec+1;}
 else{ den=den+1;

 }

 if(mesec>12){
    god++;
    mesec=1;
 }
 cout<<"den="<<den<<" mesec="<<mesec<<" godina="<<god;
return 0;
}
