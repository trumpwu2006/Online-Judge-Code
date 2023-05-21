/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a,b,gcd=1,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        while(b!=0){
            
            t=b;
            b=a%b;
            a=t;
        }
        
        cout << t << "\n";
        
        
    }
    
    
    
    return 0;
}
