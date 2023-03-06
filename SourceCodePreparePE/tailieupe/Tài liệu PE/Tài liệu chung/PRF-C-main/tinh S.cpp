#include<stdio.h>
#include<math.h>
main()
{
	long long n, w, i, sum=0;
	scanf("%lld%lld", &w, &n);
	for (i=1; i<=n; i++)
	{	
		long long a, b, x;
		scanf("%lld%lld", &a, &b);
		x=a*b;
		sum+=x;
	}
	printf("%.0lf", (double)sum/w);
}
