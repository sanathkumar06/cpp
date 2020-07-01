#include<bits/stdc++.h>
using namespace std;
int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    return ((a%M) + (b%M))%M;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long a;
    long long b;
    cin>>a>>b;
    cout<<sumUnderModulo(a,b);
  }
  return 0;
}
