#include <iostream>
#include <iomanip>

using namespace std;

int sort(int* r, const int size) 
{
    int i = 0;
    for  (i = 0; i < size; i++)
    {  
        if (r[i] < 0 && r[i + 1] > 0) {
            int t = r[i];
            r[i] = r[i + 1];
            r[i+1] = t;
            i=i+1;
        }  
    }
    return r[i];
}

int main()
{
    const int size = 4;
    int arr[size] = { -8,1,-2,9 };

    for (int x = 0; x < size; x++) {
        cout << setw(2) << arr[x] << " ";
    }
    cout << endl;
    sort(arr, size);
    for (int i = 0; i < 4; i++) {
       cout << setw(2) << arr[i]<< " ";
    }
    cout << endl;
    system("pause");
    return 0;
}