#include <iostream>
using namespace std;
int main() {
    int m,n,p,q,i,j;
    m=2;
    n=2;

    cout<<"Matrix A:"<<endl;
    int **A = new int*[m];
    for (int i = 0; i < m; ++i)
    {
        A[i] = new int[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> A[i][j];
        }
    }
    p=n;
    q=2;
    cout<<"Matrix B:";
    int **B = new int*[p];
    for (int i = 0; i < p; ++i)
    {
        B[i] = new int[q];
        for (int j = 0; j < q; ++j)
        {
            cin >> B[i][j];
        }
    }
    int **c = new int*[m];
    for (int i = 0; i < m; ++i)
    {
        c[i] = new int[q];
        for (int j = 0; j < q; ++j)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; ++k)
            {
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Dot Product of A and B:" << endl;
    if(n==p && n != NULL)
    {
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}