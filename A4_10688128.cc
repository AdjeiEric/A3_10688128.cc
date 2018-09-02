#include <iostream>

using namespace std;

int marks_scored;
char Konstant_2;

int main()
{
cout<<" <<1>> \t Enter the letter <<S>> in upper case on your keyboard & press enter to initialize the process \n\n";
cout<<" <<2>> \t Enter your marks scored & press enter to see your grade \n ";


cin>>Konstant_2;
cout<<'\n';
cin>>marks_scored;
cout<<'\n';

    switch(Konstant_2)
{
case 'S':

if((marks_scored>= 80) || (marks_scored==100))
{
       cout<<'A'<<'\n';
}
else if ((marks_scored>=75) || (marks_scored==79))
{
    cout<<"B+"<<'\n';
}
else if ((marks_scored>=70)||(marks_scored==74))
{
    cout<<'B'<<'\n';
}
else if ((marks_scored>=65)||(marks_scored==69))
{
    cout<<"C+"<<'\n';
}
else if ((marks_scored>=60)||(marks_scored==64))
{
    cout<<'C'<<'\n';
}
else if ((marks_scored>=55)||(marks_scored==59))
{
    cout<<"D+"<<'\n';
}

else if ((marks_scored>=50)||(marks_scored==54))
{
    cout<<'D'<<'\n';

}
else if ((marks_scored>=45)||(marks_scored==49))
{
    cout<<'E'<<'\n';
}
else if (marks_scored<=44)
{
    cout<<'F'<<'\n';
}
break;

default:
cout<<"\n In put error"<<'\n';
break;

    }

    return 0;
}

