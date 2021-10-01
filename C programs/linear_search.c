#include <stdio.h>
#include <stdlib.h>

int linearSeach(int A[], int s, int n){
    for (int i = 0; i < n;i++){
        if(s==A[i])
            return i + 1;
    }
    return -1;
}

int main(void)
{
    int n,s;
    printf("Enter length of 1-D array \n");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements 1-D array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter key to be searched \n");
    scanf("%d", &s);

    // calling linear seach function
    int pos=linearSeach(A, s, n);
    if(pos==-1)
        printf("Unsuccesful");
    else
        printf("Position of the %d in A is %d", s, pos);
}