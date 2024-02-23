int mySqrt(int x) {

//main code
 float  num = 1;
for (int i = 0; i<19;i++)
{
    num = (num + x/num)/2;
}

//float cant afford process correctly
long long cache = num;

//verification of close values like (n*n-1) --> normally can be conclude by wrong values
if (cache*cache > x)
{return cache-1;}

return num;
}

