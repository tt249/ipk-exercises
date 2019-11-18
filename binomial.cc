#include "fcpp.hh"



int binomial(int n,int k)
{


  return cond (k==0 or n==k, 1, binomial (n-1,k-1) + binomial(n-1,k));
}






int main (int argc, char** argv)
{
  
  
    print(binomial(readarg_int(argc,argv,1),readarg_int(argc,argv,2)));

}
 
