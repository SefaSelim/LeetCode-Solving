long digitFinder(long x)
{
    int digit = 0;
    while (x>0)
    {
        x = x/10;
        digit++;
    }
    return digit;
}

long powFinder(long t,int us)
{
    if (us==0)
    {return 1;}
us--;
return powFinder(t,us)*t;
}

int reverse(int x){
if (x>1534236000||x<=-2147483648)
{return 0;}
int negative = 0;

if (x <0)
{negative = 1;  x = -x;}

int n = digitFinder(x)-1;
long sum=0;
while (x>0)
{
    sum += (x%10)*powFinder(10,n);
    x/=10;
    n--;
}
if (negative == 1 )
{
    sum *=-1;
}
if (sum>2147483648||sum<=-2147483648)
{return 0;}
return sum;
}




