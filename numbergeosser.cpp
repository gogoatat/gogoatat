#include <iostream>//áèáëèîòåêà
#include <cstdlib>//áèáëèîòåêà
#include <ctime>//áèáëèîòåêà
using namespace std;//íåùî

int main()//ôóíêöèÿ
{
    int no=0,b,a,zero=0;//ïðîìåíëèâè
    cin>>b>>a;//äàâàíå íà ñòîéíîñò
    srand(time(0)); //seed random number generator
    int num = rand() % a + b; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";//èçëèçà íà åêðàí
    if(num%10==0)
    {zero++;}
    else if (num%10==9)
    {zero++;}
    else if (num%10==8)
    {zero++;
    zero++;}
    else if (num%10==6)
    {zero++;}
    if((num-num%10)/10==0)
    {zero++;}
    else if ((num-num%10)/10==9)
    {zero++;}
    else if ((num-num%10)/10==8)
    {zero++;
    zero++;}
    else if ((num-num%10)/10==6)
    {zero++;}
    int guess = 0;//ïðîìåíëèâà
    while (guess != num) {//öèêàë çà ïðîâåðÿâàíå äàëè ñè ïîçíàë
        cout << "Enter a guess between "<<b<<" and "<<a<<" : ";//èçëèçà íà åêðàí
        cin >> guess;//íàó÷êâàíå
        no++;//áðîÿ÷ íà îïèòè

            if(guess==0){ //ïðîâåðÿâà çà íóëà
                    break;//èçëèçà îò öèêàëà
        }
        else if(guess > num) { //ïðîâåðÿâà äàëè íàó÷êâàíåòî å ïî-ãîëÿìî
            cout << "Too high!\n\n";//èçëèçà íà åêðàí
        }
        else if (guess < num)//ïðîâåðÿâà äàëè íàó÷êâàíåòî å ïî-ìàëêî
            {
                cout << "Too low!\n\n";//èçëèçà íà åêðàí
        }

        else if(guess==num){//ïðîâåðÿâà äàëè íàó÷êâàíåòî å ðàâíî
            cout << "\nCorrect! You got it in "<<no<<endl;//èçëèçà íà åêðàí
        }
        if (no==5){
            cout<<"zero="<<zero;
        }


    }


    return 0;//êðàé íà âñè÷êî
}
