#include <bits/stdc++.h>
using namespace std;

int board [3] [3];
char boardchar[3][3];
int win=0,seed=0,first,movea,moveb,nextmove;
string again;
char updatechar ();
int playermove(int first);
int checkwin ();
int computermove(int first);

int main(){
for(int games=1; games>0;games++){
        for(int a=0;a<3;a++){
            for(int b=0;b<3;b++){
                board[a][b]=0;
            }
        }
srand(time(0)+seed);
first = rand() %2 + 1;
nextmove=first;
updatechar();
cout<<"enter cords for your move"<<endl;
for(int moves=0;moves<9;moves++){

if(nextmove==1){
playermove(first);
updatechar();
win=checkwin();
if(win==first){
cout<<"player won";
break;
}
}else{
computermove(first);
updatechar();
win=checkwin();
if(win==first%2+1){
cout<<"computer won";
break;
}
}
if(moves==8){
    cout<<"draw";
}
nextmove=nextmove%2+1;
}
cout<<endl<<"do you want to play again??"<<endl;
for(int i=1;i>0;i++){
cin>>again;
if(again=="no"){
    break;
}else if(again=="yes"){
    break;
}else{
cout<<"invalid answer"<<endl;
}
}
if(again=="no"){
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




int playermove(int first){
for(int i=1;i>0;i++){
cin>>movea>>moveb;
movea--;
moveb--;
if(movea==68 && moveb==68){
    cout<<"nice"<<endl;
}
    if(0<=movea && movea<=3 && 0<=moveb && movea<=3 && board [movea][moveb]==0){
        board [movea][moveb]=first;
        break;
    }else{
    cout<<"please enter valid cords"<<endl;
    }
}
return board [movea][moveb];
}

int checkwin (){
    win=0;
if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][2]!=0){
win=board[0][0];
}
if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][2]!=0){
win=board[1][0];
}
if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]!=0){
win=board[2][0];
}
if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[2][0]!=0){
win=board[0][0];
}
if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[2][1]!=0){
win=board[0][1];
}
if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]!=0){
win=board[0][2];
}
if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!=0){
win=board[0][0];
}
if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[0][2]!=0){
win=board[0][2];
}
return win;
}

int computermove(int first){
for(int i=1;i>0;i++){
srand((unsigned)time(0)+seed);
movea=rand() %3 + 0;
moveb=rand() %3 + 0;
if( board [movea][moveb]==0){
        board [movea][moveb]=first%2+1;
break;
}
seed++;
}
return board [movea][moveb];
}
