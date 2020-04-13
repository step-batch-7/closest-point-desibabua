/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/

#define REPEAT(start,end) for(int i = start; i < end;i++)
#define FOOD_LOCATIONS {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}}
#define ORGANISM_LOCATIONS {{18, 86},{97,27},{69,7},{10,94},{36,27}}

#define LOCATION(point) point.x, point.y

typedef struct
{
  int x;
  int y;
} POINT;

double get_distance(POINT point_1, POINT point_2);
void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location);
