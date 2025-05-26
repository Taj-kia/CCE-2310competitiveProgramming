// Problem Name : Char
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 24/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='A'&&c<='Z')
    {
        cout<<(char)(c+32);
    }
    else{
        cout<<(char)(c-32);
    }
}
