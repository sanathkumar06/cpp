/*
Given a sorted array A of size N. The function remove_duplicate takes two arguments .
The first argument is the sorted array A[ ] and the
second argument is 'N' the size of the array and
returns the size of the new converted array A[ ] with no duplicate element.
*/

#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(int A[],int N)
{
    int j = 0;
    for(int i = 0; i<N-1; i++)
    {
        if(N==0||N==1) return N;
        if(A[i]!=A[i+1])
        {
            A[j++] = A[i];
        }
    }
    A[j++] = A[N-1];
    return j;
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
      cin>>a[i];
    }
    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }
  return 0;
}
