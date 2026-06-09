#include <iostream>
using namespace std;
int main() {
 int n;
    cin >> n;
    int i=1;
    while(i<=n)
    { 
        int spaces = n - i;
        while(spaces)
        {  cout << " ";
            spaces--;
        }
        int j=1;
        while(j<=i)
        {
            cout <<j;
            j++;
           
        }
        
         
            int k=i-1;
            while(k){
                cout << k;
                k--;
            

        }
        

        cout << endl;
    
        i++;
        
    }
    return 0;
}