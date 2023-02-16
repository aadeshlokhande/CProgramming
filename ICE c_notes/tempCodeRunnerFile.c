include<stdio.h>
int square(int a)
{
    int ans;
    ans = a * a;
    return ans;
}

int main()
{
    int sq;
    sq = square(3);
    printf("Square = %d",sq);
}