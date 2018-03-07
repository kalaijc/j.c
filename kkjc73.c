int main(void) 
{
	int l,n,r;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the left and right range:");
	scanf("%d %d",&l,&r);
	if(n>l && n<r)
	{
		printf("\n YES");
	}
	else
	{
		printf("\n NO");
	}
	return 0;
}
