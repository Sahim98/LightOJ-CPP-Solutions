/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;


#define endl '\n' 
#define F first
#define S second
#define pb push_back()
#define inf 0x3f3f3f3f
#define MOD 1000000007
#define digit(n) floor(log10(n))+1
#define infll 0x3f3f3f3f3f3f3f3fLL
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<<"Case "<<x<<": ";
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<< endl 
#define ver(expression) cout<<(expression?"YES\n":"NO\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);



ll Pow(ll a, ll x){ll res = 1;
while (x > 0){if (x % 2 != 0)res = (res * a) ;
    a = (a * a) ;x >>= 1;}return res;}
    ll sum_of_even(ll r){return (r+1LL)*r ;}
    ll sum_of_odd(ll r){return r*r ;}

    
    
template<typename T>  //printing vector
    ostream& operator<< (ostream& out, const vector<T>& v) {
        out << "{";size_t last = v.size() - 1;
        for(size_t i = 0; i < v.size(); ++i) {out << v[i];if (i != last)out << ", ";}
            out << "}";return out;
    } 
template <typename T> //printing set
    ostream& operator<<(ostream& os, const set<T>& v){
        os << "{";for (auto it : v) {os << it;if (it != *v.rbegin())os << ", ";}
        os << "}\n";return os;
    }
    template<size_t N>
    void print(int (&a)[N]){for(int e: a)cout << e <<' ';cout << endl ;}
    
template <typename T, typename S>//printing map
    ostream& operator<<(ostream& os, const map<T, S>& v){
        for (auto it : v) os << it.first << " : " << it.second << "\n";
            for (auto it : v) os << it.first << " : " << it.second << "\n";
                return os;
        }


#define bug(args...) {string _s = #args; replace(_s.begin(),_s.end(),',',' ');stringstream _ss(_s);istream_iterator<string>_it(_ss);err(_it,args);}  
        void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
        void err(istream_iterator<string> it, T a, Args... args) {
            cerr << *it << " = " << a << " , ";
            err(++it, args...);
        }


const int N = 1e5+5  ;

void solve()
{
    fast 
    int n , m ;        

    cin >> n >> m ; 

    std::vector<int> v(n) , pre_sum(n+1);

    int arr[N]={0} ; 

    for(int& x : v) cin >> x ;

        for (int i = 1; i <= n; ++i)
        {
            pre_sum[i] = (v[i-1] + pre_sum[i-1]) % m ; 

        }
        ll cnt = 0 ; 

        arr[0]++;

        for (int i = 1; i <= n; ++i)
        {
            cnt += arr[pre_sum[i]];
            arr[pre_sum[i]]++ ;
        } 

        cout << cnt << endl ;
}       


int main()
{

    fast 
    int  t = 1 ;

    cin >> t ;

    for (int i = 0; i < t; ++i)
    {
        case(i+1) ;
        solve() ;
    }

}
