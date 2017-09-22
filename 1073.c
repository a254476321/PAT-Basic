#include<stdio.h>
#include<string.h>

int main()
{
    short n, m, i, j, k, max = 0, temp;
    scanf("%hd%hd", &n, &m);
    short score[m], ac[m], err[m][5];
    float stu_sco[n];
    memset(ac, 0, m << 1);
    memset(stu_sco, 0, n << 2);
    memset(err, 0, sizeof(err));
    for(i = 0; i < m; i++)
    {
        scanf("%hd%*d%hd", score + i, &j);
        while(j--)
        {
            getchar();
            ac[i] |= 1 << (getchar() - 97);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%*[^0-5]%hd", &k);
            temp = 0;
            while(k--)
            {
                getchar();
                temp |= 1 << (getchar() - 97);
            }
            if(temp == ac[j])
            {
                stu_sco[i] += score[j];
                continue;
            }
            if((temp | ac[j]) == ac[j])
            {
                stu_sco[i] += score[j] / 2.0;
            }
            temp ^= ac[j];
            while(temp != 0)
            {
                k = temp & -temp;
                switch(k)
                {
                    case 1: err[j][0]++; max < err[j][0] ? max = err[j][0] : 0; break;
                    case 2: err[j][1]++; max < err[j][1] ? max = err[j][1] : 0; break;
                    case 4: err[j][2]++; max < err[j][2] ? max = err[j][2] : 0; break;
                    case 8: err[j][3]++; max < err[j][3] ? max = err[j][3] : 0; break;
                    default: err[j][4]++; max < err[j][4] ? max = err[j][4] : 0;
                }
                temp -= k;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%.1f\n", stu_sco[i]);
    }
    if(max == 0)
    {
        puts("Too simple");
    }
    else
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(err[i][j] == max)
                {
                    printf("%hd %hd-%c\n", max, i + 1, 97 + j);
                }
            }
        }
    }
	return 0;
}