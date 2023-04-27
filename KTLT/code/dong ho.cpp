#include <bits/stdc++.h>
using namespace std;
int main(){
	int h, p, s;
	cin>> h >> p >> s;
	s++;
    if(s >= 59)
	{
		s=0
        p++;
    }
    if(60 <= p) 
	{	p=0;
        h++;
    }
    if(h==24)
    {
    	h=0;
    	p=0;
    	s=0;
    }
    cout<< h <<" "<< p <<" "<< s;
}
