#include<stdio.h>


int findNum(int num);
int main()
{
	int num = 20;	
	int cnt = 11;
	int mul = 2520;
	int ret = 0;
	while( cnt <= num)
	{

		if( 0 == mul % cnt) 
		{
			cnt++;
		}
		else
		{
			if( cnt % (mul % cnt) == 0)
			{
				mul *= (cnt / (mul % cnt));		
			}
			else
			{
				mul *=  cnt;		
			}
			cnt++;
		}	
	}
		printf(" the mul is:%d\n" , mul);
	return 0;
}
