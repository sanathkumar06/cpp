/* convert the given temperature from Celcius to Fahrenheit */

#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
    return (double)(C*9/5)+32;
}

int main()
{
  int t,C;
  cin>>t;
  while(t--)
  {
    cin>>C;
    cout<<floor(cToF(C))<<endl;
  }
  return 0;
}
