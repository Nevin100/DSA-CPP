//Q.)Square pattern 

//1 2 3
//4 5 6
//7 8 9

// OR

//A B C
//D E F
//G H I

#include <iostream>
using namespace std;

int main(){
  int num = 1;
  int n1 = 3;
  for(int i = 0;i < n1; i++){
    for(int j = 0; j < n1; j++){
      cout<< num <<" ";
      num++;
  }
  cout<<endl;
}
  cout<<endl;
  char ch = 'A';
  int n2 = 3;
  for(int i = 0;i < n2; i++){
    for(int j = 0; j < n2; j++){
      cout<< ch <<" ";
      ch++;
    }
    cout<<endl;
  }
return 0;
}