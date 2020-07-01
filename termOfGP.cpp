/* Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series. */

#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    //Your code here
    double r = (double)B/(double)A;
    return A*pow(r,N-1);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int A,B;
    cin>>A>>B;
    int N;
    cin>>N;
    cout<<floor(termOfGP(A,B,N))<<endl;
  }
  return 0;
}
