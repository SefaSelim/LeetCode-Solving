bool isPowerOfTwo(int n) {
    if (n == 1)
    return true;
    if(n == 0)
    return false;

int check = log(n)/log(2);
    if(log(n)/log(2)-check == 0||log(n)/log(2)-check< 0.000000001)
    {
        return true;
    }
    else
    return false;





}
