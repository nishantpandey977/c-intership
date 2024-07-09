#include<iostream>
using namespace std;

void top3(int m[],int s,string str[])
{
    int first,second,third,name1,name2,name3;
    first=second=third=name1=name2=name3=0;
   for(int i=0;i<s;i++)
   {
       if(m[i]>first)
       {
           third=second;
           second=first;
           first=m[i];
           name1=i;

       }
       else if(m[i]>second)
       {
           third=second;
           second=m[i];
           name2=i;
       }
       else if(m[i]>third)
       {
           third=m[i];
           name3=i;
       }
   }
   cout<<"first:"<<str[name1+1]<<endl;
   cout<<"second:"<<str[name2+1]<<endl;
   cout<<"third:"<<str[name3+1]<<endl;
}
void grade(int m[],int s,string str[],int su)
{
    int maxmarks=0;
    int minmarks=0;
    float grade=0;

    for(int i=0;i<s;i++)
    {
        maxmarks=(m[i]*100);
        minmarks=(su*100);
        grade=maxmarks/minmarks;
        maxmarks=minmarks=0;
        if(grade>90 && grade<101)
        {
            cout<<str[i+1]<<"=  A+"<<endl;
            grade=0;
        }
        else if(grade>80 && grade <91)
        {
            cout<<str[i+1]<<"=  A"<<endl;
            grade=0;
        }
        else if(grade>70 && grade <81)
        {
            cout<<str[i+1]<<"=  B+"<<endl;
            grade=0;
        }
        else if(grade>60 && grade <71)
        {
            cout<<str[i+1]<<"=  B"<<endl;
            grade=0;
        }
        else if(grade>50 && grade <61)
        {
            cout<<str[i+1]<<"=  C+"<<endl;
            grade=0;
        }
        else if(grade>40 && grade <51)
        {
            cout<<str[i+1]<<"=  C"<<endl;
            grade=0;
        }
        else if(grade>33 && grade <41)
        {
            cout<<str[i+1]<<"=  D"<<endl;
            grade=0;
        }
        else if(grade  <33)
        {
            cout<<str[i+1]<<"= fail"<<endl;
            grade=0;
        }
    }

}
int main()
{
    int sub;
int strength;
    cout<<"Enter total no. of student:";

    cin>>strength;
    int id[strength];
    string  name[strength+1];
 cout<<"Enter the name student:";
 for(int i=0;i<strength+1;i++)
 {
     getline(cin,name[i]);
 }
 cout<<"Enter id's of student:";
 for(int i=0;i<strength;i++)
   {
    cin>>id[i];
   }
 cout<<"Enter the no. of subject:";

 cin>>sub;
int marksob[strength][sub];
    for(int i=0;i<strength;i++)
    {
        cout<<"Enter marks subject wise:";
        for(int j=0;j<sub;j++)
        {
            cin>>marksob[i][j];
        }
    }
    int top[strength];
    int sum=0;
   for(int i=0;i<strength;i++)
   {
       for(int j=0;j<sub;j++)
       {
           sum = sum+marksob[i][j];

       }
       top[i]=sum;
       sum=0;
   }

  top3(top,strength,name);
  grade(top,strength,name,sub);

}
