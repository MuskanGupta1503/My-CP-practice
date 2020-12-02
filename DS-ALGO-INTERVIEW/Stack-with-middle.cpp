#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node*next;
    node*prev;
    int data;
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

class MyStack
{
  public:
  //node*head;
  int count;
  node*mid;
  node*tail;
  MyStack()
  {
      tail=NULL;
    //  head=NULL;
      mid=NULL;
      count=0;
  }
  void push(int d)
  {
      if(!tail)
      {
          node*n=new node(d);
      //    head=n;
          mid=n;
          tail=n;
          count++;
          return;
      }
      if(!tail->next && !tail->prev)
      {
          node*n=new node(d);
          tail->next=n;
          n->prev=tail;
          mid=n;
          tail=n;
          count++;
          return;
      }
      node*n=new node(d);
      tail->next=n;
      n->prev=tail;
      tail=n;
      count++;
      if(count%2==0)
      {
          mid=mid->next;
      }
  }
  void print()
  {
      node*temp=tail;
      while(temp)
      {
          cout<<temp->data<<" ";
          temp=temp->prev;
      }
      cout<<endl;
  }
  void pop()
  {
      node*n=tail;
      tail=tail->prev;
      n->prev=NULL;
      delete n;
      count--;
      if(count%2!=0)
      {
          mid=mid->prev;
      }
  }
  int returnMiddle()
  {
      return mid->data;
  }
};

int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.print();
    cout<<s.returnMiddle()<<endl;
    s.pop();
    s.print();
    cout<<s.returnMiddle()<<endl;
    s.pop();
    s.print();
    cout<<s.returnMiddle()<<endl;

}