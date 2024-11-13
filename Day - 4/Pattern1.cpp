//Q.) Square Pattern ----> (outer loop for number of lines and inner loop for every particular line)

//1 2 3 4 
//1 2 3 4 
//1 2 3 4 
//1 2 3 4 

//OR

//* * * *
//* * * *
//* * * *
//* * * *

#include <iostream>
using namespace std;

int main(){
  int n1 = 4;
  for(int i = 1; i <= n1; i++){
    int m1 = 4;
    for(int j = 1; j <= m1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  int n2 = 4;
  for(int i = 1; i <= n2; i++){
    int m2 = 4;
    for(int j = 1; j <=m2;j++){
      cout<<'*'<<" ";
    }
    cout<<endl;
  }
  return 0;
}