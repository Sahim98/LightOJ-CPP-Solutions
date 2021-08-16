      //         +---------In the name of ALLAH--------+      \\
Aurthor:@sahim salem, Time:9:27 PM Date:4/30/2020


#include<bits/stdc++.h>
#define ll long long
using namespace std;


//prerequirement:Cross Ladder Theorem

double x,y,c;
int t;

template<class T>
T calculate(T base){
   T h1=sqrt((x*x)-(base*base));
   T h2=sqrt((y*y)-(base*base));

     return (h1*h2)/(h1+h2);

}

double bisection(){
    double low,high,base,h1,h2,res;

    low=0.0,high=min(x,y);

    int cnt=100;

    while(cnt--){
        base=(low+high)/2.0;
        if(calculate(base)<=c){//fact: width is propotional to height in cross ladder
            high=base;
        }
        else{
            low=base;
        }

    }
    return base;
}



int main(){
   // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        scanf("%lf %lf %lf",&x,&y,&c);
        printf("Case %d: %lf\n",i,bisection());

    }
return 0;
}
