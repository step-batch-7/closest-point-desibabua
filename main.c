#include <stdio.h>
#include "point.h"

int main(void)
{
  POINT food_points[] = FOOD_LOCATIONS;
  POINT organism_locations[] = ORGANISM_LOCATIONS;
  POINT current_location;
  POINT closest_food_location;

  int points_length = sizeof(food_points) / sizeof(POINT);

  REPEAT(0,points_length)
  {
    current_location = organism_locations[i];
    closest_food_location = food_points[0];
    get_closest_food(food_points, points_length, current_location, &closest_food_location);
    printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n", CURRENT_LOCATION, CLOSEST_FOOD_LOCATION);
  }
  return 0;
}