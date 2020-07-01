/* Given a quadratic equation in the form ax2 + bx + c. You need to print roots of it */

#include<bits/stdc++.h>
using namespace std;

void quadraticRoots(int a,int b, int c)
{
   int fir;
   float root1, root2;
   fir = b*b - 4*a*c;
   if(fir < 0)
    cout<<"Imaginary";
   else{
   root1 = floor((-1*b + sqrt(fir))/(2.0*a));
   root2 = floor((-1*b - sqrt(fir))/(2.0*a));
   if(root1 == -0)
    root1 = 0;
   if(root2 == -0)
    root2 = 0;
   if(root1>=root2)
   cout<<root1<<' '<<root2;
   else
   cout<<root2<<' '<<root1;
   }
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    quadraticRoots(a, b, c);
    cout<<endl;
  }
  return 0;
}
