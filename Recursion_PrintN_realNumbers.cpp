#include <iostream>
using namespace std;
int printNumbersReverse(int n){
    if(n==1){
        cout<<n<<endl;
        return n;
    }
    cout<<n<<endl;
   
     return  printNumbersReverse(n-1);;
    
}
int main() {
    printNumbersReverse(10);
}
