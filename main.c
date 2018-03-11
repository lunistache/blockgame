#include <stdio.h>
#include <stdlib.h>


void plateforme(int map())
{
    int x, y;
    for (x=0; x<50; x++)
    {

        for (y=1; y<58; y++)
        {
            map[46][y]=2;
        }
        for (y=1; y<80; y++)
        {
            map[37][y]=;
        }
    }
}



int map()
{
    int x, y;

    int map [50][100];// x ligne y colonnes

    for (y=0; y<100; y++)// coté du carré
    {

        map[0][y]=0;
        map[49][y]=0;

    }

    for (y=0; y<50; y++)
    {

        map[y][0]=0;
        map[y][99]=0;

    }


    for (x=1; x<49; x++)
       for (y=1; y<99; y++)
          map[x][y]=1;
    for (x=0; x<50; x++)
    {
        for (y=0; y<100; y++)

        {

            printf("%d", map[x][y]);

        }
        printf("\n");// fin coté du carré

    }
    return 0;
}

int main()
{

}
