#include <iostream>
#include<fstream>

 using namespace std ;

int marks_scored;

  int main()
   {
cout<<" please type in your score to determine your grade \n";

cin >>marks_scored;

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
    cout<<'F'<<'\n';

      return 0;
    }

