
/*
	@author: Samuel Peng & Amir Aghazadeh
*/

#include <stdio.h>

char str[200];
int a[30], b[30];

int main()
{    
	int n, i;    
	
	scanf("%d", &n);    
	scanf("%s", str);   
	
	for(i = 0 ; i < n ; i++)    
	{        
		if(str[i] >= 'a' && str[i]<= 'z')
		{
			a[str[i] - 'a'] = 1; 
		}
		
		if(str[i] >= 'A' && str[i]<= 'Z')
		{
			b[str[i] - 'A'] = 1;    
		}
	}
	
	for(i = 0; i< 26; i++)
	{
		if(a[i] == 0 && b[i] == 0)
		{
			break;
		}
	}
			
	if(i < 26)        
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	
	return 0;
}