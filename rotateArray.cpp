/*
Given an unsorted array arr[] of size N,
rotate it by D elements in the counter-clockwise direction.
*/

#include<bits/stdc++.h>
using namespace std;


int gcd(int a , int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}


void rotateArr(int arr[], int d, int n){
  d=d%n;
  int i,j,k,temp;
  int groups = gcd(d,n);
  for(i = 0; i<groups; i++)
  {
      temp = arr[i];
      j = i;
      while(1)
      {
        k=d+j;
        if(k>=n) k=k-n;
        if(k==i) break;
        arr[j] = arr[k];
        j = k;
      }
      arr[j] = temp;
  }
}


int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i =0;i<n;i++)
    {
      cin>>arr[i];
    }
    rotateArr(arr, d, n);
    for(int i =0; i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
