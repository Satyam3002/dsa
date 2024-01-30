#include <iostream>
using namespace std;

int findmissing(int arr[], int n);

int main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;


    

   cout <<"missing element is "<<findmissing(arr,n);
}


int findmissing(int arr[], int n)
{
    int s=0;
    int e = n-1;
    int mid= s + (e-s)/2;
    int ans = -1;


    while (s<=e)
    {
        int diff = arr[mid]-mid;

        if (diff==1)
        {
            /* code */
            s = mid +1 ;
        }

        else {
            ans = mid;
            e= mid - 1 ;

        }
        mid = s +(e-s)/2;
    }

    if (ans +1==0)
    {
        /* code */
        return n+1;
    }
    
     return ans+1; 
}