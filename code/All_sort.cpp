#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &a, int n)
{
    int Min = 0;
    for (int i = 0; i < n - 1; i++)
    {
        Min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[Min])
                Min = j;
        }
        swap(a[Min], a[i]);
    }
}

void insertion_sort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = a[i];
        int t = i - 1;
        while (t >= 0 && a[t] > x)
        {
            a[t + 1] = a[t];
            t--;
        }
        a[t + 1] = x;
    }
}
// 1 5 3 2 4
// i=1 , t = 0 //
// i=2 , t = 1 //  1 3 5 2 4
// i=3 , t = 2 //  1 2 3 5 4
// i=4 , t = 3 //  1 2 3 4 5

void interchange_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] >= a[j])
                swap(a[i], a[j]);
        }
    }
}

void bubble_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
}
// 1 5 4 2 3
// i = 0 , j = 4 // 5 4 2 3 1
// i = 1 , j = 4 // 5 4 2 3 1
// i = 2 , j = 4 // 5 4 3 2 1
void merge(vector<int> &a, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while (i < n1)
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
}
void merge_sort(vector<int> &a, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int partition(vector<int> &a, int l, int r)
{
    int m = a[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < m)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}
void quick_sort(vector<int> &a, int l, int r) // mốc là phần tử cuối.
{
    if (l < r)
    {
        int k = partition(a, l, r);
        quick_sort(a, l, k - 1);
        quick_sort(a, k + 1, r);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>a;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    // selection_sort(a,n);
    // insertion_sort(a,n);
    // interchange_sort(a,n);
    // bubble_sort(a,n);
    // merge_sort(a,0,n-1);
    // quick_sort(a,0,n-1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}