#include <iostream>
using namespace std;
int main() {
 int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {  
                               //code for printing number in first half
        int j=1;
        while(j<=n-i+1)
        {
            cout <<j;
            j++;
           
        }
        
                                  // Star for first half
            int k=i-1;
            while(k){
                cout << "*";
                k--;
            }


                                  //star for second half
                int m=i-1;
            while(m){
                cout << "*";
                m--;
            }                  
            

                                  //code for printing number in second half
            int l=n-i+1;
            while(l>=1)
            {
                cout <<l;
                l--;
            }

        
        

        cout << endl;
    
        i++;
        
    }
    return 0;
}