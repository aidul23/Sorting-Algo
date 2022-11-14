#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 1, 4, 6, 8, 7, 5};

    for(int i = 0 ; i < v.size() ; i++)
    {
        int minIndex = i;

        for(int j = i + 1 ; j < v.size() ; j++)
        {
            if(v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

