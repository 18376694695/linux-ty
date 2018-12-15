#include<stdio.h>
#include<math.h>

int is_prime(int num)
{
    int i;
    for(i=1;i <= sqrt(num);i++)
    {
	if(num % i == 0)
	{
	    return 0;
	}
    }
    return 1;
}
int main()
{
    int i,a,b;
    int sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
	if(is_prime(i))
	{
	sum += i;
	}
    printf("%d\n",sum);
    return 0;
}
