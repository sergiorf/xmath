/*
* Copyright (C) 2019, Sergio Rodriguez
*/
#include <ostream>

class XMatrix {
public:
	XMatrix(int rows, int cols);
	XMatrix(const XMatrix &m);
	~XMatrix();
	XMatrix& operator=(const XMatrix &m);
	inline int rows() const { return m_rows; }
	inline int cols() const { return m_cols; }
	inline double& at(int r, int c) const { return m_vals[m_cols * r + c]; }
	void fillRandom();
	double getValueAt(int r, int c) const;
	void setValueAt(int r, int c, double v);
	void print(const XMatrix& m);
	XMatrix sum(const XMatrix& m);
	XMatrix operator+(const XMatrix& m);
	double& operator()(int r, int c);
	double operator()(int r, int c) const;
private:
	const int m_rows;
	const int m_cols;
	double *m_vals;
};

std::ostream& operator<<(std::ostream& out, const XMatrix& m);