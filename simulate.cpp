/**
	simulate.cpp

	Purpose: implements a Simulation class which
	simulates a robot living in a 2D world. Relies
	on localization code from localizer.py

	This file is incomplete! Your job is to make
	this code work.
*/

#include <iostream>
#include <algorithm>

#include "simulate.h"
#include "localizer.h"

using namespace std;

/**
Constructor for the Simulation class.
*/
Simulation::Simulation(vector < vector <char> > map,
	float blurring,
	float hit_prob,
	std::vector<int> start_pos
	)
{
	grid = map;
	blur = blurring;
	p_hit = hit_prob;
	p_miss = 1.0;
	beliefs = initialize_beliefs(map);
	incorrect_sense_prob = p_miss / (p_hit + p_miss);
	true_pose = start_pos;
	prev_pose = true_pose;
}

/**
Grabs colors from the grid map.
*/
vector <char> Simulation::get_colors() {
	vector <char> all_colors;
	char color;
	int i,j;
	for (i=0; i<height; i++) {
		for (j=0; j<width; j++) {
			color = grid[i][j];
			if(std::find(all_colors.begin(), all_colors.end(), color) != all_colors.end()) {
				/* v contains x */
			} else {
				all_colors.push_back(color);
				cout << "adding color " << color << endl;
				/* v does not contain x */
			}
		}
	}
	colors = all_colors;
	num_colors = colors.size();
	return colors;
}

/**
You can test your code by running this function.

Do that by first compiling this file and then
running the output.
*/
