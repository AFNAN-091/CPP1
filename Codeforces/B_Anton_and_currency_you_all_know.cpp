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

    string s;

    cin>>s;
    
    bool flag = 0;
    a = s[s.size()-1] - '0';
    for(int i=0; i<s.size(); i++)
    {
        b = s[i] - '0';
        if(b%2==0 and b<a)
        {
            swap(s[i],s[s.size()-1]);
            flag = true;
            break;
        }
    }

    if(!flag)
    {
        for(int i=s.size()-1; i>=0; i--)
        {
            b = s[i] - '0';
            if(b%2==0)
            {
                swap(s[i],s[s.size()-1]);
                flag = true;
                break;
            }
        }
        
    }

    if(flag)
    {
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    



    exit(0);
}