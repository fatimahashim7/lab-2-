 #include <iostream> 
using namespace std ; 
int main ()
{
   double price , totalcost; 
   int items ; 
   cout << " enter the price"; 
   cin>>price; 
   cout<<"\n enter the items"; 
   cin>>items;
   totalcost = price *items; 
   if (price>=100 && items>2)
   {
   totalcost = totalcost - ( totalcost*0.05 );
   if(totalcost>1000)
   totalcost = totalcost - ( totalcost*0.05 ) ;
   }
   else 
   totalcost = totalcost + 10 ; 
   cout<<"\n totalcost="<<totalcost; 
   return 0 ; 
}