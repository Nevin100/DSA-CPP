//Number Systems : Decimal,Octal,binary,Hexadecimal

//Decimal --> Binary (Repeated division of decimal number by 2 till remainder is 1 and the solution will be written from the remainder to up)

//Binary to decimal (Repeated multiplication of each corresponding digit by 2 in a succesive order of exponential power of 2)

#include <iostream>
using namespace std;

//Decimal to Binary:

int DecBinary(int number){
  int ans = 0,pow = 1;
  while(number > 0){
    int rem = number % 2;
    number = nuumber/2;

    ans += (rem*pow);
    pow *= 10;
  } 
  return ans;
}

//Binary to Decimal

int BinaryDec(int number1){
  int ans = 0,pow = 1;
  while(number1 > 0){
    int rem = number1 % 10;
    ans += rem*pow;
     
    number1 = number1/10;
    pow*=2;
  }
  return ans;
}
  
int main(){
  int number = 50;
  int number1 = 1010;
  cout<<DecBinary(number)<<endl;
  cout<<BinaryDec(number1)<<endl;
  return 0;
}

