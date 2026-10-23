#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)return(i);
    }
    return(-1);
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
    int position=linearsearch(a,n,x);
    if(position==-1)cout<<"elements not found";
    else cout<<"elements found at position:"<<position;
    return(0);
}

/*PS D:\Mr. Vishal Eknath Gaikwad> cd "d:\Mr. Vishal Eknath Gaikwad\" ; if ($?) { g++ linear_search_program.cpp -o linear_search_program } ; if ($?) { .\linear_search_program }
how many elements:9
enter9elements:10 20 30 40 50 60 70 80 90
enter the elements to be searched50
elements found at position:4
PS D:\Mr. Vishal Eknath Gaikwad> 
*/