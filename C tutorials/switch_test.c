#include<stdio.h>
int main()
{
    int day; //m-monday,t-tuesday,w-wednesday,T-thursday,f-friday,S-saturday,s-sunday
    printf("Enter day:");
    scanf("%s",&day);

    switch (day) {
        case 'm' : printf("monday \n");
                   break;
        case 't' : printf("tuesday \n");
                   break;
        case 'w' : printf("wednesday \n");
                   break;
        case 'T' : printf("thursday \n");
                   break;
        case 'f' : printf("friday \n");
                   break;
        case 'S' : printf("saturday \n");
                   break;
        case 's' : printf("sunday \n");
                   break; 
        default : printf("not a valid day! \n");           

    }
}