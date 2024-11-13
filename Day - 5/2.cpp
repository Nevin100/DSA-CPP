// //Sum of digits of a number

// #include <iostream>
// using namespace std;

// //function
// int SumDigits(int n){
//   int sum =  0;
//   while (n>0){
//     int a = n%10;
//     n = n/10;
//     sum  += a;
//   }
//   return sum;
// }

// int main(){
//   int num;
//   cout<<"Enter the number : "<<endl;
//   cin>>num;
//   cout<<"Sum of digits :"<<SumDigits(num)<<endl;
//   return 0;
// }

//nCr

#include <iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  for (int i = 1;i <= n; i++){
    fact *= i;
  }
  return fact;
}

int nCr(int n,int r){
  int n_fact = factorial(n);
  int r_fact = factorial(r);
  int nr_fact = factorial(n-r);
  int result = n_fact/(r_fact * nr_fact);
  return result;
}

int main(){
  int n,r;
  cout<<"Enter the 'n' :"<<endl;
  cin>>n;
  cout<<"Enter the 'r' :"<<endl;
  cin>>r;
  cout<<"Result :"<<nCr(n,r)<<endl;
  return 0;
}