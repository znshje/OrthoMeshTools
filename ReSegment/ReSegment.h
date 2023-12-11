#ifndef RESEGMENT_H
#define RESEGMENT_H
#include <string>
#include <vector>

void ReSegmentLabels(
    std::string input_oralscan,
    const std::vector<std::vector<std::vector<double>>> &splitlines, 
    const std::vector<int>& splitline_labels, 
    std::string output_json, 
    double intersection_width, 
    int cutface_orit_smooth,
    bool upper);

#endif