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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n;

    vi v(n);

    for(auto &it: v)
    {
        cin>>it;
    }
    int st,en;
    st = 0;
    en = 0;
    ll mx = v[0];
    while(st<n and v[st]<v[st+1])
    {
        if(mx<v[st])
        {
            mx = v[st];
        }
        st++;
    }
    if(st==n)
    {
        cout<<"yes"<<endl<<1<<" "<<1<<endl;
        return 0;
    }
    int i;

    for(i=st; i<n-1; i++)
    {
        
        if(v[i]>v[i+1])
        {
            if(mx < v[i])
            {
                mx = v[i];
            }
            continue;
        }
        else {
            en = i;
           
            break;
        }
    }

    en = i;

    for(int i=en; i<n-1; i++)
    {
        if(v[i]<v[i+1] and mx<v[i+1])
        {
            
            continue;
        }
        else{
            cout<<"no"<<endl;
            return 0;
        }
    }

    if(v[0]==2 and v[n-1] == 1)
    {
        cout<<"no"<<endl;
        return 0;
    }

    cout<<"yes"<<endl<<st+1<<" "<<en+1<<endl;


    exit(0);
}