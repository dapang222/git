#include<stdio.h>


int findNum(int num);
int main()
{
	int num = 1000;	
	int ret = findNum(num);
	printf(" the sum of the multiples of 3 or 5 below 1000 :%d\n" , ret);
	return 0;
}
int findNum(int num)
{
	if(0 == num)
	{
		return -1;
	}	
	int cnt = 3;	
	int sum = 0;
	while(cnt < num)
	{
		if((0 == cnt % 3 ) || (0 == cnt % 5))
		{
		 	printf(" the cnt is :%d\n" , cnt);
			sum += cnt ;
		}else{
			sum = sum;
		}	
		cnt++;
	}
	return sum;
}
