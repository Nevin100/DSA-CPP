// Function introduction:

#include <iostream>
using namespace std;

//function definition
void printHello(){
  cout<<"Hello\n";
}

int sum(int a,int b){//parameters
  int sum = a + b;
  return sum;
}

void min(int a,int b){
  if(a < b){
    cout<<a;
  }
  else{
    cout<<b;
  }
}

int main(){
  // printHello();//Calling of function
  min(4,5);//arguments
}