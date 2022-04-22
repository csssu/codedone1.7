
/*
	@author: Samuel Peng & Amir Aghazadeh
*/

#include <iostream>

using namespace std;

string str;
int a[30], b[30];

int main()
{    
	int n, i;    
	
	cin >> n;    
	cin >> str;   
	
	for(i = 0 ; i< n ; i++)    
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
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	
	return 0;
}