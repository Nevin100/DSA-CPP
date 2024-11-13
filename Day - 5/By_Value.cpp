//Pass By Value:

#include <iostream>
using namespace std;

int sum(int a,int b){
  int s = a + b;
  return s;
}

int main(){
  cout<<"Sum: "<<sum(5,4)<<endl;// copy of value is passed!
  return 0;
}