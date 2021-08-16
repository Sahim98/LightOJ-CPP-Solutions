/// In the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

ll Pow(ll a, ll x){
    ll res = 1;
    while (x > 0){
            if (x % 2 != 0)res = (res * a) ;
            a = (a * a) ;
            x >>= 1;}
            return res;
}




int  n,t,d;

int main()
{
    cin >> t ;

    for(int k = 1; k <= t ; k++){
        cin >> n >> d ;
        vector<int> v(n) ;
        for(int &x:v)cin >> x ;
        multiset<int> ms ;
        cout << "Case " << k << ": " ;
        ms.insert(v.begin(),v.begin()+d)  ;
        set<int> s ;
        if(n==d){
            cout << *ms.rbegin() - *ms.begin() << endl ;
        }
        for(int i = d; i < n ; i++){
             s.insert( *ms.rbegin() - *ms.begin() ) ;
             ms.erase(v[i-d]) ;
             ms.insert(v[i]) ;
        }
        if(s.size())cout << *s.rbegin() << endl ;
    }




}
