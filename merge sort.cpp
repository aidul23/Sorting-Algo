#include<bits/stdc++.h>
using namespace std;

void mergeThem(vector<int> &v, int L, int M, int R)
{
    vector<int> temp;

    int i,j;
    i = L;
    j = M + 1;

    while(i <= M && j <= R)
    {
        if(v[i] <= v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }

    while(i <= M)
    {
        temp.push_back(v[i]);
        i++;
    }

    while(j <= R)
    {
        temp.push_back(v[j]);
        j++;
    }

    for(int i = L; i<=R; i++)
        v[i] = temp[i - L];
}

void mergeSort(vector<int> &v, int L, int R)
{
    if(L < R)
    {
        int M = (L + R) / 2;
        mergeSort(v, L, M);
        mergeSort(v, M + 1, R);
        mergeThem(v, L, M, R);
    }
}

int main()
{
    vector<int> v = {8,2,6,-1,4,10,7,0};
    mergeSort(v, 0, v.size() - 1);

    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
