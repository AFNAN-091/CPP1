//           * * ببسم الله الرحمن الرحيم    * *
// ********************@Author**************************************
//     ____     _____   __  _     ____     __  _
//    / __ \   | ____| |  \| |   / __ \   |  \| |
//   / /__\ \  | |__   | |\  |  / /__\ \  | |\  |
//  /_/    \_\ |_|     |_| \_| /_/    \_\ |_| \_|
 
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lcm(a,b)    a*b/__gcd(a,b)
#define endl '\n'
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  ll n;
  cin>>n;
  if(n==1e9)
  {
    cout<<0<<endl;
  }
  else if(n>=100000000)
  {
    cout<<n-100000000<<endl;
  }
   else if(n>=1e7)
  {
    cout<<n-10000000<<endl;
  }
   else if(n>=1e6)
  {
    cout<<n-1000000<<endl;
  }
   else if(n>=1e5)
  {
    cout<<n-100000<<endl;
  }
   else if(n>=10000)
  {
    cout<<n-10000<<endl;
  }
   else if(n>=1e3)
  {
    cout<<n-1000<<endl;
  }
   else if(n>=1e2)
  {
    cout<<n-100<<endl;
  }
   else if(n>=1e1)
  {
    cout<<n-10<<endl;
  }
   else if(n>=1e0)
  {
    cout<<n-1<<endl;
  }
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;

    while(t--)
    {
       AFnaN();
       
    }

    exit(0);
}