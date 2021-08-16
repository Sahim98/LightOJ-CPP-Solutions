
/// In the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define sort(v) sort(v.begin(),v.end())


ll Pow(ll a, ll x){
    ll res = 1;
    while (x > 0){
            if (x % 2 != 0)
            res = (res * a) ;
            a = (a * a) ;
            x >>= 1;}
            return res;
}

template <class... Args>
auto &see(const Args &... args){
return ((cerr << " " << args), ...) <<'\n'; }
#define bug(...) cerr<<"[" #__VA_ARGS__ "]=";see(__VA_ARGS__) <<'\n';



int main()
{

    fast
    int n ,t,cs = 1;
    cin >> t;
   while(cs <= t)
    {
        int ans =  0 ;
        cin >> n ;
        vector<int> a(n) ;
        for(int &x : a) cin >> x ;

        sort(a) ;
        int cmp  = 0 ;
        for(int i = 0 ; i < n ; i++)
        for(int j = i + 1 ; j < n ; j++){
                int l = j+1, r =  n-1 , m ;
                cmp = a[i] + a[j];
                int inx = upper_bound(a.begin(),a.end(),cmp-1)-a.begin() ;
                inx--;
                if(inx > j) ans += inx-j ;

        }

        cout << "Case " << cs++ << ": " << ans << endl ;
    }


}
