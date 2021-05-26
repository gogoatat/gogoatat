#include <bits/stdc++.h>
using namespace std;
int plswork(){
 srand(time(0)); //seed random number generator

 int lottery = rand() % 100 + 900;
return lottery;

}




int main (){
int lottery;
int aa,bb,cc;
plswork();
aa=lottery%10;
bb=((lottery-lottery%10)/10)%10;
cc=(lottery-(lottery-lottery%100))/100;

for(int i=1;i>0;i++){

if(aa==bb){plswork();}else
if(aa==cc){plswork();}else
if(cc==bb){plswork();}else{
    break;
}
}
	cout << "Enter your lottery pick (tree digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	// Get digits from lottery
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;
	// Get digits from guess
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if (guessDigit2 == lotteryDigit1
	&& guessDigit1 == lotteryDigit2){
		cout << "Match all digits: you win $3,000";
	}
	else if (guessDigit1 == lotteryDigit1
	|| guessDigit1 == lotteryDigit2
	|| guessDigit2 == lotteryDigit1
	|| guessDigit2 == lotteryDigit2){
		cout << "Match one digit: you win $1,000";
	}
	else{
		cout << "Sorry, no match";
	}











return 0;

}
