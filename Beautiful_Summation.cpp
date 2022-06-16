// 20%

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll ;

ll power(ll a , ll b , ll m){
    ll result = 1 ; 
    while(b>0){
        if(b%2 == 1) result*=a%m ;
        result%=m ;
        a*=a%m;
        b/=2;
    }
    return result%m ;
}
 
int main()
{
    int p,q,n,m ; 
    cin>>p>>q>>n>>m;
      
    ll prev = p ;
    ll ans = p ; 
    for (int i = 2; i <= n; i++)
    {
        ans = ans%m + ((prev*p)%m)*(power(i,q,m))%m ; 
        prev = prev*p%m ; 
    }
    cout << ans%m << endl ;
    return 0 ;
}