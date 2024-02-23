bool isPalindrome(int x) {
//beats % 80 ~ 100

//if x negative returning false
    if (x<0)
    {return false;}

//creating an array for checking elements head to tail
    int array[12];
    int check = 0,point = 0;

//placing elements to array with for()
for (int i = 0;x>0;x/=10,i++)
{
    array[i] = x%10;
    check++;
}

//checking
for (int i = 0, j= check-1 ; i<check/2 ; i++,j--)
{
    if (array[i]!=array[j])
    {point++;}
}

//if there is an incompatible element in array point wont be 0 and will return !true == false
return !point;
}
