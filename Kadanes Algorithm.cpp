#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int i, j, n;
    n = sizeof(arr)/sizeof(arr[0]);
    int local_max = arr[0];
    // int local_max = INT_MIN;
    int sum = 0;
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
        local_max = max(sum,local_max);

        if(sum<=0){
          sum = 0;
        }
    }

cout<<local_max<<endl;

}
