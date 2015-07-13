#include <armadillo.hpp>
#include "vecutils.h"

using namespace arma;

void sortArmaVecAscending(const vec& src, vec& sorted, uvec& idx);
void sortArmaVecDescending(const vec& src, vec& sorted, uvec& idx);