#include <iostream>
using namespace std;

void bubblesort(int a[], int n)
{
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements:";
    cin >> n;

    cout << "Enter elements:";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubblesort(a, n);

    cout << "Sorted array:";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*PS D:\Mr. Vishal Eknath Gaikwad> cd 'd:\Mr. Vishal Eknath Gaikwad\output'
PS D:\Mr. Vishal Eknath Gaikwad\output> & .\'bubbule_sort_.exe'
Enter number of elements:5
Enter elements:96 69 63 25 45
Sorted array:25 45 63 69 96 
PS D:\Mr. Vishal Eknath Gaikwad\output> 

*/