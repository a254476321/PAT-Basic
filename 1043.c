#include <stdio.h>
int main()
{
    int a[6]= {0},i,j;
    char x;
    while((x=getchar())!='\n')
    {
        switch(x)
        {
        case 'P':
            a[0]++;
            break;
        case 'A':
            a[1]++;
            break;
        case 'T':
            a[2]++;
            break;
        case 'e':
            a[3]++;
            break;
        case 's':
            a[4]++;
            break;
        case 't':
            a[5]++;
            break;
        default:
            break;
        }
    }
    for(i=j=0; j<6; i=(i+1)%6)
    {
        if(a[i])
        {
            j=0;
            a[i]--;
            switch(i)
            {
            case 0:
                printf("P");
                break;
            case 1:
                printf("A");
                break;
            case 2:
                printf("T");
                break;
            case 3:
                printf("e");
                break;
            case 4:
                printf("s");
                break;
            default:
                printf("t");
            }
        }
        else
        {
            j++;//j=5时，输出完毕
        }
    }
    return 0;
}