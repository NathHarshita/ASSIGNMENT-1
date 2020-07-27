#include<iostream>
using namespace std;
int main ()
{
    int A[50], s, i, j, k;
    cout << "Enter size ";
    cin >> s;
    cout << "Enter elements ";
    for (i = 0; i < s; i++)
        cin >> A[i];
    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (A[i] < A[j])
            {
                k = A[i];
                A[i] = A[j];
                A
                [j] = k;
            }
        }
    }
    cout << "second max no.: " << A[1];
    cout << "\nsecond min n0.: " << A[s - 2];
    return 0;
}
