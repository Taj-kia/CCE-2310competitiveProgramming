// Problem Name : Replace MinMax
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 22/06/25
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int arr[N];
    for (int i=0; i<N; i++) 
    {
        cin >> arr[i];
    }
    int minimum= 0, maximum= 0;
    for (int i=1; i<N; i++) {
        if (arr[i] < arr[minimum]) {
            minimum = i;
        }
        if (arr[i] > arr[maximum]) {
            maximum = i;
        }
    }
    int temp = arr[minimum];
    arr[minimum] = arr[maximum];
    arr[maximum] = temp;
    for (int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
