#include<bits/stdc++.h>
using namespace std;

bool isOneAway(string s1, string s2)
{
	string a,b;
	a = s1.length() >= s2.length() ? s1 : s2;
	b = s1.length() < s2.length() ? s1 : s2;
	int len1, len2;
	len1 = a.length();
	len2 = b.length();
	if(abs(len1-len2)>1)
		return false;
	
	bool flag = false;
	for(int i=0,j=0;i<len1 && j<len2;)
	{
		if(a[i]!=b[j]){
			if(flag)
				return false;
			flag = true;
			if(len1 == len2)
				i++,j++;
			else
				i++;
		}
		else
			i++,j++;
	}
	return true;
}

int main(void){
//	string s1,s2;
//	getline(cin,s1);
//	getline(cin,s2);
//	if(isOneAway(s1,s2))
//		cout<<"One edit away."<<endl;
//	else
//		cout<<"Not one edit away."<<endl;
		
	
	int num;
	puts("Enter the size : ");
	cin>>num;
	int spac = num*2+1;

	spac -= 4;
	for(int i=0; i<=num-1; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int k=1;k<=spac;k++)
		{
			cout<<" ";
		}
		spac-=2;
		if(i!=num-1)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
