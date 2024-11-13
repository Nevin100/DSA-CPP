//Q.) Triangle Pattern --> n is for outer loop and here inner loop will be less than (i+1)

//*
//* *
//* * *
//* * * *

//OR

//1
//2 2
//3 3 3 
//4 4 4 4

//OR

//A
//B B
//C C C
//D D D D

#include <iostream>
using namespace std;
//Star Pattern
int main(){
  int n1 = 4;
  for (int i = 0; i < n1;i++ ){
    for(int j = 0;(j < i+1);j++ ){
      cout<<'*'<<" ";
    }
    cout<<endl;
  }
  //Number Pattern
  cout<<endl;
  int n2 = 4; 
  for (int i = 0; i < n2;i++ ){
    for(int j = 0;(j < i+1);j++ ){
      cout<<(i+1)<<" ";
    }
    cout<<endl;
  }
  //Alphabest Pattern
  cout<<endl;
  int n3 = 4;
  char ch = 'A';
  for (int i = 0; i < n3 ; i++ ){
    for(int j = 0; (j < i+1) ;j++ ){
      cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
  }
  return 0;
}

//Q.)Triangle Pattern 

//1
//1 2
//1 2 3
//1 2 3 4

#include <iostream>
using namespace std;

int main(){
  int n = 4;
  for(int i = 0; i < n; i++){
    int num = 1;
    for(int j = 0; j < (i+1); j++ ){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
  return 0;
}

//Q.) Triangle Pattern --> reverse

//1
//2 1
//3 2 1
//4 3 2 1

#include <iostream>
using namespace std;

int main(){
  int n = 4;
  for (int i  = 0; i < n;i++){
   for(int j = i+1 ; j > 0 ; j--){
    cout<<j<<" ";
   }
   cout<<endl;
  }
  return 0;
}

//Q.)Floyd's Triangle Problem

//1
//2 3
//4 5 6
//7 8 9 10

#include <iostream>
using namespace std;

int main(){
  int n = 4; 
  int num = 1;
  for (int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
  return 0;
}

//Q.)Inverted Triangle Pattern

//1 1 1 1
//  2 2 2
//    3 3
//      4

#include <iostream>
using namespace std;

int main(){
  int n = 4;
  int num = 1;
  for(int i = 0; i < n; i++){
    //spaces
    for(int j = 0; j < i; j++){
      cout<<" ";
    }
    //numbers
    for(int j = 0; j < n-i; j++){
      cout<<(i+1);
    }
    cout<<endl;
  }
  return 0;
}
