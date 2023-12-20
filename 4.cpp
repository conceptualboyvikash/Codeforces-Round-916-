 /*            Conceputalboy vikash         */
 /*                 हर हर महादेव              */
 #include <bits/stdc++.h>
 #include <unordered_set>
 #include <unordered_map>
 #define pi 3.14159265358979323846
 #define int long long
 #define endl  "\n"
 #define ld long double
 #define pow powl
 #define sqrt sqrtl
 #define inf 1e18 
 #define mp make_pair
 #define loop(i,a,n); for(int i=a;i<n;i++)
 
 #define full(a) a.begin(), a.end()
 #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 //#define mod 1000000007
 #define mod2 998244353
 using namespace std;
 const int MOD=1000000007;
int gcd(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}
 
 
    /*  sort by second  */
 // bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
 // {
 //     if (a.second == b.second)
 //         return (a.first > b.first);
 //     else
 //         return (a.second < b.second);
 // }
 
         /*binary search in a vector */
 
 /*bool bsv(vector<int> &a, int x){
     int s=0;
     int e=a.size()-1;
     while(s<=e){
         int mid=(s+e)/2;
         if(a[mid]==x){
             return 1;
         }else if(x<a[mid]){
             e=mid-1;
         }else{
             s=mid+1;
         }
     }
     return 0;
 }*/
 
 
         /*palindrome checker*/
 
 // bool pallindrome(string s){
 //     int n=s.size();
 //     for(int i=0; i<n/2; i++){
 //         if(s[i]!=s[n-1-i]){
 //             return 0;
 //         }
 //     }
 //     return 1;
 // }
 
 
     /* seive or erothnous */
 
 // unordered_set<int> primes;
 // vector<bool> prime(10000001,true);
 // void SieveOfEratosthenes(int n){
 //     for (int p = 2; p<=n; p++) {
 //         if (prime[p] == true) {
 //             for (int i = p * p; i <= n; i += p)
 //                 prime[i] = false;
 //         }
 //     }
 //     for(int i=2; i<=n; i++){
 //         if(prime[i]){
 //             primes.insert(i);
 //         }
 //     }
 // }
 
 
         /* Is the no perfect square*/
 
 // bool isperfectsquare(int n){
 //     long double x=sqrt(n);
 //     int y=sqrt(n);
 //     if(x==y) return 1;
 //     else return 0;
 // }
 
 
 
 /*   Prime Checker*/
 
 
 // int isprime(int n){
 //     if(n==1) return 0;
 //     for(int i=2; i*i<=n; i++){
 //         if(n%i==0) return 0;
 //     }
 //     return 1;
 // }
 
  
  /*lexographically miminum*/
 // string lexmin(string &a,string &b){
 //     if(a==b) return a;
 //     int n=a.size();
 //     int m=b.size();
 //     int i=0; int j=0;
 //     while(i<n && j<m){
 //         if(a[i]>b[j]){
 //             return b;
 //         }else if(a[i]<b[j]){
 //             return a;
 //         }
 //         i++;
 //         j++;
 //     }
 //     if(m>n){
 //         return a;
 //     }else{
 //         return b;
 //     }
 // }
 
 
 /*NCR*/
 
// int nCr(int n,int r)
// {
//         int sum = 1;
//         for(int i = 1; i <= r; i++){
//             sum = sum * (n - r + i) / i;
//         }
//       return sum;
// }
 
                         /*NCR END */
                 
 
 /*npr and factorial*/
 // int fact(int n)
 // {
 //     int fac=1;
 //     for(int i=2;i<=n;i++)
 //		 fac*=i;
 //     return fac;
 // }
  
 // int npr(int n, int r)
 // {
 //     return fact(n)/fact(n-r);
 // }
 
 
 /*Npr and factorial */
     /*POWER IN EASY WAY*/
 
 
// int power(int a, int b)
// {
//     if (a == 0)
//         return 0;
//     int res = 1;
//     while (b)
//     {
//         if ((b & 1))
//         {
//             res = res*a;
//         }
//         a=a*a;
//         b = b >> 1;
//     }
//     return res;
// }
 
 
 
void input(vector<int> &a)
{
    for (int &x : a)
        cin >> x;
}
void output(vector<int> &a)
{
    for (int &x : a){
        cout<<x<<" ";
    }
    cout<<endl;
}
 
 
 signed main()
 {
 
     fast
   //  SieveOfEratosthenes(10);
  
     int z;
     cin>>z;
     while(z--)
     {
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        loop(i,0,n) cin>>a[i];
        loop(i,0,n) cin>>b[i];
        loop(i,0,n) cin>>c[i];
        int a1,a1i,b1,b1i,c1,c1i;
        a1=0,b1=0,c1=0;
        for(int i=0;i<n;i++)
        {
               if(a[i]>a1)
               {
                    a1=a[i];
                    a1i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(a[i]>b1 && i!=a1i)
               {
                    b1=a[i];
                    b1i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(a[i]>c1 && i!=a1i && i!=b1i)
               {
                    c1=a[i];
                    c1i=i;
               }
        }
        int a2,a2i,b2,b2i,c2,c2i;
        a2=0,b2=0,c2=0;
        for(int i=0;i<n;i++)
        {
               if(b[i]>a2)
               {
                    a2=b[i];
                    a2i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(b[i]>b2 && i!=a2i)
               {
                    b2=b[i];
                    b2i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(b[i]>c2 && i!=a2i && i!=b2i)
               {
                    c2=b[i];
                    c2i=i;
               }
        }
        int a3,a3i,b3,b3i,c3,c3i;
        a3=0,b3=0,c3=0;
        for(int i=0;i<n;i++)
        {
               if(c[i]>a3)
               {
                    a3=c[i];
                    a3i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(c[i]>b3 && i!=a3i)
               {
                    b3=c[i];
                    b3i=i;
               }
        }
        for(int i=0;i<n;i++)
        {
               if(c[i]>c3 && i!=a3i && i!=b3i)
               {
                    c3=c[i];
                    c3i=i;
               }
        }
        int arr[3]={a1,b1,c1};
        int brr[3]={a2,b2,c2};
        int crr[3]={a3,b3,c3};
        int arri[3]={a1i,b1i,c1i};
        int brri[3]={a2i,b2i,c2i};
        int crri[3]={a3i,b3i,c3i};
        int ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arri[i]==brri[j])
                {
                    continue;
                }
                for(int k=0;k<3;k++)
                {
                   if(arri[i]==crri[k] || brri[j]==crri[k])
                    {
                        continue;
                    }
                    else
                    {
                        ans=max(ans,arr[i]+brr[j]+crr[k]);
                    }
                }
            }

        }
        cout<<ans<<endl;


            
        }


         
     
  
 
     return 0;
 }			