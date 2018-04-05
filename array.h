#include<iostream>
using namespace std;
class array
{
private:
int a[5];
public:
int i;
void input();
void max();
void min();
void display();

};
void array :: input()
{
cout<<"enter any 5 numbers"<<endl;
for(i=0;i<5;i++)
{
  cin>>a[i];
}
}
void array :: max()
{
  int max=a[0];
  for(i=0;i<5;i++)
  {
    if(max<a[i])
   {  max=a[i];
  }
  }
  cout<<"maximum number in array is "<<max<<endl;
}
void array :: min()
{
  int min=a[0];
  for(i=0;i<5;i++)
  {
    if(min>a[i])
     min=a[i];
    }
  
cout<<"minimum number in array is "<<min<<endl;
}
void array :: display()
{
  cout<<"number entries in array are "<<endl;
  for(i=0;i<5;i++)
  {
cout<<a[i]<<endl;
  }
  getchar();
}