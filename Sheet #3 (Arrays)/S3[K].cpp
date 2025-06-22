// Problem Name : Sum Digits
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 22/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    string number;
    long long sum = 0;
    cin>>N>>number;
    for (long long i=0; i<N; i++)
    {
        sum+=number[i]-'0';
    }
    cout<<sum<<endl;
    return 0;
}
