#include<iostream.h>
void main()
{
	int a,b,c;
	cout<<"Enter the three numbers a,b,c\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a is bigger than b,c";
		}
	    else
	    {
	    	cout<<"c is bigger than a,b";
	    }
	}
	if(b>a)
	{
		if(b>c)
		{
			cout<<"b is bigger than a,c";
		}
	    else
	    {
	    	cout<<"c is bigger than a,b";
	    }
	}
	
}