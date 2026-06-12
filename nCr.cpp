#include<iostream>
#include<math.h>
using namespace std;

   int factorial(int n) 
   {
    if( n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
   }
int main() {
cout << "Enter n and r to calculate nCr " << endl;
int n, r;
cin >> n >> r;
if( r > n) {
    cout << "nCr is not possible" << endl;
}
else {
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "Answer is " << ans << endl;
}
return 0;
} 