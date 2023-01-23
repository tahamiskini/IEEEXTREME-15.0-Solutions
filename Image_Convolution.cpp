// 66%

#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int r,c,a,b ; 
        cin>>r>>c ;
        vector<string>vv,p ; 
        for (int i = 0; i < r; i++)
        {
            string s ; 
            cin>>s ; 
            vv.push_back(s) ;
        }
        cin>>a>>b ;
        for (int i = 0; i < a; i++)
        {
            string s ; 
            cin>>s ;
            p.push_back(s) ; 
        }
        
        int res = 0 ; 
        for (int i = 0; i <=r-a; i++)
        {
            for (int j = 0; j <= c-b; j++)
            {
                int cmp = 0 ; 
                for (int k = i,v=0 ; k < i+a && v<a; k++,v++)
                {
                    for (int l = j,u=0; l < j+b && u<b; l++,u++)
                    {
                        if(p[v][u]!='?'){
                            if(p[v][u]==vv[k][l]){
                                cmp++ ; 
                            }
                        }else{
                            cmp++ ; 
                        }
                    }
                }
                if(cmp==a*b) res++ ; 
            }
        }

        cout << res << endl ;
        
    }
    return 0 ;
}