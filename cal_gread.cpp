#include<iostream>
#include<string>
using namespace std ;
int main()
{	char gread;
   float a = 4 , b=3 ,c=2 ,d=1 ,f=0 ;
   float sum  = 0 , sum1 = 0  , sum2 = 0 ,sum3= 0 , sum4 = 0;
   float ssum  = 0 , total = 0;
do
{
	
	cout<<"  Enter the letter gread ( if want exit use x ): " ;
	cin >>  gread;

	if((gread != 'a' )&& (gread != 'b')&& (gread != 'c')&& (gread != 'd')&& (gread != 'f'))
	{
		cout<< " new try input again " <<  endl ;
	}

	
	if(gread == 'a')
	{
	   sum += a ;
	   cout<< sum << endl ;
	}
	if(gread == 'b')
	{
	   sum1 += b ;
	   cout<< sum1 << endl ;
	}

	if(gread == 'c')
	{
	   sum2 += c ;
	   cout<< sum2 << endl ;
	}
	if(gread == 'd')
	{
	   sum3 += d ;
	   cout<< sum3 << endl ;
	}
	if(gread == 'f')
	{
	   sum4 += f ;
	   cout<< sum4 << endl ;
	}
	  total = sum + sum1+sum2+sum3+sum4 ;
	 ssum = total/ 5 ; 
}


while((gread != 'x') && (gread!= 'X')) ;
  cout<< "Total gread point : " <<total << endl ;
cout<< "gread :" <<ssum << endl ;
  return 0 ;
}