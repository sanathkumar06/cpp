/*  print the absolute value of the interger I */


#include<bits/stdc++.h>
using namespace std;

int absolute(int I) {
    if(I<0)
        return I*-1;
    return I;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<absolute(n)<<endl;
  }
  return 0;
}
