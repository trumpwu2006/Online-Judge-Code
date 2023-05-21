/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 
using namespace std;
 
int main(){
    
    int y;
    cin >> y;
    if(!(y%4) && (y%100)){ // y%4 == 0 && y%100 != 0;
        cout << "YES\n";
    }
    else if(!(y%4) && !(y%100)){ // y%4 == 0 && y%100 == 0;
        if(!(y%400)){ // y%400 == 0;
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
    
    return 0;
}
