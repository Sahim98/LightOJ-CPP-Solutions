/// In the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el  '\n'
#define st ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);;
ll Pow(ll a, ll x){ll res = 1;while (x > 0){if (x % 2 != 0)res = (res * a) ;a = (a * a) ;x >>= 1;}return res;}



int main()
{

   int n ,t, m , num ;

   cin >> t ;

   for(int i = 1 ; i <= t ; i++){
        cout << "Case " << i <<":\n" ;

   deque<int> dq ;
   cin >>n >> m ;
    string  s ;
   while(m--){
    cin >> s  ;

    if(s == "pushLeft"){
            cin >> num ;
            if(dq.size() == n) cout << "The queue is full\n";
        else{
            dq.push_front(num);
            cout <<   "Pushed in left: " << num << el ;
        }
    }
    else if(s == "pushRight"){
          cin >> num ;
        if(dq.size() == n) cout << "The queue is full\n";
        else{
            dq.push_back(num);
            cout <<   "Pushed in right: " << num << el ;
        }

    }
    else if(s == "popRight"){

         if(dq.size() == 0) cout << "The queue is empty\n" ;

        else{
           cout <<   "Popped from right: " << dq.back() << el ;
           dq.pop_back() ;
        }

    }
    else{
        if(dq.size() == 0) cout << "The queue is empty\n" ;

        else{
         cout <<   "Popped from left: " << dq[0] << el ;
         dq.pop_front() ;
        }
    }
   }
   }
}
