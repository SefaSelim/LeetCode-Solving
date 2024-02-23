int lengthOfLastWord(char* s) {
int point = 0,check = 0;

for ( int i = 0 ; s [i]!= '\0';i++)
{
    switch (s[i]) {

        case ' ':
        check = 1;
        break;

        default:
        if (check == 1)
        {
            point = 0;
        }
        check = 0;
        point++;
        break;

    }
}
return point;
}
