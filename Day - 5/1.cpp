//Question : Sum of numbers from 1 to N

#include <iostream>
using namespace std;

int Sum(int n){
  int sum = 0;
  for (int i = 1;i <=n;i++){
    sum += i; 
  }
  return sum;
}

int main(){
  int n;
  cout<<"Enter the number : "<<"\n";
  cin>>n;
  cout<<"Sum of numbers from 1 to N :"<<Sum(n)<<endl;
  return 0;

}

//Factorial

#include <iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  for (int i = 1;i <=n;i++){
    fact *= i; 
  }
  return fact;
}

int main(){
  int n;
  cout<<"Enter the number : "<<"\n";
  cin>>n;
  cout<<"Factorial of numbers from 1 to N :"<<factorial(n)<<endl;
  return 0;

}