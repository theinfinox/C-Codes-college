#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch%2 == 0)
    {
        printf("'%c' is even.", ch);
    }
    else if(ch%2 != 0)
    {
        printf("'%c' is odd.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
