#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int t,i,j=0,len_text,len_pat,flag;
	char text[10000], pattern[10000];
	
	cin>>t;
	while(t--)
	{
		//cin.ignore();
		cin.clear();
		fflush(stdin);
		cin.getline(text,10000,'\n');
		//cin.ignore();
		cin.clear();
		fflush(stdin);
		cin.getline(pattern,10000,'\n');
		//cin.ignore();
		cin.clear();
		fflush(stdin);
		//scanf("%s",text);
		//scanf("%s",pattern);
		//len_text= sizeof(text)/sizeof(text[0]);
		//len_pat= sizeof(pattern)/sizeof(pattern[0]);
		//std::getline(std::cin,text);
		//std::getline(std::cin,pattern);
		len_pat= strlen(pattern);
		len_text= strlen(text);
		i=0;
		int count=0; 
		while(i<=len_text-len_pat)
		{
			flag=1;
			for(j=0;j<len_pat;++j)
			{
				if(text[i+j]!=pattern[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				++count;
			}
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}
