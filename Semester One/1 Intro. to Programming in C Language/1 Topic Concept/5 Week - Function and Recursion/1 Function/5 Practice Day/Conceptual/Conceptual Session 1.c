// How to check max value from an array with recursion method!
#include <stdio.h>

int Arr[1001];
    

int maxFromThisIndex(int index, int n)
{
    if(index == n - 1)
    {
        return Arr[index];
    }
    int rightSideMax = maxFromThisIndex(index + 1, n);
    int wholeArrayMax;
    if(rightSideMax > Arr[index])
    {
        return rightSideMax;
    }
    else {
        return Arr[index];
    }
    
}
 
int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    printf("%d\n", maxFromThisIndex(0, N));
 
    return 0;
}
