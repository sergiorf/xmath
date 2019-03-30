
class XMatrix {
public:
	XMatrix(int rows, int cols);
	~XMatrix();
	inline int rows() const { return m_rows; }
	inline int cols() const { return m_cols; }
	inline double& at(int r, int c) const { return m_vals[m_cols * r + c]; }
private:
	const int m_rows;
	const int m_cols;
	double *m_vals;
};

