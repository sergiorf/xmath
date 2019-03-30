#include "xmatrix.h"

XMatrix::XMatrix(int rows, int cols):
	m_rows(rows), m_cols(cols)
{
	m_vals = new double[m_rows * m_cols];
}

XMatrix::~XMatrix()
{
	delete[] m_vals;
}