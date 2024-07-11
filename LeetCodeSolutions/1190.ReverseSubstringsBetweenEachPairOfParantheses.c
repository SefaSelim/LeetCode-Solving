//BEATS %100 Runtime - %11 Memory
//This problem 2 days from me 

void PartReverser(char *charPtr , int a, int b )
{
    char c;
    for(int i = b-1,j=0,k=a+1;  j<(b-a)/2 ; i--,j++,k++)
    {
        c = charPtr[i];
        charPtr[i] = charPtr[k];
        charPtr[k] =c;
        
    }
 
    for(int i = b ; charPtr[i] != '\0' ; i++)
    {
        charPtr[i] = charPtr[i+1];
    }
        for(int i = a ; charPtr[i] != '\0' ; i++)
    {
        charPtr[i] = charPtr[i+1];
    }
}


int FindIndex(char *charPtr,int *IndexArrPtr)
{
    int check=0;
    for(int i = 0 ; charPtr[i] != '\0' ; i++)
    {
        switch(charPtr[i])
        {
            case '(':
            check = 1;
            IndexArrPtr[0] = i;
            break;
            
            case ')': 
            check++;
            IndexArrPtr[1] = i;
            break;
            
            default:
            break;
        }
        
        if(check == 2)
        {
            return  1;
        }
    }
    return  0;
}

char* reverseParentheses(char* s) {

int IndexArr[2];


while  (FindIndex(s,IndexArr))
{
    PartReverser(s,IndexArr[0],IndexArr[1]);
}

    return s;

}