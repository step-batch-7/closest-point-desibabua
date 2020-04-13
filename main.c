#include <stdio.h>
#include "point.h"

int main(void)
{
  POINT food_points[] = FOOD_LOCATIONS;
  POINT current_locations[] = ORGANISM_LOCATIONS;
  POINT closest_food_location;

  int points_length = sizeof(food_points) / sizeof(POINT);

  REPEAT(0,points_length)
  {
    get_closest_food(food_points, points_length, current_locations[i], &closest_food_location);
    printf("Location of organism: [%d %d],\t",LOCATION(current_locations[i]));
    printf("Closest food target : [%d %d]\n", LOCATION(closest_food_location));
  }
  return 0;
}