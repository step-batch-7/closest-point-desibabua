#include <math.h>
#include "point.h"

//food_points = FPs
//points_length = P_length
//current_location = Curr_Loc
//closest_food_location = Closest_Fls

double get_distance(POINT *ptr_1,POINT *ptr_2)
{
	return hypot(ptr_1->x - ptr_2->x, ptr_1->y - ptr_2->y);
}

void get_closest_food(POINT FPs[], int P_length, POINT Curr_Loc, POINT *Closest_Fls)
{
	double distance = get_distance(&FPs[0], &Curr_Loc);
	double curr_food_distance;
	REPEAT(0, P_length)
	{
		curr_food_distance = get_distance(&FPs[i], &Curr_Loc);
		if (curr_food_distance < distance)
		{
			distance = curr_food_distance;
			Closest_Fls->x = FPs[i].x;
			Closest_Fls->y = FPs[i].y;
		}
	}
}
