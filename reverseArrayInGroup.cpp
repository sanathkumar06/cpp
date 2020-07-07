/* Given an array arr[] of positive integers of size N.
 Reverse every sub-array of K group elements */


 vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
     if(n < k)
     {
         k = n;
     }
     int d = k - 1, m = 2;
     int i = 0;

     for(i = 0; i < n; i++)
     {

        if (i >= d)
        {
            // Update the variables
            d = k * (m);
            if(d >= n)
            {
                d = n;
            }
            i = k * (m - 1) - 1;
            m++;
        }
        else
        {
            long long t = mv[i];
            mv[i] = mv[d];
            mv[d] = t;
        }
        d = d - 1;
     }
     return mv;
 }

 int main()
 {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     vector <long long> mv;
     int k;
     cin>>k;
     for(long long i =0;i<n;i++)
     {
       long long x;
       cin>>x;
       mv.push_back(x);
     }
     mv = reverseInGroups(mv, n, k);
     for(long long i =0; i<n;i++){
       cout<<mv[i]<<" ";
     }
     cout<<endl;
   }
 }
