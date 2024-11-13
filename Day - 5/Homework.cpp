//Prime Numbers function

#include <iostream>
using namespace std;

int PrimeNum(int n){
  int i;
  for(i = 2;i <= n-1;i++ ){
    if(n%i==0){
      return -1; 
    }
  }
  return 1;
}

int main(){
  int n;
  cout<<"Enter the Number : "<<endl;
  cin>>n;
  cout<<"Checking whether the number is prime or not??"<<endl;
  int result1 = PrimeNum(n);
  if (result1 == -1){
    cout<<"NOT Prime!!"<<endl;
  }
  else{
    cout<<"Prime Number :)";
  }
  return 0;
}

//Fibonacci Series
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 0) {
      cout << "Invalid input!! Please enter a non-negative integer." << endl;
      return 1; 
    }
    int result = fibonacci(n);
    if (result != -1) { 
        cout << "Fibonacci number at position " << n << " is: " << result << endl;
    }

    return 0;
}
