#include <stdio.h>
int main()
{
    int r[101],i,j,n=0;
	for(i=0;i<100;i++)
	{	
		scanf("%d",&r[i]);
        n++;
        if(r[i]==0)
            break;
	}
	for(j=n-2;j>=0;j--)
    {
        printf("%d ",r[j]);
    }
	return 0;
}