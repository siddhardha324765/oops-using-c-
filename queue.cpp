#include<bits/stdc++.h>
using namespace std;
class queue1{
  private:
     int  arr[100];
     int front;
     int rear;
  public:
  queue1(){
      front=-1;
      rear=-1;
  }
  void isempty(){
      if(front>=rear){
         cout<<"queue is empty\n";
      }
      else{
          cout<<"queue is not empty\n";
      }
  }
  void isfull(){
      if(rear==99){
          cout<<"queue is full\n";
      }
      else{
          cout<<"queue is not full\n";
      }
  }
  void peek(){
    if(front>=rear){
    cout << "no element present\n";
  } 
  else{
    cout<<"peek element is: "<<arr[front+1]<<endl;
}
  }
  void enqueue(int x){
      if(rear<99){
          arr[++rear]=x;
          
      }
      else{
          cout<<"insufficient space in queue\n";
      }
  }
  void dequeue(){
      if(front>=rear){
          cout<<"no elements present\n";
      }
      else{
          front++;
      }
  }
};
int main(){
    queue1 q;
    q.enqueue(10);
    q.peek();
}
