#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 1, 4, 6, 8, 7, 5};

    int cost = 0;
    for(int i = 1 ; i < v.size() ; i++)
    {
        int key = v[i];
        int j = i - 1;

        while(j >= 0 && v[j] > key)
        {
            cost++;
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<cost<<endl;
    return 0;
}
