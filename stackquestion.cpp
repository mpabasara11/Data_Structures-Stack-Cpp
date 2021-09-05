#include<iostream>
using namespace std;
class stack
{
  int top;
  char mystring[4];

  public:
      stack();
      void push(char);
      char pop();


};

stack::stack()
{
    top=0;
}
void stack::push(char value)
{
    mystring[top++]=value;
}
char stack::pop()
{
    return mystring[--top];
}

int main()
{stack stack1;
char data[5]="NIBM";
for(int c=0;c<=3;c++)
{
    stack1.push(data[c]);
}
for(int c=0;c<=3;c++)
{
cout<<stack1.pop();
}


    return 0;
}
