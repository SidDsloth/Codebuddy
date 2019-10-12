#include<iostream>
#include<string>
using namespace std;
void merge(int arr[],int l,int m, int r)
{
        int i,j,k;
        int n1=m-l+1;
        int n2=r-m;
        int L[n1],R[n2];
        for(i=0;i<n1;i++)
                L[i]=(arr[l+i]);
        for(j=0;j<n2;j++)
                R[j]=(arr[m+1+j]);
        i=0;
        j=0;
        k=l;
        int z=5;
        while(i<n1&&j<n2)
        {
                if((to_string(L[i])+to_string(R[j]))>(to_string(R[j])+to_string(L[i])))
                {
                        arr[k]=L[i];
                        i++;
                }
                else
                {
                        arr[k]=R[j];
                        j++;
                }
                k++;
        }
        while(i<n1)
        {
                arr[k]=L[i];
                i++;
                k++;
        }
        while(j<n2)
        {
                arr[k]=R[j];
                j++;
                k++;
        }
}
void MergeSort(int arr[],int l, int r)
{
        if(l<r)
        {
                int m=l+(r-l)/2;
                MergeSort(arr,l,m);
                MergeSort(arr,m+1,r);
                merge(arr,l,m,r);
        }
}
void integertostr(int A[], int size)
{
    string a1;
    for (int i=0; i < size; i++)
        a1=a1+to_string(A[i]);
    cout<<a1;
    cout<<"\n";
}
int main()
{
    int arr[] = {3, 30, 34, 5, 9};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr, 0, arr_size - 1);
    integertostr(arr,arr_size);
    return 0;
}
