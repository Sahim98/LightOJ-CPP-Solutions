#include"bits/stdc++.h"
using namespace std;
typedef long long               ll ;
typedef long double             ld ;
typedef unsigned long long      ull ;
typedef pair<int,int>           pii ;
typedef vector<int>             vi ;
typedef vector<vector<int>>     vvi ;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mem(a) memset(a,0,sizeof(a))
#define mod  1000000007LL
#define     ff          first
#define     ss          second
#define print(p) for(auto x:p){cout<<x<<" ";}


#define bug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {cout << endl ;}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ' ' ;
    err(++it, args...);
}





double ab,bc,ac,k,r1,r,x,ad,de,ae,s,s1,area1,area2;
int j,t;
int main(){
    fast()
    cin>>t;
    while(cin>>ab>>bc>>ac>>r&&t--){
    double low=0.0,high=ab,mid,r1=0;
    while(r1<r||r1>r){
    mid=(high+low)/2;
    x=mid;
    k=x/ab;
   ae=k*ac,de=k*bc;
   s=(x+de+ae)/2;
   s1=(ab+bc+ac)/2;
    area1=sqrt(s*(s-x)*(s-de)*(s-ae));
    area2=sqrt(s1*(s1-ab)*(s1-bc)*(s1-ac));
   r1=area1/(area2-area1);
   //bug(r,r1,x)
   if((r-r1)<=.0000001&&r1<r)break;
   if(r1<r)
    low=mid;
   else
    high=mid;
    }
   printf("Case %d: %.8f\n",++j,x);
}
}
