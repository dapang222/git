#include<stdio.h>
#include<math.h>

int find(long long int num);
int main()
{
	long long int num = 600851475143;
	int ret = 0;
	ret = find(num);
	printf("the num is: %d",ret);
	return 0;	
}	
/*************************************************
Function Name:  //find 
Description：   //函数功能描述
Input Param：  //num
Output Param： //
Return:        //
Author：      //
Date：        //
History：     //
*************************************************/
int find( long long int num)
{
	int cnt = 2;
	int saveMax = 0;
	while(cnt <= num)
	{
		if( 0 == (num % cnt))
		{
			printf("the ret is: %d\n",cnt);
			saveMax = cnt;
			num /= cnt; 
			cnt = 2;
		}
		else
		{
			;
		}		
		cnt++;
	}
		return saveMax;
}

