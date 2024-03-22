#include <stdio.h>

// int main()
// {
//     char clr;
//     printf("\nEnter the color of the traffic light (R,O,G):");
//     clr = getc(stdin);
//     if (clr == 'R')
//     {
//         printf("\nStop the vehical until green light glows.");
//     }
//     else if (clr == 'O')
//     {
//         printf("\nStart the vehical and proceed");
//     }
//     else if (clr == 'G')
//     {
//         printf("\nDrive...................");
//     }
//     else{
//         printf("\nTraffic light are off. \nhence move slowly considering the flow of traffic\n");
//     }
//     printf("\nSpped Kills\n\n");
//     return 0;
// }



int main()
{
    char clr;
    printf("\nEnter the color of the traffic light (R,O,G):");
    clr = getc(stdin);
    if (clr == 'R')
    {
        printf("\nStop the vehical until green light glows.");
    }
    else if (clr == 'O')
    {
        printf("\nStart the vehical and proceed");
    }
    else if (clr == 'G')
    {
        printf("\nDrive...................");
    }
    else{
        printf("\nTraffic light are off. \nhence move slowly considering the flow of traffic\n");
    }
    printf("\nSpped Kills\n\n");
    return 0;
}