#include <stdio.h>


int main()
{
    char weather_forcast[20];

    printf("\nEnter the weather forcast (sunny, raining, cold): ");
    scanf("%s", &weather_forcast);

    if (strcmp(weather_forcast, "sunny")==0){
        printf("It's Sunny outside. Wear shorts and t-shirt.\n");
    }
    else{
        if(strcmp(weather_forcast, "raining")==0){
            printf("It's Raining outside. Wear raincoat and carry an umbrella.\n.\n");
        }
        else{
            if(strcmp(weather_forcast, "cold")==0){
                printf("It's Cold outside. Wear a jacket and gloves.\n");
            }else{
                printf("The weather doesn't require any specific outfit.\n");
            }
        }
        
    }
    return 0;
}
