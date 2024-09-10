#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<int> arr;
    for (int i=0; i<n;i++) {
        int temp;
        cin>>temp;
        arr.push(temp);
    }

    int i =0;

    while (arr.size()>0) {
        arr.front() -= m;
        if (arr.front()<=0){
            arr.pop();
        }
        else {
            int temp = arr.front();
            arr.pop();
            arr.push(temp);
        }
        if (i==n) {
            i=0;
        }
        i+=1;
    }
    cout<<i;

    return 0;
}