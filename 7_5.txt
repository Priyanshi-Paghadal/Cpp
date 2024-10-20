#include<iostream>
using namespace std;

int main() {
    int n,count;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int count = 1;
        if(a[i] != -1)
        {
            for(int j = i + 1; j < n; j++) {
                if(a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
            cout << a[i] << " => " << count << endl;
        }
    }
    return 0;
}
