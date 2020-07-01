/* find how many numbers less than or equal to N have numbers of divisors exactly equal to 3 */

#include<bits/stdc++.h>
using namespace std;

int exactly3Divisors(int N)
{
  int count = 0;

  if(N<=3) return 0;
  int sq =sqrt(N);
  bool prime[sq+1] = {false};           //Implementing SieveOfEratosthenes to find the prime Numbers
  prime[0] = prime[1] = true;
  for(int i = 2; i*i<=sq+1;i++)
  {
    if(prime[i]==false)
    {
      for(int j = 2; j*i<=sq+1;j++)
      {
        prime[i*j] = true;
      }
    }
  }
  for(int i = 2;i<=sq;i++)
  {
    if(prime[i]==false && i*i<=N)
    {
      count+=1;
    }
  }
  return count;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<exactly3Divisors(n)<<endl;
  }
  return 0;
}
