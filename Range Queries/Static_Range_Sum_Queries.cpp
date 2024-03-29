
/* we will be using prefix sum algorithm
i.e. at ith position of the new array will give the sum of all elements till i-1 position of old array
old array:> 3 2 4  5   1  1  5 3
new array:> 3 5 9 14 15 16 21 24
so to get the sum of all the elements between 2nd and fourth position we will do 4th-1st element of new array.
i.e. 14-3
*/


#include <stdio.h>
#include <iostream>

int main()
{
    unsigned long long int n,q,a,b,i,temp;
    scanf("%llu%lu",&n,&q);
    unsigned long long int arr[n+1];
    arr[0]=0;
    for(i=1; i<=n; i++)
    {
        scanf("%llu",&temp);
        arr[i]=temp+arr[i-1];
    }
    for(i=0; i<q; i++)
    {
        scanf("%llu%llu",&a,&b);
        printf("%llu\n",arr[b]-arr[a-1]);
    }
}
