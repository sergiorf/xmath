/*
* Copyright (C) 2019, Sergio Rodriguez
*/

class XMatrix {
public:
	XMatrix(int rows, int cols);
	XMatrix(const XMatrix &m);
	~XMatrix();
	inline int rows() const { return m_rows; }
	inline int cols() const { return m_cols; }
	inline double& at(int r, int c) const { return m_vals[m_cols * r + c]; }
	void fillRandom();
	double getValueAt(int r, int c) const;
	void setValueAt(int r, int c, double v);
	void print(const XMatrix& m);
private:
	const int m_rows;
	const int m_cols;
	double *m_vals;
};

