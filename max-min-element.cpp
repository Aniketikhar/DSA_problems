/*#include <iostream>
using namespace std;

int findMin(int a[], int n)
{
    int min = 0;

    if (n == 1)
    {
        min = a[0];
    }

    if (a[0] > a[1])
    {
        min = a[1];
    }
    else
    {
        min = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int findMax(int a[], int n)
{
    int max = 0;

    if (n == 1)
    {
        max = a[0];
    }

    if (a[0] > a[1])
    {
        max = a[0];
    }
    else
    {
        max = a[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //int max = 0;

    cout << findMin(a, n) << endl;
    cout << findMax(a, n) << endl;

    return 0;
}
*/

////////////////////////////////////////////////////////
//another method

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT32_MIN;
    int max = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
        }
        else if (max > a[i])
        {
            max = a[i];
        }
    }
    cout << min << endl;
    cout << max << endl;

    return 0;
}