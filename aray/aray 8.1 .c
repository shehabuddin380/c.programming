#include<stdio.h>
int main()
{
    int ara[]={1,2,5,7,9,35,47,57,68,78,84,87,94,96,99,100};
    int low_indx=0;
    int high_indx=15;
    int mid_indx;
    int num=84;
    while(low_indx<=high_indx)
    {
        mid_indx=(low_indx+high_indx)/2;
        if(num== ara[mid_indx])
        {
            break;
        }
        if(num<ara[mid_indx])
        {
            high_indx = mid_indx - 1;
        }
        else
        {
            low_indx = mid_indx + 1;
        }
    }
    if(low_indx > high_indx)
    {
        printf("%d is not inj the aray\n");

    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
    }


    getch();
}
