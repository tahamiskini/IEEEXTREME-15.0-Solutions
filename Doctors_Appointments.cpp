// 80%

#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
const int  MOD =  1000000007 ;


int main(){ 
  int t ; 
  cin>>t ; 
  while (t--)
  {
    int n ; 
    cin>>n ; 
    vector<pair<int,int>>v[n+1] ; 
    for (int i = 1; i <=n ; i++)
    {
      int a,b ; 
      cin>>a>>b ; 
      for (int j = a; j <= b; j++)
      {
        v[j].push_back({b,i}) ; 
      }
    }

    for (int i = 1; i <= n; i++)
    {
      sort(v[i].begin(),v[i].end()) ;
    }

    map<int,int>mp ;
    vector<int>ans ;
    bool ok  ;  
    for (int i = 1; i <= n; i++)
    {
      ok = false ; 
      for (int j = 0; j < v[i].size(); j++)
      {
        if(mp[v[i][j].second]==0){
          mp[v[i][j].second]++ ;
          ans.push_back(v[i][j].second) ;
          ok = true ; 
          break ;
        }
      }
      if(!ok){
        break ; 
      }
    }
    if(!ok){
      cout << "impossible" << endl ; 
    }else{
      for (int i = 0; i < ans.size(); i++)
      {
        cout << ans[i] << " " ;  
      }
      cout << endl ;
    }
    
  }
  
  return 0 ;
}
