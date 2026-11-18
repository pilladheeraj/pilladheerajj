#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++) {
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i],v[j])<=2){
                    count++;
                }
            }
        }
        if(count>=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}