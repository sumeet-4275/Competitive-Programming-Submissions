// July Long Challenge 1
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
        string s1,s2;
        cin>>s1>>s2;
        s1.erase(remove(s1.begin(), s1.end(), ','), s1.end());
        s2.erase(remove(s2.begin(), s2.end(), ','), s2.end());
        if (s1 == s2)
            cout<<"equal\n";
        else
            cout<<"different\n";
    }
    r0;
}