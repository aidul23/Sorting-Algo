#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 4, 3, 0, 2, 1, 7, 1, 4, 3, 0};

    int maxE = *max_element(v.begin() , v.end());

    vector<int> c(maxE);

    vector<int> output(v.size());

    for(int i = 0 ; i < v.size() ; i++)
    {
        c[v[i]]++;
    }

    for(int i = 1 ; i <= maxE ; i++)
    {
        c[i] += c[i - 1];
    }

    for(int i = v.size() - 1 ; i >= 0 ; i--)
    {
        output[--c[v[i]]] = v[i];
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        v[i] = output[i];
    }

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}

