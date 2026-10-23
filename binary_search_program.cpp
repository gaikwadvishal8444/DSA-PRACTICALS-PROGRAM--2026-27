#include <iostream>
using namespace std;

int binary_search(int a[], int n, int x) {
    int first = 0, last = n - 1;
    
    while (first <= last) {
        int mid = first + (last - first) / 2;
        
        if (a[mid] == x) {
            return mid;
        } 
        else if (a[mid] < x) {
            first = mid + 1;
        } 
        else {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[10],x,n;
    cout<<"how many elements:";
    cin>>n;
    cout<<"enter"<<n<<"elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements to be searched";
    cin>>x;
    int position=binary_search(a,n,x);
    if(position==-1)cout<<"elements not found";
    else cout<<"elements found at position:"<<position;
    return(0);
}

/*PS D:\Mr. Vishal Eknath Gaikwad> cd "d:\Mr. Vishal Eknath Gaikwad\" ; if ($?) { g++ binary_search_program.cpp -o binary_search_program } ; if ($?) { .\binary_search_program }
how many elements:6
enter6elements:6 1 4 5 23 2
enter the elements to be searched4 
elements found at position:2
PS D:\Mr. Vishal Eknath Gaikwad> */
