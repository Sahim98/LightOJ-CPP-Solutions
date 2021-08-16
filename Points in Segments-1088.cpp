#include"bits/stdc++.h"
using namespace std;
typedef long long               ll ;
typedef long double             ld ;
typedef unsigned long long      ull ;
typedef pair<int,int>           pii ;
typedef vector<int>             vi ;
typedef vector<vector<int>>     vvi ;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl  '\n'


#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {cout << endl ;}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ' ' ;
    err(++it, args...);
}




int a[100008];

int upper_search(int a[],int key,int l){
int b=0,e=l-1,index=0,mid;
while(b<=e){
        mid=(b+e)/2;
        if(key==a[mid]){
            index=mid;
            //e=mid-1;//for lower bound
            b=mid+1;//for upper bound
        }
        else if(key>a[mid]){
            b=mid+1;
        }
        else if(key<a[mid]){
            e=mid-1;
        }
}
return b+1;

}



int lower_search(int a[],int key,int l){
int b=0,e=l-1,index=0,mid;
while(b<=e){
        mid=(b+e)/2;
        if(key==a[mid]){
            index=mid;
            e=mid-1;//for lower bound
           // b=mid+1;//for upper bound
        }
        else if(key>a[mid]){
            b=mid+1;
        }
        else if(key<a[mid]){
            e=mid-1;
        }
}
return b+1;

}







int main(){
    //fast()

      int n,s,s1,s2,r=0,T,i,x,y,j,p;

      scanf("%d",&T);
        for( j=1;j<=T;++j){

        scanf("%d %d",&n,&s);


        for(i=0;i<n;i++)scanf("%d",&a[i]);

          printf("Case %d:\n",j);

            for( p=1;p<=s;p++){

               scanf("%d %d",&s1,&s2);

                y=upper_search(a,s2,n);

                x=lower_search(a,s1,n);

              printf("%d\n",y-x);
            }
      }
}
