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
  
}

ll arr[51];

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n>>t;

  

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(!arr[x]){
            arr[x] = i;
        }      
    }

    // for(auto it: v)
    // {
    //     cout<<it<<endl;
    // }

    while(t--)
    {
        cin>>x;
        a = arr[x];

        for(int i=1; i<51; i++)
        {
            arr[i]+= 0<arr[i] and arr[i]<a;
        }
        arr[x] = 1;
        cout<<a<<" ";
    }

    cout<<endl;

    exit(0);
}