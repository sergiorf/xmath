/*
* Copyright (C) 2019, Sergio Rodriguez
*/

#include "xmatrix.h"
#include <cstdlib>
#include <stdexcept>
#include <iostream>
#include <iomanip>

XMatrix::XMatrix(int rows, int cols):
	m_rows(rows), m_cols(cols)
{
	m_vals = new double[m_rows * m_cols];
}

XMatrix::XMatrix(const XMatrix &m) : m_rows(m.m_rows), m_cols(m.m_cols)
{ 
	m_vals = new double[m_rows * m_cols];
	for (int i = 0; i < m_rows * m_cols; ++i) {
		m_vals[i] = m.m_vals[i];
	}
}

XMatrix::~XMatrix()
{
	delete[] m_vals;
}

XMatrix& XMatrix::operator=(const XMatrix &m)
{
	if (this != &m) { 
		if (m_rows != m.m_rows or m_cols != m.m_cols) {
			throw std::out_of_range("Cannot assign matrix with different dimensions");
		}
		for (int i = 0; i < m_rows * m_cols; ++i) {
			m_vals[i] = m.m_vals[i];
		}
	}
	return *this;
}

void XMatrix::fillRandom()
{
	for (int r = 0; r < m_rows; ++r) {
		for (int c = 0; c < m_cols; c++) {
			at(r, c) = (rand() % 100 / 10.0);
		}
	}
}

void XMatrix::setValueAt(int r, int c, double v)
{
	if (r < 0 or r >= m_rows or c < 0 or c >= m_cols) {
		throw std::out_of_range("Out of range at Matrix::setValueAt");
	}
	at(r, c) = v;
}

double XMatrix::getValueAt(int r, int c) const
{
	if (r < 0 or r >= m_rows or c < 0 or c >= m_cols) {
		throw std::out_of_range("Out of range at Matrix::getValueAt");
	}
	return at(r, c);
}

void print(const XMatrix& m)
{
	std::cout << std::fixed << std::setprecision(1);
	for (int r = 0; r < m.rows(); ++r) {
		for (int c = 0; c < m.cols(); ++c) {
			std::cout << (c > 0 ? " " : "") << std::setw(4);
			std::cout << m.getValueAt(r, c);
		}
		std::cout << std::endl;
	}
}

XMatrix XMatrix::sum(const XMatrix &m)
{
	if (m_rows != m.m_rows or m_cols != m.m_cols) {
		throw std::invalid_argument("Matrix dimensions do not match at XMatrix::sum");
	}
	XMatrix ret(m_rows, m_cols);
	for (int i = 0; i < m_rows * m_cols; ++i) {
		ret.m_vals[i] = m_vals[i] + m.m_vals[i];
	}
	return ret;
}

XMatrix XMatrix::operator+(const XMatrix &m)
{
	return sum(m);
}

double& XMatrix::operator()(int r, int c)
{
	return at(r, c);
}

double XMatrix::operator()(int r, int c) const
{
	return at(r, c);
}

std::ostream& operator<<(std::ostream& out, const XMatrix& m)
{
	if (out) {
		out << std::fixed << std::setprecision(1);
		for (int r = 0; r < m.rows(); ++r) {
			for (int c = 0; c < m.cols(); ++c) {
				out << (c > 0 ? " " : "") << std::setw(4);
				out << m.getValueAt(r, c);
			}
			out << std::endl;
		}
	}
	return out;
}



