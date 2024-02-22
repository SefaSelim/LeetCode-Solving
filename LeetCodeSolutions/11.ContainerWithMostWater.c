int maxArea(int* height, int heightSize) {

int left=0;
int right = heightSize-1;
int result=0;


while (right>left)
{

    if (height[left]<height[right])
{
    if (height[left]*(right-left)>result)
    {
     result = height[left]*(right-left);
    }
    left++;

}

else
{
    if(height[right]*(right-left)>result)
    {
        result = height[right]*(right-left);
    }
    right--;

}
}




return result;
}
