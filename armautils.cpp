#include "stdafx.h"
#include "armautils.h"


void sortArmaVecAscending(const vec& src, vec& sorted, uvec& idx){

	std::vector<double> v;
	std::vector<double> vs;
	std::vector<unsigned int> vidx;

	for (unsigned int k = 0; k < src.n_elem; k++)
		v.push_back(src(k));

	sortVectorAscending(v, vs, vidx);

	sorted = vec(vs);
	idx = uvec(vidx);
}

void sortArmaVecDescending(const vec& src, vec& sorted, uvec& idx){

	std::vector<double> v;
	std::vector<double> vs;
	std::vector<unsigned int> vidx;

	for (unsigned int k = 0; k < src.n_elem; k++)
		v.push_back(src(k));

	sortVectorDescending(v, vs, vidx);

	sorted = vec(vs);
	idx = uvec(vidx);
}