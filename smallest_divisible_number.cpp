/* Program to find the smallest number evenly divisible by each number from 1 to n */

#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector <int> primeNo;

void SieveOfEratosthenes()       //Pre-computing all the prime numbers upto 10^5
{
  bool prime[MAX] = {false};
  for(int i = 2; i*i<=MAX; i++)
  {
    if(prime[i]==false)
    {
      for(int j=2;j*i<=MAX;j++)
      {
        prime[i*j] = true;
      }
    }
  }
  for(int i = 2; i <= MAX; i++)
  {
    if(prime[i] == false)
    {
      primeNo.push_back(i);
    }
  }
}

long long getSmallestDivNum(long long n)    // LCM of numbers till N
{
  long long lcm = 1;
  for(int i=0; i<primeNo.size() && primeNo[i]<=n; i++)
  {
    int highest_power = primeNo[i];
    while(highest_power*primeNo[i]<=n)
    {
      highest_power*=primeNo[i];
    }
    lcm*=highest_power;
    lcm%=1000000007;
  }
  return lcm;
}

int main()
{
  SieveOfEratosthenes();
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<getSmallestDivNum(n);
  }
  return 0;
}
