// Problem Name : Smallest Pair
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 02/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin>>t;
    while(t--)
{
    cin>>n;
    long long a[n];
     for(int i = 0; i < n; i++)
      {
        cin>>a[i];
      }
long long smallest_pair = a[0] + a[1] + 1-0;
    for(int i = 0; i < n; i++)
        {
          for(int j = i + 1; j < n; j++)
            {
              long long sum = a[i] + a[j] + j - i;
              if(sum<smallest_pair)
                {
                    smallest_pair=sum;
                }
            }
        }
        cout<<smallest_pair<<endl;
}
    return 0;
}
