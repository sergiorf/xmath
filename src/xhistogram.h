/*
* Copyright (C) 2019, Sergio Rodriguez
*/
#include <vector>

class Xhistogram {
public:
  void build(const std::vector<float>& elements, int numBins);
  float operator()(const float x);
}
