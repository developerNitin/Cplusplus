#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  if (n != 0) {
    if(n%2 == 0) {
        cout<<n<<" is even";
    } else {
        cout<<n<<" is odd";
    }
  } else {
    cout<<"Your input is 0, try something else.";
  }
  
  return 0;
}