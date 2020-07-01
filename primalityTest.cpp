/* For a given number N check if it is prime or not */

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N)                      //Time complexity O(sqrt(n))
{
    if(N<=1) return false;
    else if(N<=3) return true;
    if(N%2==0 || N%3==0) return false;

    for(int i=5;i*i<=N;i=i+6)
    {
        if(N%i==0 || N%(i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int N;
    cin>>N;
    if(isPrime(N))
    cout<<"Yes";
    else
    cout<<"No";
    cout<<endl;
  }
  return 0;
}
