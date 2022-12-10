#include <bits/stdc++.h>
using namespace std;

map<string,string>course;
void Addcourse()
{


    cout<<"Enter Course Code"<<endl;
    cout<<"Enter Course name"<<endl;

    string s1,s2;
    cin>>s1>>s2;
    course[s1]=s2;
    cout<<"would you add again enter A"<<endl;
    char a;
    cin>>a;
    if(a=='A')
        Addcourse();
    else
        return ;

}
map<string ,string>student;
void Addstudent()
{


    cout<<"Enter student id"<<endl;
    cout<<"Enter student  name"<<endl;

    string s1,s2;
    cin>>s1>>s2;
    student[s1]=s2;
    cout<<"would you add again enter A"<<endl;
    char a;
    cin>>a;
    if(a=='A')
        Addstudent();
    else
        return ;
}
map<string,pair<string,double>>mark;
void Addresult()
{


    cout<<"Enter student id"<<endl;

    string id;
    cin>>id;
    if(student.find(id)==student.end())
        {cout<<"student does not exist"<<endl;
       Addresult();
        }

    label01:
    string c;
    cout<<"Enter course code"<<endl;
    if(course.find(c)==course.end())
    {
        cout<<"course not Exist"<<endl;
        goto label01;
    }
    cout<<"enter score"<<endl;
    double x;
    cin>>x;
    mark[c]={id,x};
    cout<<"add again enter A"<<endl;
    char z;
    cin>>z;
    if(z=='A')
        Addresult();
    else
        return ;



}
void viewresult()
{


    cout<<"Enter course id"<<endl;

    string id;
    cin>>id;
    if(course.find(id)==course.end())
        {cout<<"course does not exist"<<endl;
       viewresult();
        }
        double maxi=INT_MIN;
double mini=INT_MAX;
    for (auto x:mark)
    {
        cout<<x.second.first<<" "<<student[x.second.first]<<" "<<x.second.second<<endl;
        maxi=max(maxi,x.second.second);
        mini=min(mini,x.second.second);
    }
    cout<<"maximum score "<<maxi<<endl;
    cout<<"minimum score "<<mini<<endl;





}



int main()
{
 cout<<"------------------------------------------"<<endl;
 cout<<"-----------------Welcome to---Result Manager--------"<<endl;
 cout<<"--------------------------------------------"<<endl;
 cout<<"Main Menu -please select option"<<endl;
 int exp;
 cin>>exp;
 cout<<"1. Add course"<<endl;
 cout<<"2. Add student"<<endl;
 cout<<"3. Add result"<<endl;
 cout<<"4. view result"<<endl;
 cout<<"5. quit"<<endl;
 switch(exp) {
  case 1:
      Addcourse();

    break;
  case 2:
      Addstudent();
    break;
  case 3:
      Addresult();
      break;

  case 4:
      viewresult();
      break;

  default:
      break;


}








}
