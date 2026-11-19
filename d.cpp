#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> m;
        int count=0;
        for (int i = 0; i < n; i++) 
            m[s[i]]++;
        for(char i='a';i<='z';i++)
            if(m[i] % 2 != 0)
                count++;
            if(count - 1 <= k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        
    }       
}