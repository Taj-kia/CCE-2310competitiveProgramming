// Problem Name : Comparison
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='>')
    {
        if(a>b)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
    if(s=='<')
    {
        if(a<b)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }
        if(s=='=')
    {
        if(a==b)
            cout<<"Right"<<endl;
        else
            cout<<"Wrong"<<endl;
    }

return 0;
}
