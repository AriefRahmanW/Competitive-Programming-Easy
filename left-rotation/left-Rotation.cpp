#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, temp, pos;
    cin>>n;
    cin>>d;
    vector<int> a(n);
    for(int i =0; i < n; i++){
        cin>>a[i];
    }


    for(int i = 0; i < d; i++){
        temp = a[0];
        for(int j = 0; j < n - 1; j++){
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<< " ";
    }
    return 0;
}


