/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int comparison(int a,int b){
    
    if(a>b){
        cout << ">\n";
    }
    else if(a==b){
        cout << "=\n";
    }
    else{
        cout << "<\n";
    }
    
    return 0;
}

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;
    if(a>=0 && b>=0){
        comparison(a,b);
    }
    else{
        if(c%2==0){
            if(a<0){
                a=-a;
            }
            if(b<0){
                b=-b;
            }
            comparison(a,b);
        }
        else{
            comparison(a,b);
        }
    }
    
    
    return 0;
}
