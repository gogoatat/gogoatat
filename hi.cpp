#include <iostream>//����������
#include <cstdlib>//����������
#include <ctime>//����������
using namespace std;//����

int main()//�������
{
    int no=0,b,a,zero=0;//����������
    cin>>b>>a;//������ �� ��������
    srand(time(0)); //seed random number generator
    int num = rand() % a + b; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";//������ �� �����
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
    int guess = 0;//����������
    while (guess != num) {//����� �� ����������� ���� �� ������
        cout << "Enter a guess between "<<b<<" and "<<a<<" : ";//������ �� �����
        cin >> guess;//���������
        no++;//����� �� �����

            if(guess==0){ //��������� �� ����
                    break;//������ �� ������
        }
        else if(guess > num) { //��������� ���� ����������� � ��-������
            cout << "Too high!\n\n";//������ �� �����
        }
        else if (guess < num)//��������� ���� ����������� � ��-�����
            {
                cout << "Too low!\n\n";//������ �� �����
        }

        else if(guess==num){//��������� ���� ����������� � �����
            cout << "\nCorrect! You got it in "<<no<<endl;//������ �� �����
        }
        if (no==5){
            cout<<"zero="<<zero;
        }


    }


    return 0;//���� �� ������
}
