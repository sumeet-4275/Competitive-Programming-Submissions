#include <bits/stdc++.h>
#define ull unsigned long long
#define fl(i,a,b) for(i=a ; i<b ; i++)
#define test lli t;cin>>t;while(t--)
#define vec vector<lli>
#define mp map<lli,lli>
#define deq deque<lli>
#define pb(a) push_back(a)
#define all(x) x.begin(),x.end()
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define r0 return 0
typedef long long int lli;
const lli mod=1000000007;
using namespace std;

int main()
{
    fast
    test
    {
        lli n,i;
        lli val;
        cin>>n;
        set<lli> s;
        fl (i,0,n)
        {
            cin>>val;
            if (val == 0)
                continue;
            s.insert(val);
        }
        cout<<s.size()<<"\n";
    }
    r0;
}