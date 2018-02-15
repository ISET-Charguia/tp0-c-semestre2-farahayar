#include<stdio.h>
int factorielle3(int n,int f)
{int i;
  for(i=1;i<=n;i++)
		{f=f*i;}
	return f;
}
int main (void)
{int f=1,n;
	do
	{
	puts("donner n");
	scanf("%d",&n);
	}while(n<0);
	f=factorielle3(n,f);
	printf("%d!=%d\n",n,f);
return 0;
	}
