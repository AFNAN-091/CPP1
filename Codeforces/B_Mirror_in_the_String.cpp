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
  string s;
  cin>>s;
  string ans ;
    if(s[0]=='a')
    {
        cout<<"aa"<<endl;
        return;
    }
    if(s[0]==s[1]){
            cout<<s[0]<<s[1]<<endl;
            return;
    }
    ans+=s[0];
    int i;
    for(i=1;i<s.size();i++)
    {
        if(s[i]<=s[i-1])ans+=s[i];
        else break;
    }

    string ans2;
    for(int i=ans.size()-1;i>=0;i--)ans2+=s[i];
    cout<<ans<<ans2<<endl;
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