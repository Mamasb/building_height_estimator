#include <stdio.h>
#include <math.h>

int main(void)
{
    double observer_height;                 /* Height of the observer (e.g., a person) in meters */
    double distance_to_building;            /* Distance from the observer to a building in meters */
    double angle_of_elevation_degrees;      /* Angle of elevation in degrees */
    double height_of_building;              /* Height of the building in meters */
    double angle_of_elevation_radians;      /* Angle of elevation in radians */

    /* Prompt the user to input observer's height */
    printf("Enter your height (in meters): ");
    scanf("%lf", &observer_height);

    /* Prompt the user to input distance to the building */
    printf("Enter the distance to the building (in meters): ");
    scanf("%lf", &distance_to_building);

    /* Prompt the user to input angle of elevation */
    printf("Look up at the top of the building and measure the angle of elevation (in degrees): ");
    scanf("%lf", &angle_of_elevation_degrees);

    /* Convert angle from degrees to radians */
    angle_of_elevation_radians = angle_of_elevation_degrees * (M_PI / 180.0);

    /* Calculate the height of the building using tangent function */
    height_of_building = distance_to_building * tan(angle_of_elevation_radians);

    /* Add observer's height to get total height of the building */
    height_of_building += observer_height;

    /* Print the height of the building */
    printf("The estimated height of the building is approximately: %.2f meters\n", height_of_building);

    return 0;
}
