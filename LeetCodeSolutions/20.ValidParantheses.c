bool isValid(char* s) {
    int ArrSize;

    for (int i = 0; s[i]!= NULL ; i++)
    {
        ArrSize++;
    }


    char StartCursors[ArrSize];
    int currentIndex =0;

    if (s[1]==NULL)
    return false;
    

    for (int i = 0 ; s[i]!= NULL ; i++)
    {
        switch (s[i]){
            
            case '{':
            StartCursors[currentIndex] = 'a';
            currentIndex++;
            break;

            case '[':
            StartCursors[currentIndex] = 'b';
            currentIndex++;
            break;

            case '(':
            StartCursors[currentIndex] = 'c';
            currentIndex++;
            break;

            case '}':

            currentIndex--;
    if(currentIndex < 0)
    {
        return false;
    }
            if(StartCursors[currentIndex] == 'a')
            {
            StartCursors[currentIndex] = NULL;

            }
            else 
            {return false;}
            break;

            case ']':
            currentIndex--;
    if(currentIndex < 0)
    {
        return false;
    }
            if(StartCursors[currentIndex] == 'b')
            {
            StartCursors[currentIndex] = NULL;

            }
            else 
            {return false;}
            break;

            case ')':

            currentIndex--;

        if(currentIndex < 0)
    {
        return false;
    }
            if(StartCursors[currentIndex] == 'c')
            {
            StartCursors[currentIndex] = NULL;

            }
            else 
            {return false;}
            break;

        }
    }


if (StartCursors[0]==NULL)
{
    return true;
}
else 
{
        return false;
}
}