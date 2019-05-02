#include <iostream>
#include <vector>

#include "simulate.h"
#include "debugging_helpers.h"

using namespace std;

int main() {

	vector < vector <char> > map;
	vector <char> mapRow;
	int i, j, randInt;
	char color;
	std::vector<int> pose(2);

	for (i = 0; i < 4; i++)
	{
		mapRow.clear();
		for (j=0; j< 4; j++)
		{
			randInt = rand() % 2;
			if (randInt == 0 ) {
				color = 'r';
			}
			else {
				color = 'g';
			}
			mapRow.push_back(color);
		}
		map.push_back(mapRow);
	}
	cout << "map is\n";
	Simulation simulation (map, 0.1, 0.9, pose);
	cout << "initialization success!\n";
	show_grid_t(map);

	cout << "x, y = (" << simulation.true_pose[0] << ", " << simulation.true_pose[1] << ")" << endl;
	return 0;
}
