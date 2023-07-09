// // // #include <bits/stdc++.h>
// // // #define ull unsigned long long
// // // #define ll long long
// // // #define rep(i,a,b) for(ll i=a;i<b;i++)
// // // #define vi vector<ll> 
// // // #define pb push_back
// // // #define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
// // // using namespace std;
// // // int factorial(int n)
// // // {
// // //     if(n<=1) 
// // //         return 1;
// // //     return n*factorial(n-1);
// // // }
// // // int main()
// // // {
// // //     int n;cin>>n;
// // //     cout<<factorial(n);
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // #define ull unsigned long long
// // #define ll long long
// // #define rep(i,a,b) for(ll i=a;i<b;i++)
// // #define vi vector<ll> 
// // #define pb push_back
// // #define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
// // using namespace std;
// // int sum(int n)
// // {
// //     if(n<=1) return 1;
// //     return n+sum(n-1);
// // }
// // int main()
// // {
// //     int n;cin>>n;
// //     cout<<sum(n)<<" "<<(n)*(n+1)/2;   
// //     return 0;
// // }

// #include <bits/stdc++.h>
// #define ull unsigned long long
// #define ll long long
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define vi vector<ll> 
// #define pb push_back
// #define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
// using namespace std;
// void display(int n)
// {
//     if(n==1)
//     {
//         cout<<1<<" ";
//         return;
//     }
//     display(n-1); cout<<n<<" ";
// }
// int main()
// {
//     int n;cin>>n;display(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ull unsigned long long
// #define ll long long
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define vi vector<ll> 
// #define pb push_back
// #define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
// using namespace std;
// int dns(int n)
// {
//     static int sum=0;
//     if(n==1)
//     {
//         sum+=1;
//         cout<<1;
//         return sum;
//     }
//     dns(n-1);
//     sum+=n;
//     cout<<"+"<<n;
//     return sum;
// }
// int main()
// {
//     int n;cin>>n;
//     int sum=dns(n);
//     cout<<"="<<sum;
//     return 0;
// }

#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;
int sod(int n)
{
    static int sum=0;
    if(n%10==n)
    {
        cout<<n<<" ";
        sum+=n;
        return sum;
    }
    sod(n/10);
    sum+=(n%10);
    cout<<n%10<<" ";
    return sum;
}
int main()
{
    int n;cin>>n;cout<<"\n"<<sod(n);
    return 0;
}