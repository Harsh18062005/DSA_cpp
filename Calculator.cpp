#include<iostream>
#include<math.h>
using namespace std;
int main() {
cout << "Enter two numbers to perform operations " << endl;
int a, b;
cin >> a >> b;
cout << "Enter the operation you want to perform " << endl;
char op;
cin >> op;
switch(op) {
case '+':
cout << a + b << endl;
break;
case '-':
cout << a - b << endl;
break;
case '*':
cout << a * b << endl;
break;
case '/':
if( b != 0) {
cout << a / b << endl;
}
else {
cout << "Division by zero is not allowed" << endl;
}
break;
default:
cout << "Invalid operation" << endl;    
}
}