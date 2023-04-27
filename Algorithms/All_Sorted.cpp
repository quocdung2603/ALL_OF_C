#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &a, int n)
{
    for(int i=0;i<n;i++)
    {
        int Min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[Min]) Min=j;
        }
        swap(a[i],a[Min]);
    }
}
void insertion_sort(vector<int>&a ,int n)
{
    for(int i=1;i<n;i++)
    {
        int x=a[i], pos=i-1;
        while(pos>=0 && a[pos]>x)
        {
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
    }
}
void interchange_sort(vector<int> &a ,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
}
void bubble_sort(vector<int>  &a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
}
void merge(vector<int>& a, int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    vector<int> L(n1), R(n2);
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int j=0;j<n2;j++) R[j]=a[m+1+j];
    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
}
void merge_sort(vector<int> &a, int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void quick_sort_mid(vector<int>&a ,int l, int r, int n) // Mốc ở giữa
{
    int p=a[l];
    int i=l, j=r;
    do
    {
        while (a[i]<p) i++;
        while (a[j]>p) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout <<endl;
    if(l<j) quick_sort_mid(a,l,j,n);
    if(i<r) quick_sort_mid(a,i,r,n);  
}
void quick_sort_right(vector<int>&a , int l , int r)
{
    int p=a[r];
    int i=l,j=r;
    do
    {
        while(a[i]<p) i++;
        while(a[j]>p) j--;
        if(i<=j) 
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) quick_sort_right(a,l,j);
    if(i<r) quick_sort_right(a,i,r);
}

void quick_sort_left(vector<int>&a, int l,int r)
{
    int p=a[l];
    int i=l , j=r;
    do
    {
        while(a[i] < p) i++;
        while(a[j] > p) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) quick_sort_left(a,l,j);
    if(i<r) quick_sort_left(a,i,r);
}
int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    //selection_sort(a,n);
    // insertion_sort(a,n);
    // interchange_sort(a,n);
    // merge_sort(a,0,n-1);
    quick_sort_mid(a,0,n-1,n);   // Moc o giua
    // quick_sort_right(a,0,n-1); // Moc o cuoi
    // quick_sort_left(a,0,n-1);  // Moc o dau
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
