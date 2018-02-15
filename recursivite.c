#include<stdio.h>
int factorielle2(int n,int f)
{
   if(n==0||n==1)
	{return f;}
	else
	{return factorielle2(n-1,n*f);
	}
}
int main (void)
{int f=1,n;
        do
	{
	puts("donner n");
	scanf("%d",&n);
	}while(n<0);
	f=factorielle2(n,f);
	printf("%d!=%d\n",n,f);
return 0;
	}

