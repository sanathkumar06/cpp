/*find smallest modular multiplicative inverse of a under modulo m*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)                  //function to calculate the gcd of a and m
{
    if(a==0) return b;
    return gcd(b%a,a);
}

int modInverse(int a, int m)           //Calculating inverse mod
{
    if((gcd(a,m))!=1) return -1;
    for(int i=0; i<=m;i++)
    {
        if((i*a)%m == 1) return i;
    }
    return -1;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,m;
    cin>>a>>m;
    cout<<modInverse(a,m)<<endl;
  }
  return 0;
}
