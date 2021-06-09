
#include <bits/stdc++.h>
using namespace std;

int board [3] [3];
int movea,moveb;
char boardchar[3][3];
int win,aa,bb;

char updatechar ();
int playermove(int whogoesfirst);
int checkwin (int win);
int computermove(int whogoesfirst);

int main(){
srand(time(0));
int first = rand() %2 + 1;
for(int a=0;a<3;a++) {
  for(int b=0;b<3;b++) {
  board[a][b]=0;
  }
}
updatechar();
for(int once=0;once<1;once++){

if(first==1){
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
cout<<"draw";
break;
}

if(first==2){
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
playermove(first);
updatechar();
checkwin(win);
if(win==1){
cout<<"player won";
break;
}
computermove(first);
updatechar();
checkwin(win);
if(win==2){
cout<<"computer won";
break;
}
cout<<"draw";
break;
}
}
return 0;
}

char updatechar (){
for(int a=0;a<3;a++) {
  for(int b=0;b<3;b++) {
  if(board[a][b]==0){
    boardchar [a][b]='_';
  }else
   if(board[a][b]==1){
   boardchar[a][b]='X';
  }else{
  boardchar[a][b]='O';
  }
}
}
cout<<boardchar[0][0]<<"|"<<boardchar[0][1]<<"|"<<boardchar[0][2]<<endl<<boardchar[1][0]<<"|"<<boardchar[1][1]<<"|"<<boardchar[1][2]<<endl<<boardchar[2][0]<<"|"<<boardchar[2][1]<<"|"<<boardchar[2][2]<<endl<<endl;
return 0;
}




int playermove(int whogoesfirst){
for(int i=1;i>0;i++){
cin>>movea>>moveb;
movea--;
moveb--;
    if(0<=movea && movea<=3 && 0<=moveb && movea<=3 && board [movea][moveb]==0){
        board [movea][moveb]=whogoesfirst;
        break;
    }else{
    cout<<"please enter valid cords"<<endl;
    }
}
return board [movea][moveb];
}

int checkwin (int win){
    win=0;
if(board[0][0]==board[0][1]==board[0][2]!=0){
win=board[0][0];
}
if(board[1][0]==board[1][1]==board[1][2]!=0){
win=board[1][0];
}
if(board[2][0]==board[2][1]==board[2][2]!=0){
win=board[2][0];
}
if(board[0][0]==board[1][0]==board[2][0]!=0){
win=board[0][0];
}
if(board[0][1]==board[1][1]==board[2][1]!=0){
win=board[0][1];
}
if(board[0][2]==board[1][2]==board[2][2]!=0){
win=board[0][2];
}
if(board[0][0]==board[1][1]==board[2][2]!=0){
win=board[0][0];
}
if(board[0][2]==board[1][1]==board[2][0]!=0){
win=board[0][2];
}
return win;
}

int computermove(int whogoesfirst){
for(int i=1;i>0;i++){
srand((unsigned)time(0));
int aa = rand() %2 + 0;
srand((unsigned)time(0));
int bb = rand() %2 + 0;
if( board [aa][bb]==0){
        board [aa][bb]=whogoesfirst%2+1;
break;
}
}
return board [aa][bb];
}
