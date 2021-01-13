#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,i,mini;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2!=0){
            for(i=3;i<=n;i=i+2){
                if(n%i==0){
                    mini=i;
                    break;
                }
            }
            n=n+mini;
            cout<<n+2*(k-1)<<endl;
        }
        else{
            cout<<n+2*k<<endl;
        }
    }
    return 0;
}
