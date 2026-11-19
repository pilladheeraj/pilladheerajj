#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int count=b;
        for (int i = 0; i < n; i++) {
            long long int x;
            cin>>x;
            count+=min(a-1,x);
        }       
        cout<<(count)<<endl;
    }
}