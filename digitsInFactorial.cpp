/* find the number of digits that appear in its factorial */

#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N) // finding Number of digits using log10
{
    if(N < 0)
        return 0;
    if(N<=1)
        return 1;
    double digits = 0;
    for(int i = 2; i <= N; i++)
    {
        digits += log10(i);
    }
    return floor(digits)+1;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<digitsInFactorial(n)<<endl;
  }
  return 0;
}
