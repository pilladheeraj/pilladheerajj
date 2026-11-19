#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum( ll n){
    return n*(n+1)/2;;
}

int main() 
{
    int t;
    cin>>t;
    while(t--){
        ll  n , k , x; cin >> n >> k >> x;
        ll  min = sum(k);
        ll total=sum(n);
        ll  middle=sum(n-k);
        ll  max=total-middle;

        if(min<=x && x<=max){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}