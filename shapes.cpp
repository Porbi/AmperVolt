#include "shapes.hpp"

#include <algorithm>
#include <numeric>

double calculate_total_area(const std::vector<Shape*>& shapes) {
    return std::accumulate(shapes.begin(), shapes.end(), 0.0,
    [](double acc, const auto & shape_ptr) { return acc + shape_ptr->area(); });

}
