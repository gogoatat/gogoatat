#include <iostream>//библиотека
#include <cstdlib>//библиотека
#include <ctime>//библиотека
using namespace std;//нещо

int main()//функция
{
    int no=0,b,a,zero=0;//променливи
    cin>>b>>a;//даване на стойност
    srand(time(0)); //seed random number generator
    int num = rand() % a + b; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";//излиза на екран
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
    int guess = 0;//променлива
    while (guess != num) {//цикал за проверяване дали си познал
        cout << "Enter a guess between "<<b<<" and "<<a<<" : ";//излиза на екран
        cin >> guess;//научкване
        no++;//брояч на опити

            if(guess==0){ //проверява за нула
                    break;//излиза от цикала
        }
        else if(guess > num) { //проверява дали научкването е по-голямо
            cout << "Too high!\n\n";//излиза на екран
        }
        else if (guess < num)//проверява дали научкването е по-малко
            {
                cout << "Too low!\n\n";//излиза на екран
        }

        else if(guess==num){//проверява дали научкването е равно
            cout << "\nCorrect! You got it in "<<no<<endl;//излиза на екран
        }
        if (no==5){
            cout<<"zero="<<zero;
        }


    }


    return 0;//край на всичко
}
