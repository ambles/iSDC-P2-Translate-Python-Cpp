#ifndef LOCALIZER_H
#define LOCALIZER_H

#include <vector>

// Initializes a grid of beliefs to a uniform distribution.
std::vector< std::vector <float> > initialize_beliefs(const std::vector< std::vector <char> > &grid);

/**
    Implements robot sensing by updating beliefs based on the
    color of a sensor measurement
*/
std::vector< std::vector <float> > sense(const char color,
	const std::vector< std::vector <char> > &grid,
	const std::vector< std::vector <float> > &beliefs,
	const float p_hit,
	const float p_miss);


/**
    Implements robot motion by updating beliefs based on the
    intended dx and dy of the robot.
*/
std::vector< std::vector <float> > move(const int dy, const int dx,
	const std::vector< std::vector <float> > &beliefs,
	const float blurring);

#endif /* LOCALIZER_H */
