#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
         a=a+b;
        if(a%2==0){
            cout<<"o";
        }
        else{
            cout<<"x";
        }
    }
}