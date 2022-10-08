#include <bits/stdc++.h>
using namespace std;
#define pfi(a) printf("%d",a);
#define pfl(a) printf("%lld",a);
#define pfin(a) printf("%d\n",a);
#define pfln(a) printf("%lld\n",a);
#define pfis(a) printf("%d ",a);
#define pfls(a) printf("%lld ",a);
#define sfi(a) scanf("%d",&a);
#define sfl(a) scanf("%lld",&a);
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define lb lower_bound
#define ub upper_bound
#define bp(i) __builtin_popcount(i)
ll mod=1e9+7;


int main()
{
   int t;cin>>t;
   while(t--)
   {
      ll n,sum=0;cin>>n;
      string s;cin>>s;
      ll arr[n];
      for(int i=0;i<n;i++)
      {
         if(s[i]=='L')
         {arr[i]=i; sum+=i;}
         else
           {arr[i]=n-i-1; sum+=(n-i-1);}
      }
      int p=n;
      vector<pair<ll,char>>v;
      for(int i=0;i<n;i++)
      {    if(s[i]=='L')
         v.push_back({i,'L'});
         else
           v.push_back({n-i-1,'R'});
      }
      sort(v.begin(),v.end());
      ll arr1[n];
      for(int i=0;i<n;i++)
        {    
             ll h= max(v[i].first,(n-v[i].first-1)) ;
              if(h==v[i].first )
               arr1[i]=0;
            else
               {arr1[i]=(n-2*v[i].first-1);
                  }
        }
         for(int i=0;i<n;i++)
        {   
           sum+=arr1[i];
           cout<<sum<<" ";
         }
         cout<<endl;
   }
}
