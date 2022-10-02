#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void romanToInt(string s)
{
      int intnumeral=0;
      int length=s.length();
    for(int i=0;i<length;i++)
    {
        char k;
        k=s[i];
        switch(k)
        {
            case 'M': 
                if(s[i]=='M')
            {
                if(s[i-1]=='C')
                {
                    intnumeral+=800;
                }
                else
                    intnumeral+=1000;
                
            }
                
            case 'D':
                if(s[i]=='D')
            {
                if(s[i-1]=='C')
                {
                    intnumeral+=300;
                }
                else
                    intnumeral+=500;
                
            }
            case 'C':
                if(s[i]=='C')
            {
                if(s[i-1]=='X')
                {
                    intnumeral+=80;
                }
                else
                    intnumeral+=100;
                
            }    
            case 'L':
                if(s[i]=='L')
            {
                if(s[i-1]=='X')
                {
                    intnumeral+=30;
                }
                else
                    intnumeral+=50;
                
            }    
            case 'X':
                if(s[i]=='X')
            {
                if(s[i-1]=='I')
                {
                    intnumeral+=8;
                }
                else
                    intnumeral+=10;
                
            }    
            case 'V':
                if(s[i]=='V')
            {
                if(s[i-1]=='I')
                {
                    intnumeral+=3;
                }
                else
                    intnumeral+=5;
                
            }    
            case 'I':
                if(s[i]=='I')
            {
                    intnumeral+=1;
                }
            }           
        }   
       cout<<"The number is : "<< intnumeral; 
    }
int main()
{
    string str;
    getline(cin,str);
    romanToInt(str);
    return 0;
}
